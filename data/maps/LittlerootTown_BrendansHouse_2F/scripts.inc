LittlerootTown_BrendansHouse_2F_MapScripts:: @ 81F83E3

map_script 1, LittlerootTown_BrendansHouse_2F_MapScript1_HideThomas
.byte 0

LittlerootTown_BrendansHouse_2F_MapScript1_HideThomas:
end

LittlerootTown_BrendansHouse_2F_EventScript_CheckThomas::
lock
goto_if_unset FLAG_HIDE_THOMAS, LittlerootTown_BrendansHouse_2F_EventScript_Thomas_Move_1
release
end

LittlerootTown_BrendansHouse_2F_EventScript_CheckThomas_2::
lock
goto_if_unset FLAG_HIDE_THOMAS, LittlerootTown_BrendansHouse_2F_EventScript_Thomas_Move_2
release
end
LittlerootTown_BrendansHouse_2F_EventScript_CheckThomas_3::
lock
goto_if_unset FLAG_HIDE_THOMAS, LittlerootTown_BrendansHouse_2F_EventScript_Thomas_Move_3
release
end

LittlerootTown_BrendansHouse_2F_EventScript_CheckThomas_4::
lock
goto_if_unset FLAG_HIDE_THOMAS, LittlerootTown_BrendansHouse_2F_EventScript_Thomas_Move_4
release
end

LittlerootTown_BrendansHouse_2F_Movement_Thomas::

emote_exclamation_mark
delay_16
delay_16
delay_16
walk_up
walk_up
walk_right
delay_16
delay_16
step_end

LittlerootTown_BrendansHouse_2F_Movement_Thomas_Second::

emote_exclamation_mark
delay_16
delay_16
delay_16
walk_up
walk_right
walk_right
delay_16
delay_16
step_end

LittlerootTown_BrendansHouse_2F_Movement_Thomas_Third::

emote_exclamation_mark
delay_16
delay_16
delay_16
walk_up
walk_up
walk_right
walk_right
walk_right
delay_16
delay_16
step_end

LittlerootTown_BrendansHouse_2F_Movement_Thomas_Fourth::

emote_exclamation_mark
delay_16
delay_16
delay_16
walk_up
walk_up
walk_up
walk_right
walk_right
delay_16
delay_16
step_end



LittlerootTown_BrendansHouse_2F_Movement_Player::
face_left
step_end

LittlerootTown_BrendansHouse_2F_Movement_Thomas_2::
walk_up
walk_up
face_down
step_end

LittlerootTown_BrendansHouse_2F_EventScript_Thomas_Move_1::
applymovement 1, LittlerootTown_BrendansHouse_2F_Movement_Thomas
waitmovement 0
goto LittlerootTown_BrendansHouse_2F_EventScript_Thomas_Firsttime
end

LittlerootTown_BrendansHouse_2F_EventScript_Thomas_Move_2::
applymovement 1, LittlerootTown_BrendansHouse_2F_Movement_Thomas_Second
waitmovement 0
goto LittlerootTown_BrendansHouse_2F_EventScript_Thomas_Firsttime
end

LittlerootTown_BrendansHouse_2F_EventScript_Thomas_Move_3::
applymovement 1, LittlerootTown_BrendansHouse_2F_Movement_Thomas_Third
waitmovement 0
goto LittlerootTown_BrendansHouse_2F_EventScript_Thomas_Firsttime
end

LittlerootTown_BrendansHouse_2F_EventScript_Thomas_Move_4::
applymovement 1, LittlerootTown_BrendansHouse_2F_Movement_Thomas_Fourth
waitmovement 0
goto LittlerootTown_BrendansHouse_2F_EventScript_Thomas_Firsttime
end

LittlerootTown_BrendansHouse_2F_EventScript_Thomas_Firsttime::
lock
applymovement 255, LittlerootTown_BrendansHouse_2F_Movement_Player
waitmovement 0
msgbox LittlerootTown_BrendansHouse_2F_Text_Thomas_Firsttime, 4
waitmessage
setflag FLAG_MET_THOMAS
applymovement 1, LittlerootTown_BrendansHouse_2F_Movement_Thomas_2
waitmovement 0
setflag FLAG_HIDE_RAUL
setflag FLAG_HIDE_THOMAS
release
return
end


LittlerootTown_BrendansHouse_2F_EventScript_Thomas_AlreadyTalked::
lock
faceplayer
msgbox LittlerootTown_BrendansHouse_2F_Text_Thomas_AlreadyTalked, 4
release
end


LittlerootTown_BrendansHouse_2F_Text_Thomas_Firsttime::

.string "Man: Ah, {PLAYER}!\p"
.string "You're awake!\n"
.string "How are you feeling?\p"
.string "{PLAYER}: A bit out of it...\n"
.string "I don't know.\p"
.string "...\p"
.string "Man: Well.\p"
.string "I don't think I've had the\n"
.string "chance to introduce myself.\p"
.string "I'm Thomas.\p"
.string "{PLAYER}: Nice to meet you...\p"
.string "I've got a ton of questions.\n"
.string "Where am I? How did I get here?\p"
.string "Thomas: You don't remember\n"
.string "anything, huh?...\p"
.string "Well, you had the misfortune\n"
.string "of being in the wrong place\p"
.string "at the wrong time.\p"
.string "{PLAYER}: ...\p"
.string "Thomas: I found you in a local ghetto.\p"
.string "Or 'impoverished area', if you prefer\n"
.string "to be politically correct.\p"
.string "{PLAYER}: Ghetto? No way... I would never\n"
.string "be caught dead in a place like that.\p"
.string "Thomas: Well, you had to get there\n"
.string "somehow. You were in bad shape, kid.\p"
.string "Basically, I think you got mugged by\n"
.string "some fine ghetto gentlemen.\p"
.string "{PLAYER}: Mugged...\p"
.string "Thomas: You have me to thank, kid...\n"
.string "I saved your ass!\p"
.string "{PLAYER}: Shit, but I don't remember\n"
.string "a thing... I just remember leaving my\p"
.string "house, to go to... uh...\p"
.string "My memory is completely wiped out!\p"
.string "Thomas: Those monkeys beat the shit\n"
.string "outta you. You should be lucky that\p"
.string "you're even alive right now.\p"
.string "All right. Now, let's change the topic.\p"
.string "We - me and some others - work for\n"
.string "a type of organization.\p"
.string "{PLAYER}: What do you mean?\p"
.string "Thomas: You'll learn more soon.\p"
.string "Now, you seem to have recovered\n"
.string "well enough. There's someone who\p"
.string "wants to speak with you.\p"
.string "Go down to the Research Center.\n"
.string "A man will be waiting. He's the boss\p"
.string "of our organization. See him\n"
.string "as soon as you can.\p"
.string "{PLAYER}: Research Center?\p"
.string "Thomas: Easy to find. Just leave\n"
.string "this building and you'll find yourself\p"
.string "in our little camp, of sorts.\p"
.string "The big building south of here\n"
.string "is the Center. I will check in\p"
.string "on you when you're finished.$"

LittlerootTown_BrendansHouse_2F_Text_Thomas_AlreadyTalked::
.string "The boss wants to talk to you.\p"
.string "Go see him in the Research Center.$"

LittlerootTown_BrendansHouse_2F_Text_3::
.string "It's a suspicious package.$"

LittlerootTown_BrendansHouse_2F_Text_1F8668: @ 81F8668
.string "The clock is stopped…\p"
.string "Better set it and start it!$"

LittlerootTown_BrendansHouse_2F_Text_1F869A: @ 81F869A
.string "MOM: {PLAYER}, how do you like your\n"
.string "new room?\p"
.string "Good! Everything's put away neatly!\p"
.string "They finished moving everything in\n"
.string "downstairs, too.\p"
.string "POKéMON movers are so convenient!\p"
.string "Oh, you should make sure that\n"
.string "everything's all there on your desk.$"

LittlerootTown_BrendansHouse_2F_Text_1F877F: @ 81F877F
.string "{PLAYER} flipped open the notebook.\p"
.string "ADVENTURE RULE NO. 1\n"
.string "Open the MENU with START.\p"
.string "ADVENTURE RULE NO. 2\n"
.string "Record your progress with SAVE.\p"
.string "The remaining pages are blank…$"

LittlerootTown_BrendansHouse_2F_Text_1F8820: @ 81F8820
.string "{PLAYER} took a closer look at the\n"
.string "HOENN region map.$"

LittlerootTown_BrendansHouse_2F_Text_1F884F: @ 81F884F
.string "It's a Nintendo GameCube.\p"
.string "A Game Boy Advance is connected to\n"
.string "serve as the Controller.$"
