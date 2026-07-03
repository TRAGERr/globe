/*
    bis_fnc_attributeFlagTextures
    Исправленная версия для корректной работы с путями текстур
*/

params["_control"];

// Нормализует путь к текстуре флага (для сравнения)
private _fnc_normalizePath = {
    params ["_path"];
    if (_path == "") exitWith {""};
    
    private _normalized = toLower _path;
    
    // Убираем кавычки если есть (из строки init)
    _normalized = _normalized trim ["'", 2];
    
    // Убираем начальный обратный слеш если есть
    if (_normalized select [0, 1] == "\") then {
        _normalized = _normalized select [1];
    };
    
    _normalized
};

// Восстанавливает полный путь для отображения
private _fnc_getDisplayPath = {
    params ["_path"];
    if (_path == "") exitWith {""};
    
    // Добавляем обратный слеш если его нет
    if (_path select [0, 1] != "\") then {
        _path = "\" + _path;
    };
    
    _path
};

// Добавляем "Empty" вариант
private _lbadd = _control lbadd "Empty";
_control lbsetdata [_lbadd, ""];
_control lbsetpicture [_lbadd, ""];
_control lbsettooltip [_lbadd, ""];
_control lbsetpictureright [_lbadd, ""];

// Для отладки - получаем текущий флаг выбранного объекта
private _object = get3DENSelected "Object" param [0, objNull];
private _currentFlagNormalized = "";
if (!isNull _object && {_object isKindOf "FlagCarrier"}) then {
    private _currentFlag = flagTexture _object;
    _currentFlagNormalized = [_currentFlag] call _fnc_normalizePath;
    systemChat format ["Текущий флаг объекта: %1 -> %2", _currentFlag, _currentFlagNormalized];
};

// Собираем все флаги из конфигов
private _addedFlags = [];
private _displayPaths = createHashMap; // Для хранения оригинальных путей по нормализованным

{
    private _config = _x;
    if (getText(_config >> 'displayname') != '' && 
        getNumber(_config >> 'scope') == 2 && 
        (configName _config isKindOf "FlagCarrier")) then {

        private _initCode = getText (_config >> "EventHandlers" >> "init");
        if (_initCode == "") then { continue };
        
        // Извлекаем путь из строки init
        private _words = _initCode splitString " ";
        if (count _words >= 5) then {
            private _originalPath = _words select 4;
            _originalPath = _originalPath regexReplace ["'", ""];
            
            // Нормализуем путь для сравнения
            private _normalizedPath = [_originalPath] call _fnc_normalizePath;
            
            // Проверяем на дубликаты
            if (!(_normalizedPath in _addedFlags)) then {
                _addedFlags pushBack _normalizedPath;
                _displayPaths set [_normalizedPath, _originalPath];
                
                // Получаем путь для отображения (с \)
                private _displayPath = [_originalPath] call _fnc_getDisplayPath;
                
                _lbadd = _control lbadd getText(_config >> 'displayname');
                _control lbsetdata [_lbadd, _normalizedPath]; // Для сравнения - нормализованный
                _control lbsetpicture [_lbadd, _displayPath]; // Для отображения - с \
                _control lbsettooltip [_lbadd, (_control lbtext _lbadd) + '\n' + _normalizedPath];
                
                // Проверяем, совпадает ли с текущим флагом объекта
                if (_normalizedPath == _currentFlagNormalized) then {
                    _control lbSetCurSel _lbadd;
                };
                
                // DLC иконка
                private _dlcLogo = if (configsourcemod _config == '') then {''} else {modParams [configsourcemod _config, ['logo']] param [0,'']};
                if (_dlcLogo != '') then {
                    _control lbsetpictureright [_lbadd, _dlcLogo];
                };
            };
        };
    };
} foreach configproperties [configfile >> 'CfgVehicles','isclass _x'];

// Сортируем список
lbSort _control;

// Если текущий флаг не найден в списке, но он есть у объекта
if (_currentFlagNormalized != "" && lbCurSel _control == -1) then {
    systemChat format ["Флаг не найден в списке, добавляем: %1", _currentFlagNormalized];
    
    // Получаем displayName
    private _displayName = "[Current Flag]";
    private _displayPath = if (_currentFlagNormalized in _displayPaths) then {
        [_displayPaths get _currentFlagNormalized] call _fnc_getDisplayPath
    } else {
        // Создаем путь для отображения из нормализованного
        "\" + _currentFlagNormalized
    };
    
    _lbadd = _control lbadd _displayName;
    _control lbsetdata [_lbadd, _currentFlagNormalized];
    _control lbsetpicture [_lbadd, _displayPath];
    _control lbsettooltip [_lbadd, _displayName + '\n' + _currentFlagNormalized];
    _control lbSetCurSel _lbadd;
};

// Если ничего не выбрано, выбираем "Empty"
if (lbCurSel _control == -1) then {
    _control lbSetCurSel 0;
};

_control;