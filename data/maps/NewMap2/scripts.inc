NewMap2_MapScripts::
.byte 0


NewMap2_Movement_Marco_1::

walk_left
walk_left
walk_left
walk_left
walk_left
walk_down
walk_down
step_end

NewMap2_Movement_Marco_2::

walk_left
walk_left
walk_left
walk_left
face_down
step_end

NewMap2_Movement_Marco_3::

walk_left
walk_left
walk_left
walk_down
face_down
step_end

NewMap2_Movement_Marco_4::


walk_left
walk_left
walk_down
face_down
step_end

NewMap2_Movement_Marco_Alert::
emote_exclamation_mark
step_end

NewMap2_Movement_Player_Face::

face_up
step_end

NewMap2_EventScript_CheckPosition1::
applymovement 1, NewMap2_Movement_Marco_1
waitmovement 0
applymovement 255, NewMap2_Movement_Player_Face
waitmovement 0
goto NewMap2_EventScript_Marco
end

NewMap2_EventScript_CheckPosition2::
applymovement 1, NewMap2_Movement_Marco_2
waitmovement 0
applymovement 255, NewMap2_Movement_Player_Face
waitmovement 0
goto NewMap2_EventScript_Marco
end

NewMap2_EventScript_CheckPosition3::
applymovement 1, NewMap2_Movement_Marco_3
waitmovement 0
applymovement 255, NewMap2_Movement_Player_Face
waitmovement 0
goto NewMap2_EventScript_Marco
end

NewMap2_EventScript_CheckPosition4::
applymovement 1, NewMap2_Movement_Marco_4
waitmovement 0
applymovement 255, NewMap2_Movement_Player_Face
waitmovement 0
goto NewMap2_EventScript_Marco
end

NewMap2_EventScript_Marco::
lock
faceplayer
msgbox NewMap2_Text_Marco_1, MSGBOX_DEFAULT
waitmessage
takeitem ITEM_OAKS_PARCEL, 1
msgbox NewMap2_Text_Marco_GivePackage, MSGBOX_DEFAULT
playse MUS_FANFA4
waitmessage
msgbox NewMap2_Text_Marco_2, MSGBOX_DEFAULT
waitmessage
applymovement 1, NewMap2_Movement_Marco_Alert
waitmovement 0
msgbox NewMap2_Text_Marco_3, MSGBOX_DEFAULT
waitmessage
release
end

NewMap2_Text_Marco_1::

.string "Marco: Yeah, yeah, you got my shit?\n"
.string "Been waiting a while for this. Hehe...\p"
.string "{PLAYER}: Yeah. Here you go.$"


NewMap2_Text_Marco_GivePackage::

.string "{PLAYER} gave the Package to Marco.$"

NewMap2_Text_Marco_2::

.string "Marco: Thanks, kid.\p"
.string "{PLAYER}: Sure... Now let's talk\n"
.string "money. You owe us some.\p"
.string "Marco: Money? Nah, nah, nah...\n"
.string "You stoned, bro? I already paid y'all!\p"
.string "{PLAYER}: Fuck are you talking about?\n"
.string "Raul said you owe him 40 thousand.$"

NewMap2_Text_Marco_3::
.string "Marco: I already paid y'all.\n"
.string "Now get the fuck outta here.\p"
.string "{PLAYER}: (What should I do...)\p"
.string "...\p"
.string "Marco: Didn't you hear me?\n"
.string "Fuck outta here, ese!\p"
.string "{PLAYER}: No way. Where's the cash?\p"
.string "Marco: Ese, don't get smart.\n"
.string "I'm bout to beat your ass.\p"
.string "{PLAYER}: ...Come at me, then!$"
