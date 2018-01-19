// built-in include guard removal
// just in case the user has a local dependency with the same file name
#if defined _inc_velocity
    #undef _inc_velocity
#endif
// custom include-guard to ensure we don't duplicate
#if defined _velocity_included
	#endinput
#endif
#define _velocity_included

#include <a_samp>

stock Float:GetPlayerTotalVelocity(playerid) {
	static
		Float:vx,
		Float:vy,
		Float:vz;

	if(IsPlayerInAnyVehicle(playerid)) {
		GetVehicleVelocity(GetPlayerVehicleID(playerid), vx, vy, vz);
	} else {
		GetPlayerVelocity(playerid, vx, vy, vz);
	}

	return floatsqroot((vx * vx) + (vy * vy) + (vz * vz) ) * 150.0;
}
