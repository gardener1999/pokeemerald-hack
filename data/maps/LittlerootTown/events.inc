LittlerootTown_EventObjects::
	object_event 1, EVENT_OBJ_GFX_FAT_MAN, 0, 21, 0, 3, MOVEMENT_TYPE_WANDER_AROUND, 2, 1, 0, 0, NULL, FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
	object_event 2, EVENT_OBJ_GFX_FAT_MAN, 0, 13, 16, 3, MOVEMENT_TYPE_FACE_DOWN, 2, 1, 0, 0, LittlerootTown_EventScript_Guard, 0
	object_event 3, EVENT_OBJ_GFX_TRUCK, 0, 16, 4, 3, MOVEMENT_TYPE_NONE, 0, 0, FALSE, 0, LittlerootTown_EventScript_Truck, 0
	object_event 4, EVENT_OBJ_GFX_FISHERMAN, 0, 5, 18, 3, MOVEMENT_TYPE_NONE, 0, 0, FALSE, 0, NULL, FLAG_HIDE_RAUL
	object_event 5, EVENT_OBJ_GFX_FAT_MAN, 0, 13, 0, 3, MOVEMENT_TYPE_WALK_LEFT_AND_RIGHT, 6, 0, FALSE, 0, LittlerootTown_EventScript_CantGoOut, 0

LittlerootTown_MapWarps::
	warp_def 5, 8, 0, 1, MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F
	warp_def 5, 18, 0, 0, MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB

LittlerootTown_MapCoordEvents::
	coord_event 8, 0, 3, VAR_TEMP_0, 0, LittlerootTown_EventScript_Trapped
	coord_event 9, 0, 3, VAR_TEMP_0, 0, LittlerootTown_EventScript_Trapped
	coord_event 10, 0, 3, VAR_TEMP_0, 0, LittlerootTown_EventScript_Trapped
	coord_event 11, 0, 3, VAR_TEMP_0, 0, LittlerootTown_EventScript_Trapped
	coord_event 12, 0, 3, VAR_TEMP_0, 0, LittlerootTown_EventScript_Trapped
	coord_event 7, 0, 3, VAR_TEMP_0, 0, LittlerootTown_EventScript_Trapped
	coord_event 13, 0, 3, VAR_TEMP_0, 0, LittlerootTown_EventScript_Trapped
	coord_event 4, 19, 3, VAR_TEMP_0, 0, LittlerootTown_EventScript_Raul_Letsgo_1
	coord_event 6, 19, 3, VAR_TEMP_0, 0, LittlerootTown_EventScript_Raul_Letsgo_3
	coord_event 5, 20, 3, VAR_TEMP_0, 0, LittlerootTown_EventScript_Raul_Letsgo_2

LittlerootTown_MapBGEvents::
	bg_event 9, 18, 3, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_EventScript_ResearchCenterSign
	bg_event 7, 8, 3, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_EventScript_SafehouseSign

LittlerootTown_MapEvents::
	map_events LittlerootTown_EventObjects, LittlerootTown_MapWarps, LittlerootTown_MapCoordEvents, LittlerootTown_MapBGEvents
