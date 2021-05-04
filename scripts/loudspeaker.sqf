hint "사이렌이 울립니다.";
GOM_fnc_baseLoudspeakers = {

	params ["_loudspeakers","_sounds"];

	GOM_fnc_basePlaySounds = true;

	while {GOM_fnc_basePlaySounds} do {

		sleep random [1,2,3]; //Amount of random time it will take to play in seconds. I recommend you keep it, currently set at 5 minute, 10 minute and 15 minute random intervals

		{

			_sound = selectRandom _sounds;

			if (alive _x) then {

				[_x,_sound] remoteExec ["say3D",0];

			};

		} forEach _loudspeakers;

	};

};

//to call it:

_loudspeakers = [shootrg1,shootrg2,shootrg3,shootrg4,shootrg5,shootrg6]; //Object variable name change this to suit your needs. If you wish to add more than two simply continue with a , after the name
_sounds = ["shootrg"]; //Name of the sound file replace to suit your needs.

_play = [_loudspeakers, _sounds] spawn GOM_fnc_baseLoudspeakers;