NewMap2_EventObjects::
	object_event 1, EVENT_OBJ_GFX_RUNNING_TRIATHLETE_M, 0, 9, 6, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, FALSE, 0, NewMap2_EventScript_Marco, 0

NewMap2_MapWarps::
	warp_def 5, 9, 3, 2, MAP_OLDALE_TOWN_HOUSE1
	warp_def 6, 9, 3, 2, MAP_OLDALE_TOWN_HOUSE1

NewMap2_MapCoordEvents::
	coord_event 5, 8, 3, VAR_TEMP_0, 0, NewMap2_EventScript_CheckPosition2
	coord_event 4, 9, 3, VAR_TEMP_0, 0, NewMap2_EventScript_CheckPosition1
	coord_event 6, 8, 3, VAR_TEMP_0, 0, NewMap2_EventScript_CheckPosition3
	coord_event 7, 9, 3, VAR_TEMP_0, 0, NewMap2_EventScript_CheckPosition4

NewMap2_MapEvents::
	map_events NewMap2_EventObjects, NewMap2_MapWarps, NewMap2_MapCoordEvents, 0x0
