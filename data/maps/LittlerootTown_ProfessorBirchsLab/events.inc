LittlerootTown_ProfessorBirchsLab_EventObjects::
	object_event 1, EVENT_OBJ_GFX_SCIENTIST_1, 0, 3, 8, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, FALSE, 0, LittlerootTown_ProfessorBirchsLab_EventScript_Scientist_1, 0
	object_event 2, EVENT_OBJ_GFX_SCIENTIST_1, 0, 9, 8, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, FALSE, 0, LittlerootTown_ProfessorBirchsLab_EventScript_Scientist_2, 0
	object_event 3, EVENT_OBJ_GFX_MAN_3, 0, 4, 4, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, FALSE, 0, LittlerootTown_ProfessorBirchsLab_EventScript_Boss, FLAG_HIDE_BOSS
	object_event 4, EVENT_OBJ_GFX_FISHERMAN, 0, 7, 4, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, FALSE, 0, LittlerootTown_ProfessorBirchsLab_EventScript_Raul, 0

LittlerootTown_ProfessorBirchsLab_MapWarps::
	warp_def 6, 12, 0, 1, MAP_LITTLEROOT_TOWN
	warp_def 7, 12, 0, 1, MAP_LITTLEROOT_TOWN

LittlerootTown_ProfessorBirchsLab_MapCoordEvents::
	coord_event 5, 7, 3, VAR_TEMP_0, 0, LittlerootTown_ProfessorBirchsLab_EventScript_Player_Walk_2
	coord_event 6, 7, 3, VAR_TEMP_0, 0, LittlerootTown_ProfessorBirchsLab_EventScript_Player_Walk_3
	coord_event 7, 7, 3, VAR_TEMP_0, 0, LittlerootTown_ProfessorBirchsLab_EventScript_Player_Walk_4
	coord_event 4, 7, 3, VAR_TEMP_0, 0, LittlerootTown_ProfessorBirchsLab_EventScript_Player_Walk_1
	coord_event 8, 7, 3, VAR_TEMP_0, 0, LittlerootTown_ProfessorBirchsLab_EventScript_Player_Walk_5

LittlerootTown_ProfessorBirchsLab_MapBGEvents::
	bg_event 7, 1, 0, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_ProfessorBirchsLab_EventScript_PC_2
	bg_event 8, 1, 0, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_ProfessorBirchsLab_EventScript_PC_2
	bg_event 10, 8, 0, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_ProfessorBirchsLab_EventScript_PC
	bg_event 10, 7, 0, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_ProfessorBirchsLab_EventScript_PC
	bg_event 12, 6, 0, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_ProfessorBirchsLab_EventScript_Package
	bg_event 2, 8, 0, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_ProfessorBirchsLab_EventScript_PC
	bg_event 2, 7, 0, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_ProfessorBirchsLab_EventScript_PC
	bg_event 4, 1, 0, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_ProfessorBirchsLab_EventScript_PC_2
	bg_event 3, 1, 0, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_ProfessorBirchsLab_EventScript_PC_2
	bg_event 12, 11, 0, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_ProfessorBirchsLab_EventScript_Package
	bg_event 11, 5, 0, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_ProfessorBirchsLab_EventScript_Package
	bg_event 11, 12, 0, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_ProfessorBirchsLab_EventScript_Package
	bg_event 1, 3, 3, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_ProfessorBirchsLab_EventScript_Package
	bg_event 1, 2, 3, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_ProfessorBirchsLab_EventScript_Package
	bg_event 2, 5, 3, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_ProfessorBirchsLab_EventScript_Package
	bg_event 3, 5, 3, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_ProfessorBirchsLab_EventScript_Package
	bg_event 1, 9, 3, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_ProfessorBirchsLab_EventScript_Package
	bg_event 0, 8, 3, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_ProfessorBirchsLab_EventScript_Package
	bg_event 11, 10, 3, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_ProfessorBirchsLab_EventScript_Package

LittlerootTown_ProfessorBirchsLab_MapEvents::
	map_events LittlerootTown_ProfessorBirchsLab_EventObjects, LittlerootTown_ProfessorBirchsLab_MapWarps, LittlerootTown_ProfessorBirchsLab_MapCoordEvents, LittlerootTown_ProfessorBirchsLab_MapBGEvents
