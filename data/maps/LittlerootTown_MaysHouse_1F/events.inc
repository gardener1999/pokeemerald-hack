LittlerootTown_MaysHouse_1F_EventObjects: @ 852D36C
	object_event 1, EVENT_OBJ_GFX_MOM, 0, 8, 6, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 0, 0, LittlerootTown_MaysHouse_1F_EventScript_2929C5, FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MOM
	object_event 4, EVENT_OBJ_GFX_WOMAN_4, 0, 8, 7, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 0, 0, LittlerootTown_MaysHouse_1F_EventScript_1F89F3, FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_MOM
	object_event 5, EVENT_OBJ_GFX_NORMAN, 0, 5, 6, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, 0, 0, 0x0, FLAG_HIDE_PLAYERS_HOUSE_DAD
	object_event 6, EVENT_OBJ_GFX_NINJA_BOY, 0, 9, 5, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 1, 0, 0, LittlerootTown_MaysHouse_1F_EventScript_1F8A3D, FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_SIBLING
	object_event 7, EVENT_OBJ_GFX_RIVAL_MAY_NORMAL, 0, 2, 8, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, 0, 0, 0x0, FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_BRENDAN

LittlerootTown_MaysHouse_1F_MapWarps: @ 852D414
	warp_def 1, 8, 0, 0, MAP_LITTLEROOT_TOWN
	warp_def 2, 8, 0, 0, MAP_LITTLEROOT_TOWN
	warp_def 2, 2, 0, 0, MAP_LITTLEROOT_TOWN_MAYS_HOUSE_2F

LittlerootTown_MaysHouse_1F_MapCoordEvents: @ 852D42C
	coord_event 2, 8, 0, VAR_0x4092, 4, LittlerootTown_MaysHouse_1F_EventScript_1F8A4C
	coord_event 1, 3, 0, VAR_0x408D, 2, LittlerootTown_MaysHouse_1F_EventScript_1F8A67
	coord_event 2, 4, 0, VAR_0x408D, 2, LittlerootTown_MaysHouse_1F_EventScript_1F8A73
	coord_event 3, 3, 0, VAR_0x408D, 2, LittlerootTown_MaysHouse_1F_EventScript_1F8A7F

LittlerootTown_MaysHouse_1F_MapEvents:: @ 852D46C
	map_events LittlerootTown_MaysHouse_1F_EventObjects, LittlerootTown_MaysHouse_1F_MapWarps, LittlerootTown_MaysHouse_1F_MapCoordEvents, 0x0
