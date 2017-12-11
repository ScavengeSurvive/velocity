#include <test-boilerplate>

#include "velocity.inc"

main(){}

new PlayerText:text[MAX_PLAYERS];

public OnPlayerConnect(playerid) {
	text[playerid] = CreatePlayerTextDraw(playerid, 320.000000, 320.000000, "_");
	PlayerTextDrawAlignment(playerid, text[playerid], 2);
	PlayerTextDrawBackgroundColor(playerid, text[playerid], 255);
	PlayerTextDrawFont(playerid, text[playerid], 1);
	PlayerTextDrawLetterSize(playerid, text[playerid], 0.300000, 1.499999);
	PlayerTextDrawColor(playerid, text[playerid], -1);
	PlayerTextDrawSetOutline(playerid, text[playerid], 1);
	PlayerTextDrawTextSize(playerid, text[playerid], 100.0, 300.0);
}

public OnPlayerUpdate(playerid) {
	new str[64];
	format(str, sizeof(str), "%f", GetPlayerTotalVelocity(playerid));
	PlayerTextDrawSetString(playerid, text[playerid], str);
	PlayerTextDrawShow(playerid, text[playerid]);
	return 1;
}
