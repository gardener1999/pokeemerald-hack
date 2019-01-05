OldaleTown_House1_MapWarps::
	warp_def 2, 8, 0, 0, MAP_LILYCOVE_CITY_DEPARTMENT_STORE_ELEVATOR
	warp_def 3, 8, 0, 0, MAP_LILYCOVE_CITY_DEPARTMENT_STORE_ELEVATOR
	warp_def 12, 1, 3, 0, MAP_NEW_MAP2

OldaleTown_House1_MapCoordEvents::
	coord_event 2, 2, 3, VAR_TEMP_0, 0, OldaleTown_House1_EventScript_KnockOnDoor
	coord_event 7, 2, 3, VAR_TEMP_0, 0, OldaleTown_House1_EventScript_KnockOnDoor2
	coord_event 12, 2, 3, VAR_TEMP_0, 0, OldaleTown_House1_EventScript_KnockOnDoor3

OldaleTown_House1_MapEvents::
	map_events 0x0, OldaleTown_House1_MapWarps, OldaleTown_House1_MapCoordEvents, 0x0
