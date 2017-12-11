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
