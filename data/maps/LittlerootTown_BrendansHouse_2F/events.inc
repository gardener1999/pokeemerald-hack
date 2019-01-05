LittlerootTown_BrendansHouse_2F_EventObjects::
	object_event 1, EVENT_OBJ_GFX_PROF_BIRCH, 0, 2, 7, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, FALSE, 0, LittlerootTown_BrendansHouse_2F_EventScript_Thomas_AlreadyTalked, FLAG_TEMP_1

LittlerootTown_BrendansHouse_2F_MapWarps::
	warp_def 7, 1, 3, 2, MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F

LittlerootTown_BrendansHouse_2F_MapCoordEvents::
	coord_event 6, 5, 3, VAR_TEMP_0, 0, LittlerootTown_BrendansHouse_2F_EventScript_CheckThomas_3
	coord_event 5, 4, 3, VAR_TEMP_0, 0, LittlerootTown_BrendansHouse_2F_EventScript_CheckThomas_4
	coord_event 5, 6, 3, VAR_TEMP_0, 0, LittlerootTown_BrendansHouse_2F_EventScript_CheckThomas_2
	coord_event 4, 5, 3, VAR_TEMP_0, 0, LittlerootTown_BrendansHouse_2F_EventScript_CheckThomas

LittlerootTown_BrendansHouse_2F_MapEvents::
	map_events LittlerootTown_BrendansHouse_2F_EventObjects, LittlerootTown_BrendansHouse_2F_MapWarps, LittlerootTown_BrendansHouse_2F_MapCoordEvents, 0x0
