LittlerootTown_MapScripts::
map_script 1, LittlerootTown_MapScript1_MetRaul

.byte 0


LittlerootTown_EventScript_ResearchCenterSign::
msgbox LittlerootTown_Text_ResearchCenter, MSGBOX_SIGN
end

LittlerootTown_EventScript_Truck::
msgbox LittlerootTown_Text_Truck, MSGBOX_SIGN
end

LittlerootTown_EventScript_SafehouseSign::
msgbox LittlerootTown_Text_Safehouse, MSGBOX_SIGN
end

LittlerootTown_EventScript_CantGoOut::
goto LittlerootTown_EventScript_Trapped
end

LittlerootTown_EventScript_Trapped::

applymovement 5, LittlerootTown_Movement_Dude
waitmovement 0
msgbox LittlerootTown_Text_Dude, MSGBOX_DEFAULT
closemessage
applymovement 255, LittlerootTown_Movement_Turnback
waitmovement 0
release
end


LittlerootTown_Movement_Dude:
emote_exclamation_mark
step_end

LittlerootTown_Movement_Turnback:
walk_down
step_end

LittlerootTown_Movement_Raul:
walk_down
walk_left
face_left
step_end

LittlerootTown_Movement_Raul_2:
walk_left
walk_left
walk_left
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
face_left
step_end

LittlerootTown_Movement_Raul_3:
walk_down
walk_left
step_end

LittlerootTown_Movement_Player_And_Raul:
walk_left
walk_left
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

LittlerootTown_Movement_Player:
walk_left
walk_left
face_right
step_end

LittlerootTown_Movement_Player_2:
walk_left
walk_left
walk_up
face_right
step_end

LittlerootTown_Movement_Player_3:
walk_left
walk_left
walk_left
face_right
step_end

LittlerootTown_EventScript_Guard::
msgbox LittlerootTown_Text_Guard, MSGBOX_NPC
end

LittlerootTown_MapScript1_MetRaul::
setflag FLAG_HIDE_RAUL
call_if_set FLAG_MET_RAUL,  LittlerootTown_EventScript_Raul
end

LittlerootTown_EventScript_Raul::
clearflag FLAG_HIDE_RAUL
end

LittlerootTown_EventScript_Raul_Letsgo_1::
lock
call_if_set FLAG_MET_RAUL, LittlerootTown_EventScript_Player_Raul_1
release
end

LittlerootTown_EventScript_Raul_Letsgo_2::
lock
call_if_set FLAG_MET_RAUL, LittlerootTown_EventScript_Player_Raul_2
release
end

LittlerootTown_EventScript_Raul_Letsgo_3::
lock
call_if_set FLAG_MET_RAUL, LittlerootTown_EventScript_Player_Raul_3
release
end

LittlerootTown_EventScript_Player_Raul_1::
lockall
applymovement 255, LittlerootTown_Movement_Player
waitmovement 0
goto LittlerootTown_EventScript_Raul_Trigger
end

LittlerootTown_EventScript_Player_Raul_2::
lockall
applymovement 255, LittlerootTown_Movement_Player_2
waitmovement 0
goto LittlerootTown_EventScript_Raul_Trigger
end

LittlerootTown_EventScript_Player_Raul_3::
lockall
applymovement 255, LittlerootTown_Movement_Player_3
waitmovement 0
goto LittlerootTown_EventScript_Raul_Trigger
end

LittlerootTown_EventScript_Raul_Trigger::
lockall
applymovement 4, LittlerootTown_Movement_Raul
waitmovement 0
msgbox LittlerootTown_Text_Raul, MSGBOX_DEFAULT
waitmessage
release
applymovement 4, LittlerootTown_Movement_Raul_3
waitmovement 0
lockall
applymovement 4, LittlerootTown_Movement_Raul_2
applymovement 255, LittlerootTown_Movement_Player_And_Raul
waitmovement 0
release
faceplayer
msgbox LittlerootTown_Text_Raul_2, MSGBOX_DEFAULT
waitmessage
warp MAP_OLDALE_TOWN, 255, 5, 10
release
end

LittlerootTown_Text_Guard:
.string "Hey, kid!\p"
.string "You can't come in here.\p"
.string "Get lost!$"

LittlerootTown_Text_Raul:
.string "Raul: You ready?\n"
.string "Let's go to the truck.\p"
.string "{PLAYER}: Truck?\p"
.string "Raul: Yeah, how else are we\n"
.string "gonna make the delivery?$"

LittlerootTown_Text_Raul_2:
.string "Raul: Here we are.\n"
.string "She's a beauty, ain't she?\p"
.string "{PLAYER}: Well... I guess...\p"
.string "Raul: Right, then. Let's head out!\p"
.string "{PLAYER}: Hold on... where to?\p"
.string "Raul: We've got a client who needs\n"
.string "his medicine, so to speak. Hahaha!\p"
.string "{PLAYER}: (Medicine...)$"

LittlerootTown_Text_Dude:
.string "Whoa, whoa, whoa!\n"
.string "Kid, you can't just leave here.\p"
.string "Besides, don't you need to meet\n"
.string "the boss?...$"

LittlerootTown_Text_Truck:
.string "It's a truck.$"

LittlerootTown_Text_ResearchCenter:
.string "Research Center$"

LittlerootTown_Text_Safehouse:
.string "Safehouse$"
