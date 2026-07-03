/*
	Author: YourName / Globe Mod
	Description: Универсальная система видеоплеера с поддержкой индексов и имен селекшенов.
	
	Синтаксис:
	[_object, _selection, _videoAlias] spawn Globe_fnc_playVideo;
*/

params [
	["_object", objNull, [objNull]],
	["_selection", 0, [0, ""]], // Принимает и число (0), и строку ("camo_0")
	["_videoAlias", "", [""]]
];

// Базовые проверки безопасности
if (isNull _object || _videoAlias == "") exitWith {};
if (!alive _object) exitWith {};

// Если на этом конкретном слоте объекта уже крутится видео, гасим его старый плеер
private _oldCtrl = _object getVariable [format ["Globe_assignedCtrl_%1", _selection], controlNull];
if (!isNull _oldCtrl) then {
	private _oldIDC = _object getVariable [format ["Globe_assignedIDC_%1", _selection], 65100];
	_oldIDC cutText ["", "PLAIN"];
};

disableSerialization;

// 1. Вытягиваем реальный путь к .ogv файлу из CfgPlayVideoLoop_G
private _videoPath = getText (configFile >> "CfgPlayVideoLoop_G" >> _videoAlias >> "path");
if (_videoPath == "") exitWith {
	diag_log format ["[Globe Video Error]: Видео '%1' не найдено в CfgVideos!", _videoAlias];
};

// 2. Выделяем свободный IDC слой для cutRsc (в диапазоне от 65100 до 65150)
private _currentIDC = uiNamespace getVariable ["Globe_LastUsedIDC", 65099];
_currentIDC = _currentIDC + 1;
if (_currentIDC > 65150) then { _currentIDC = 65100; };
uiNamespace setVariable ["Globe_LastUsedIDC", _currentIDC];

// 3. Инициализируем слой интерфейса из RscTitles
_currentIDC cutRsc ["RscMS_globe0", "PLAIN"];

// Даем движку один кадр и выдергиваем контрол видеоплеера
private _display = uiNamespace getVariable "Globe_RscMS0";
private _ctrl = _display displayCtrl _currentIDC;
if (isNull _ctrl) exitWith {};

// 4. Настраиваем скрытый видеоплеер за экраном
_ctrl ctrlSetPosition [-10, -10, 0, 0];
_ctrl ctrlSetText _videoPath;
_ctrl ctrlCommit 0;

// 5. Вешаем видеопоток на заданный селекшен (индекс или имя строки)
_object setObjectTexture [_selection, _videoPath];

// Привязываем уникальные переменные контроля к объекту с учетом имени/номера слота
_object setVariable [format ["Globe_assignedIDC_%1", _selection], _currentIDC];
_object setVariable [format ["Globe_assignedCtrl_%1", _selection], _ctrl];
_object setVariable [format ["Globe_videoAlias_%1", _selection], _videoAlias];

// 6. Умный обработчик автоповтора (Loop)
_ctrl ctrlAddEventHandler [
	"VideoStopped",
	{
		params ["_ctrl"];
		
		private _object = objNull;
		private _selection = 0;
		
		// Находим, какому объекту и какому именно слоту принадлежал этот плеер
		{
			private _obj = _x;
			{
				if ((_obj getVariable [_x, controlNull]) == _ctrl) exitWith {
					_object = _obj;
					// Вытаскиваем имя/индекс слота из названия переменной
					_selection = (_x splitString "_") select 3; 
					// Если в названии было число, конвертируем обратно в числовой тип
					if (!isNil {parseNumber _selection} && {str parseNumber _selection == _selection}) then {
						_selection = parseNumber _selection;
					};
				};
			} forEach (allVariables _obj select { _x select [0, 19] == "Globe_assignedCtrl_" });
			if (!isNull _object) exitWith {};
		} forEach (allMissionObjects "All");
		
		if (isNull _object) exitWith {};
		
		// Вытягиваем сохраненные настройки конкретного слота
		private _idc = _object getVariable [format ["Globe_assignedIDC_%1", _selection], 65100];
		private _alias = _object getVariable [format ["Globe_videoAlias_%1", _selection], ""];
		
		// Полностью зачищаем отработавший UI слой
		_idc cutText ["", "PLAIN"];
		
		// Если объект цел, перезапускаем петлю
		if (alive _object) then {
			_object setVariable [format ["Globe_assignedCtrl_%1", _selection], controlNull];
			[_object, _selection, _alias] spawn {
				sleep 0.03;
				_this call expEden_fnc_playVideoLoop;
			};
		} else {
			_object setObjectTexture [_selection, ""]; // Гасим экран при уничтожении
		};
	}
];
