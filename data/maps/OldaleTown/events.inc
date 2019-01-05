OldaleTown_EventObjects::
	object_event 1, EVENT_OBJ_GFX_FISHERMAN, 0, 8, 10, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, FALSE, 0, NULL, FLAG_HIDE_RAUL
	object_event 2, EVENT_OBJ_GFX_TRUCK, 0, 10, 26, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, FALSE, 0, NULL, 0

OldaleTown_MapWarps::
	warp_def 8, 17, 0, 0, MAP_OLDALE_TOWN_HOUSE1
	warp_def 10, 9, 0, 0, MAP_OLDALE_TOWN_HOUSE2
	warp_def 14, 9, 0, 0, MAP_OLDALE_TOWN_POKEMON_CENTER_1F
	warp_def 16, 21, 0, 0, MAP_OLDALE_TOWN_MART

OldaleTown_MapCoordEvents::
	coord_event 4, 10, 3, VAR_TEMP_0, 0, OldaleTown_EventScript_CheckIfStepped1
	coord_event 5, 11, 3, VAR_TEMP_0, 0, OldaleTown_EventScript_CheckIfStepped2
	coord_event 6, 10, 3, VAR_TEMP_0, 0, OldaleTown_EventScript_CheckIfStepped3

OldaleTown_MapEvents::
	map_events OldaleTown_EventObjects, OldaleTown_MapWarps, OldaleTown_MapCoordEvents, 0x0
