/*
	bin_fnc_deconShowerMove
*/
params
[
	"_object"
];

while{alive _object && !(_object getVariable ["BIN_Shower_Stop",false])}do
{
	{
		switch (_object animationSourcePhase _x) do
		{
			case 1:
			{
				_object animateSource [_x,0];
			};
			case 0:
			{
				_object animateSource [_x,1];
			};
		};
	}foreach ["Sprinkler_1_move","Sprinkler_2_move","Sprinkler_3_move"];
	sleep 0.5;
};