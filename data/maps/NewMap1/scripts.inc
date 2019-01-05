NewMap1_MapScripts::
	.byte 0

NewMap1_Movement_Player::

walk_fast_left
walk_fast_left
walk_fast_down
walk_fast_down
step_end

NewMap1_EventScript_Guy::
lock
faceplayer
msgbox NewMap1_Text_Guy, MSGBOX_DEFAULT
waitmessage
release
applymovement 255, NewMap1_Movement_Player
waitmovement 0
warp MAP_OLDALE_TOWN_HOUSE1, 255, 7, 3
end


NewMap1_Text_Guy::
.string "{PLAYER}: Why did you want me to\n"
.string "come in here? Do you know where\p"
.string "Marco is? A guy named Marco?\p"
.string "Man: Oh, no, sorry, I don't.\n"
.string "But I'm pretty lonely in here\p"
.string "and I need someone to keep\n"
.string "me company...\p"
.string "{PLAYER}: Hell no!$"
