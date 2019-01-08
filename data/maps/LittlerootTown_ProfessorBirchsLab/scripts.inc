LittlerootTown_ProfessorBirchsLab_MapScripts:: @ 81F9C91


.byte 0

LittlerootTown_ProfessorBirchsLab_MapScript1_HideBoss:
call_if_set FLAG_HIDE_BOSS, LittlerootTown_ProfessorBirchsLab_EventScript_HideBoss
end

LittlerootTown_ProfessorBirchsLab_Movement_Scientist_1:
face_left
step_end

LittlerootTown_ProfessorBirchsLab_Movement_Scientist_2:
face_right
step_end

LittlerootTown_ProfessorBirchsLab_Movement_Player_Walk_1:
walk_up
walk_up
step_end

LittlerootTown_ProfessorBirchsLab_Movement_Player_Walk_2:
walk_left
walk_up
walk_up
step_end

LittlerootTown_ProfessorBirchsLab_Movement_Player_Walk_3:
walk_left
walk_left
walk_up
walk_up
step_end

LittlerootTown_ProfessorBirchsLab_Movement_Player_Walk_4:
walk_left
walk_left
walk_left
walk_up
walk_up
step_end

LittlerootTown_ProfessorBirchsLab_Movement_Player_Walk_5:
walk_left
walk_left
walk_left
walk_left
walk_up
walk_up
step_end

LittlerootTown_ProfessorBirchsLab_Movement_Boss:
delay_16
delay_16
delay_16
walk_right
walk_right
walk_up
walk_right
walk_up
delay_16
delay_16
delay_16
walk_down
walk_left
walk_down
walk_left
walk_left
delay_16
delay_16
delay_16
face_down
step_end

LittlerootTown_ProfessorBirchsLab_Movement_Boss_2:
delay_16
delay_16
delay_16
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_right
walk_right
walk_down
walk_down
step_end

LittlerootTown_ProfessorBirchsLab_Movement_Player:
walk_down
walk_right
face_left
step_end

LittlerootTown_ProfessorBirchsLab_Movement_Raul:
delay_16
walk_right
walk_right
walk_right
face_right
delay_16
delay_16
step_end

LittlerootTown_ProfessorBirchsLab_Movement_Raul_Face:
delay_16
delay_16
emote_exclamation_mark
delay_16
delay_16
face_left
step_end

LittlerootTown_ProfessorBirchsLab_Movement_Player_Face:
walk_left
walk_up
walk_up
delay_16
delay_16
face_right
step_end

LittlerootTown_ProfessorBirchsLab_Movement_Raul_2:
walk_down
face_right
delay_16
delay_16
face_left
delay_16
step_end


LittlerootTown_ProfessorBirchsLab_Movement_Raul_Walking:
walk_down
walk_left
walk_left
walk_left
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
delay_16
step_end

LittlerootTown_ProfessorBirchsLab_Movement_Player_Walking:
walk_right
walk_right
walk_right
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
delay_16
step_end

LittlerootTown_ProfessorBirchsLab_EventScript_HideBoss::
hideobjectat 3, MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB
end

LittlerootTown_ProfessorBirchsLab_EventScript_Scientist_1::
lock
faceplayer
msgbox LittlerootTown_ProfessorBirchsLab_Text_Scientist_1, MSGBOX_DEFAULT
applymovement 1, LittlerootTown_ProfessorBirchsLab_Movement_Scientist_1
waitmovement 0
release
end

LittlerootTown_ProfessorBirchsLab_EventScript_Scientist_2::
lock
faceplayer
msgbox LittlerootTown_ProfessorBirchsLab_Text_Scientist_2, MSGBOX_DEFAULT
applymovement 2, LittlerootTown_ProfessorBirchsLab_Movement_Scientist_2
waitmovement 0
release
end

LittlerootTown_ProfessorBirchsLab_EventScript_Package::
msgbox LittlerootTown_ProfessorBirchsLab_Text_Package, MSGBOX_DEFAULT
release
end

LittlerootTown_ProfessorBirchsLab_EventScript_Player_Walk_1::
lock
applymovement 255, LittlerootTown_ProfessorBirchsLab_Movement_Player_Walk_1
waitmovement 0
goto LittlerootTown_ProfessorBirchsLab_EventScript_Boss
end

LittlerootTown_ProfessorBirchsLab_EventScript_Player_Walk_2::
lock
applymovement 255, LittlerootTown_ProfessorBirchsLab_Movement_Player_Walk_2
waitmovement 0
goto LittlerootTown_ProfessorBirchsLab_EventScript_Boss
end

LittlerootTown_ProfessorBirchsLab_EventScript_Player_Walk_3::
lock
applymovement 255, LittlerootTown_ProfessorBirchsLab_Movement_Player_Walk_3
waitmovement 0
goto LittlerootTown_ProfessorBirchsLab_EventScript_Boss
end

LittlerootTown_ProfessorBirchsLab_EventScript_Player_Walk_4::
lock
applymovement 255, LittlerootTown_ProfessorBirchsLab_Movement_Player_Walk_4
waitmovement 0
goto LittlerootTown_ProfessorBirchsLab_EventScript_Boss
end

LittlerootTown_ProfessorBirchsLab_EventScript_Player_Walk_5::
lock
applymovement 255, LittlerootTown_ProfessorBirchsLab_Movement_Player_Walk_5
waitmovement 0
goto LittlerootTown_ProfessorBirchsLab_EventScript_Boss
end


LittlerootTown_ProfessorBirchsLab_EventScript_Boss::
lockall
msgbox LittlerootTown_ProfessorBirchsLab_Text_AreYouBoss, MSGBOX_DEFAULT
waitmessage
release
lockall
applymovement 3, LittlerootTown_ProfessorBirchsLab_Movement_Boss
waitmovement 0
msgbox LittlerootTown_ProfessorBirchsLab_Text_Boss, MSGBOX_DEFAULT
release
applymovement 255,LittlerootTown_ProfessorBirchsLab_Movement_Player
applymovement 3, LittlerootTown_ProfessorBirchsLab_Movement_Boss_2
waitmovement 0
setflag FLAG_HIDE_BOSS
hideobjectat 3, MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB
goto LittlerootTown_ProfessorBirchsLab_EventScript_FinishedWithBoss
release
end

LittlerootTown_ProfessorBirchsLab_EventScript_FinishedWithBoss::
lockall
applymovement 4, LittlerootTown_ProfessorBirchsLab_Movement_Raul_Face
waitmovement 0
applymovement 255, LittlerootTown_ProfessorBirchsLab_Movement_Player_Face
waitmovement 0
msgbox LittlerootTown_ProfessorBirchsLab_Text_Raul_2, MSGBOX_DEFAULT
waitmessage
release
applymovement 4, LittlerootTown_ProfessorBirchsLab_Movement_Raul
waitmovement 0
setmetatile 11, 4, 514, 0
special DrawWholeMapView

applymovement 4, LittlerootTown_ProfessorBirchsLab_Movement_Raul_2
waitmovement 0
setmetatile 11, 5, 514, 0
special DrawWholeMapView
msgbox LittlerootTown_ProfessorBirchsLab_Text_Raul_3, MSGBOX_DEFAULT
waitmessage
releaseall
applymovement 4, LittlerootTown_ProfessorBirchsLab_Movement_Raul_Walking
applymovement 255, LittlerootTown_ProfessorBirchsLab_Movement_Player_Walking
waitmovement 0
clearflag FLAG_HIDE_RAUL
warp MAP_LITTLEROOT_TOWN, 255, 5, 19
setflag FLAG_MET_RAUL
release
end

LittlerootTown_ProfessorBirchsLab_EventScript_Raul::
lock
faceplayer
goto_if_set FLAG_HIDE_BOSS, LittlerootTown_ProfessorBirchsLab_EventScript_Raul_2
msgbox LittlerootTown_ProfessorBirchsLab_Text_Raul, MSGBOX_DEFAULT
release
end

LittlerootTown_ProfessorBirchsLab_EventScript_Raul_2::
lock
faceplayer
msgbox LittlerootTown_ProfessorBirchsLab_Text_Raul_4, MSGBOX_DEFAULT
release
end

LittlerootTown_ProfessorBirchsLab_EventScript_PC::
msgbox LittlerootTown_ProfessorBirchsLab_Text_PC, MSGBOX_SIGN
end

LittlerootTown_ProfessorBirchsLab_EventScript_PC_2::
msgbox LittlerootTown_ProfessorBirchsLab_Text_PC_2, MSGBOX_SIGN
end


LittlerootTown_ProfessorBirchsLab_Text_PC:
.string "It's a PC.\p"
.string "The screen is filled with\n"
.string "chemical formulas.$"

LittlerootTown_ProfessorBirchsLab_Text_PC_2:
.string "It's a PC.\p"
.string "The screen is filled with\n"
.string "complicated numbers.$"

LittlerootTown_ProfessorBirchsLab_Text_Scientist_1:
.string "Huh? What is it?\p"
.string "...\p"
.string "Leave me alone, kid, I'm busy.$"

LittlerootTown_ProfessorBirchsLab_Text_Package:
.string "It's a suspicious package.$"

LittlerootTown_ProfessorBirchsLab_Text_Scientist_2:
.string "Hmm? What is it?\p"
.string "...\p"
.string "I'm kinda busy, kid. Sorry.$"

LittlerootTown_ProfessorBirchsLab_Text_Raul:
.string "Boss is expecting you, kid.\p"
.string "Go over there. Talk to him.$"

LittlerootTown_ProfessorBirchsLab_Text_Raul_2:
.string "Raul: Huh? Oh, yeah. Right.\p"
.string "So, let me show you the, uh, ropes.\p"
.string "...\p"
.string "We've got a few packages to deliver.\p"
.string "You take one and I'll take one.$"

LittlerootTown_ProfessorBirchsLab_Text_Raul_3:
.string "All right, kid.\n"
.string "Let's head out!$"

LittlerootTown_ProfessorBirchsLab_Text_Raul_4:
.string "You ain't supposed to be here.$"

LittlerootTown_ProfessorBirchsLab_Text_Boss:
.string "Man: Ah, yes. {PLAYER}?\p"
.string "I've been expecting you.\n"
.string "How are you feeling?\p"
.string "{PLAYER}: Better... But I'm\n"
.string "confused as hell.\p"
.string "Man: That's to be expected.\n"
.string "I heard you took quite a beating.\p"
.string "{PLAYER}: Yeah, so I've heard...\n"
.string "But my memory is wiped out.\p"
.string "I don't remember a goddamned thing.\p"
.string "Man: Maybe it's for the best.\p"
.string "If I took a beating like that,\n"
.string "I wouldn't wanna remember it.\p"
.string "{PLAYER}: But all I remember is\n"
.string "leaving my house to go to the...\p"
.string "Well, the... Dammit!\p"
.string "I don't even remember what city\n"
.string "I'm from. But wherever we are now,\p"
.string "it's far away from there...\p"
.string "Man: I understand. It can't be easy\n"
.string "for you right now.\p"
.string "But I called you here for a reason.\p"
.string "{PLAYER}: And that would be?\p"
.string "Man: First, let me introduce myself.\n"
.string "I'm the boss of this specific\p"
.string "branch of our organization.\p"
.string "...\p"
.string "Our organization deals with many\n"
.string "different people all over the globe.\p"
.string "We specialize in shipping,\n"
.string "foreign relations... Well, I don't\p"
.string "want to bore you with the details.\p"
.string "But anyway, seeing as Thomas practically\n"
.string "saved your life, we'd like you to come\p"
.string "work for us. What do you say, kid?\p"
.string "{PLAYER}: Work for you? What kinda work?\p"
.string "Boss: Easy stuff. We'll get you started\n"
.string "on deliveries and see how that goes.\p"
.string "If it works out, we'll have some other\n"
.string "stuff for you to do.\p"
.string "{PLAYER}: And if it doesn't work out?\p"
.string "Boss: Trust me. It's a piece of cake.\n"
.string "But you don't want to let us down.\p"
.string "I have a meeting, so I'll tell Raul here\n"
.string "to get you started. I'm sure we'll be\p"
.string "seeing more of each other soon enough.\p"
.string "Until then...$"

LittlerootTown_ProfessorBirchsLab_Text_AreYouBoss:
.string "{PLAYER}: Are you... the boss?$"


LittlerootTown_ProfessorBirchsLab_Text_1FB124: @ 81FB124
.string "It's crammed with books on POKéMON.$"

LittlerootTown_ProfessorBirchsLab_Text_1FB148: @ 81FB148
.string "It's a book that's too hard to read.$"

LittlerootTown_ProfessorBirchsLab_Text_1FB16D: @ 81FB16D
.string "PROF. BIRCH: Now…\p"
.string "{PLAYER}{KUN} and {RIVAL}, I've had the two\n"
.string "of you help me study POKéMON.\p"
.string "Thanks to your help, new facts\n"
.string "are coming to light.\p"
.string "It appears that in the HOENN region,\n"
.string "there are also POKéMON from other\l"
.string "regions.\p"
.string "It goes to show how rich and varied\n"
.string "the natural environments of HOENN\l"
.string "happen to be.\p"
.string "That's why I think it's necessary for\n"
.string "me to upgrade your POKéDEX to\l"
.string "the NATIONAL Mode.\p"
.string "Here, let me see your POKéDEX units.$"

LittlerootTown_ProfessorBirchsLab_Text_1FB30F: @ 81FB30F
.string "MAY: Eheheh!\p"
.string "It's so cool that even my POKéDEX\n"
.string "is getting updated!\p"
.string "It's because you went out and caught\n"
.string "so many POKéMON, {PLAYER}{KUN}!$"

LittlerootTown_ProfessorBirchsLab_Text_1FB38E: @ 81FB38E
.string "BRENDAN: I went out all over HOENN\n"
.string "and checked out POKéMON.\p"
.string "You can thank me for getting\n"
.string "the NATIONAL Mode POKéDEX.\p"
.string "Yep, you're lucky, {PLAYER}!$"

LittlerootTown_ProfessorBirchsLab_Text_1FB419: @ 81FB419
.string "PROF. BIRCH: Okay, all done!$"

LittlerootTown_ProfessorBirchsLab_Text_1FB436: @ 81FB436
.string "{PLAYER}'s POKéDEX was upgraded\n"
.string "to the NATIONAL Mode!$"

LittlerootTown_ProfessorBirchsLab_Text_1FB466: @ 81FB466
.string "PROF. BIRCH: But listen.\n"
.string "You've become the CHAMPION,\l"
.string "but your POKéMON journey isn't over.\p"
.string "There is no end to the road\n"
.string "that is POKéMON.\p"
.string "Somewhere, there is a grassy patch\n"
.string "that's waiting for you!$"

LittlerootTown_ProfessorBirchsLab_Text_1FB528: @ 81FB528
.string "MAY: I think I'll take a short break\n"
.string "from fieldwork.\p"
.string "I think I'll help the PROF here for\n"
.string "a while.$"

LittlerootTown_ProfessorBirchsLab_Text_1FB58A: @ 81FB58A
.string "BRENDAN: For the time being,\n"
.string "I'm taking a break from fieldwork.\p"
.string "I'll be helping out the PROF here\n"
.string "for a while.$"

LittlerootTown_ProfessorBirchsLab_Text_1FB5F9: @ 81FB5F9
.string "PROF. BIRCH: Oh, {PLAYER}{KUN}!\n"
.string "Let's have a look at your POKéDEX.\p"
.string "… … … … … …\n"
.string "… … … … … …\p"
.string "Yes, there's no doubt about it.\p"
.string "You really have completed the HOENN\n"
.string "region's POKéDEX.\p"
.string "That's more than just impressive.\p"
.string "I have a gift for you.\p"
.string "Consider it my show of appreciation\n"
.string "for the fantastic work you've done.\p"
.string "My gift is a rare POKéMON only found\n"
.string "in another region!\p"
.string "You can have any one of these\n"
.string "three POKéMON!$"

LittlerootTown_ProfessorBirchsLab_Text_1FB787: @ 81FB787
.string "PROF. BIRCH: These are rare POKéMON\n"
.string "only found in another region!\p"
.string "You can have any one of these\n"
.string "three POKéMON!$"

LittlerootTown_ProfessorBirchsLab_Text_1FB7F6: @ 81FB7F6
.string "PROF. BIRCH: The FIRE POKéMON\n"
.string "CYNDAQUIL caught your eye!\p"
.string "You're as sharp as ever!\p"
.string "So the CYNDAQUIL is your choice?$"

LittlerootTown_ProfessorBirchsLab_Text_1FB869: @ 81FB869
.string "PROF. BIRCH: The WATER POKéMON\n"
.string "TOTODILE is your choice!\p"
.string "You know how to pick a good one.\p"
.string "So, you'll take the TOTODILE?$"

LittlerootTown_ProfessorBirchsLab_Text_1FB8E0: @ 81FB8E0
.string "PROF. BIRCH: The GRASS POKéMON\n"
.string "CHIKORITA is your choice!\p"
.string "You sure know what you're doing.\p"
.string "So, you'll take the CHIKORITA?$"

LittlerootTown_ProfessorBirchsLab_Text_1FB959: @ 81FB959
.string "PROF. BIRCH: Take your time before\n"
.string "you decide.\p"
.string "They're all invaluable POKéMON.$"

LittlerootTown_ProfessorBirchsLab_Text_1FB9A8: @ 81FB9A8
.string "PROF. BIRCH: I see!\n"
.string "You picked a fine POKéMON!$"

LittlerootTown_ProfessorBirchsLab_Text_1FB9D7: @ 81FB9D7
.string "{PLAYER} received the {STR_VAR_1}\n"
.string "from PROF. BIRCH!$"

LittlerootTown_ProfessorBirchsLab_Text_1FB9FC: @ 81FB9FC
.string "Want to give a nickname to\n"
.string "the {STR_VAR_1} you received?$"

LittlerootTown_ProfessorBirchsLab_Text_1FBA2C: @ 81FBA2C
.string "PROF. BIRCH: Listen, {PLAYER}{KUN}.\n"
.string "You've completed the HOENN POKéDEX,\l"
.string "but your POKéMON journey isn't over.\p"
.string "There is no end to the road\n"
.string "that is POKéMON.\p"
.string "Somewhere, there is a grassy patch\n"
.string "that's waiting for you!$"

LittlerootTown_ProfessorBirchsLab_Text_1FBAF8: @ 81FBAF8
.string "You received the promised POKéMON.\n"
.string "Better leave the others alone.$"

LittlerootTown_ProfessorBirchsLab_Text_1FBB3A: @ 81FBB3A
.string "Oh, you don't have any room for\n"
.string "this POKéMON.$"

LittlerootTown_ProfessorBirchsLab_Text_1FBB68: @ 81FBB68
.string "MAY: {PLAYER}{KUN}, after this…\n"
.string "What are you going to do?\p"
.string "Are you going to keep battling\n"
.string "and sharpening your skills?\p"
.string "Or are you going to try filling\n"
.string "the NATIONAL POKéDEX?\p"
.string "I'm staying here to help the PROF.$"

LittlerootTown_ProfessorBirchsLab_Text_1FBC2D: @ 81FBC2D
.string "BRENDAN: Rather than collecting\n"
.string "POKéMON, I prefer slowly and \l"
.string "steadily raising the one I chose.$"

LittlerootTown_ProfessorBirchsLab_Text_1FBC8D: @ 81FBC8D
.string "MAY: Oh, hi, {PLAYER}{KUN}!\n"
.string "Have you gone to that place,\l"
.string "the BATTLE FRONTIER?$"

LittlerootTown_ProfessorBirchsLab_Text_1FBCD2: @ 81FBCD2
.string "BRENDAN: Hey, {PLAYER}!\n"
.string "Have you gone out to that place,\l"
.string "the BATTLE FRONTIER?$"

LittlerootTown_ProfessorBirchsLab_Text_1FBD1A: @ 81FBD1A
.string "… … … … … …\n"
.string "… … … … … Beep!\p"
.string "SCOTT: Hi, hi, {PLAYER}!\n"
.string "It's me, SCOTT.\p"
.string "I'm aboard the S.S. TIDAL now.\n"
.string "It feels great to be on the sea!\p"
.string "By the way…\p"
.string "There's this place that I'd like to\n"
.string "invite you to for a visit.\p"
.string "If you're interested, board a ferry\n"
.string "at either SLATEPORT or LILYCOVE.\p"
.string "I'll fill you in on the details when\n"
.string "we meet. I'll be waiting!\p"
.string "… … … … … …\n"
.string "… … … … … Click!$"
