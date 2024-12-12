/* initServer.sqf
 *
 * Executed only on server when mission is started.
 *
 * More info: https://community.bistudio.com/wiki/Event_Scripts#initServer.sqf
 */

// spawn arsenal at respawn marker logic
_arsenal "C_IDAP_supplyCrate_F" createVehicle getPosASL respawn_logic;

// does ACE exist?
if (isClass (configFile >> "CfgPatches" >> "ace_main")) then {
	// init ACE arsenal
	[_arsenal, true] call ace_arsenal_fnc_initBox;
} else {
	// init vanilla arsenal
	["AmmoboxInit", [_arsenal, true]] call BIS_fnc_arsenal;
};