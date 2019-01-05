OldaleTown_House1_MapScripts:: @ 81FBE85
.byte 0

OldaleTown_House1_Movement_Player::
face_up
step_end

OldaleTown_House1_Movement_Player_2::
walk_down
step_end

OldaleTown_House1_EventScript_KnockOnDoor::
lock
applymovement 255, OldaleTown_House1_Movement_Player
waitmovement 0
msgbox OldaleTown_House1_Text_Guy, MSGBOX_DEFAULT
waitmessage
applymovement 255, OldaleTown_House1_Movement_Player_2
waitmovement 0
release
end

OldaleTown_House1_EventScript_KnockOnDoor2::
lock
applymovement 255, OldaleTown_House1_Movement_Player
waitmovement 0
msgbox OldaleTown_House1_Text_Guy_2, MSGBOX_DEFAULT
waitmessage
msgbox OldaleTown_House1_Text_Guy_YesNo, MSGBOX_YESNO
waitmessage
compare VAR_RESULT, 1
goto_if_eq OldaleTown_House1_EventScript_EnterHouse
compare VAR_RESULT, 0
goto_if_eq OldaleTown_House1_EventScript_ExitHouse
release
end

OldaleTown_House1_EventScript_KnockOnDoor3::
lock
applymovement 255, OldaleTown_House1_Movement_Player
waitmovement 0
msgbox OldaleTown_House1_Text_Guy_3, MSGBOX_DEFAULT
waitmessage
warp MAP_NEW_MAP2, 255, 5, 9
release
end

OldaleTown_House1_EventScript_EnterHouse::
warp MAP_NEW_MAP1, 255, 3, 9
end


OldaleTown_House1_EventScript_ExitHouse::
applymovement 255, OldaleTown_House1_Movement_Player_2
waitmovement 0
release
end


OldaleTown_House1_Text_Guy:
.string "(Knock, knock)\p"
.string "...\p"
.string "{PLAYER}: Anyone there?\n"
.string "Looking for a guy named Marco.\p"
.string "Man: Ain't no one by that name here.$"

OldaleTown_House1_Text_Guy_2:
.string "(Knock, knock)\p"
.string "...\p"
.string "{PLAYER}: Hey, excuse me?\n"
.string "I'm looking for a guy named Marco.\p"
.string "Is he in here?\p"
.string "Man: No... but I'm here.$"

OldaleTown_House1_Text_Guy_3:
.string "(Knock, knock)\p"
.string "...\p"
.string "{PLAYER}: Hello? Marco?\n"
.string "I have a delivery.\p"
.string "Man: Delivery? Come on in.$"


OldaleTown_House1_Text_Guy_YesNo:
.string "Want to come in?$"
