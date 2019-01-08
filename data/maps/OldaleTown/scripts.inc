OldaleTown_MapScripts:: @ 81E8EA2

.byte 0


OldaleTown_Movement_Raul_1:
walk_left
walk_left
walk_left
step_end


OldaleTown_Movement_Raul_2:
walk_down
walk_left
step_end

OldaleTown_Movement_Raul_3:

walk_left
step_end

OldaleTown_Movement_Raul_4:
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_up
step_end

OldaleTown_EventScript_CheckIfStepped1::
lock
goto_if_unset FLAG_TALKED_RAUL, OldaleTown_EventScript_CheckPlayerPos1
release
end

OldaleTown_EventScript_CheckIfStepped2::
lock
goto_if_unset FLAG_TALKED_RAUL, OldaleTown_EventScript_CheckPlayerPos2
release
end

OldaleTown_EventScript_CheckIfStepped3::
lock
goto_if_unset FLAG_TALKED_RAUL, OldaleTown_EventScript_CheckPlayerPos3
release
end



OldaleTown_EventScript_CheckPlayerPos1::
lockall
setflag FLAG_TALKED_RAUL
applymovement 1, OldaleTown_Movement_Raul_1
waitmovement 0
goto OldaleTown_EventScript_Raul_1
end

OldaleTown_EventScript_CheckPlayerPos2::
lockall
setflag FLAG_TALKED_RAUL
applymovement 1, OldaleTown_Movement_Raul_2
waitmovement 0
goto OldaleTown_EventScript_Raul_1
end

OldaleTown_EventScript_CheckPlayerPos3::
lockall
setflag FLAG_TALKED_RAUL
applymovement 1, OldaleTown_Movement_Raul_3
waitmovement 0
goto OldaleTown_EventScript_Raul_1
end


OldaleTown_EventScript_Raul_1::
lockall
faceplayer
msgbox OldaleTown_Text_Raul_1, MSGBOX_DEFAULT
waitmessage
release
giveitem_std ITEM_OAKS_PARCEL
applymovement 1, OldaleTown_Movement_Raul_4
waitmovement 0
setflag FLAG_HIDE_RAUL
hideobjectat 1, MAP_OLDALE_TOWN
release
end

OldaleTown_Text_Raul_1::
.string "Raul: How was the ride?\p"
.string "{PLAYER}: Enjoyable, I guess.\n"
.string "I just don't know why we're here.\p"
.string "Raul: As I said, we're making a delivery.\n"
.string "We...\p"
.string "...\p"
.string "Hmm... I just had an idea.\p"
.string "Suppose one of these packages we have\n"
.string "were to, uh, go missing.\p"
.string "I mean, that was a pretty bumpy\n"
.string "truck ride. Maybe the package happened\p"
.string "to fall out of the back.\p"
.string "What do you say, kid? You in?\p"
.string "{PLAYER}: Whoa... What? Am I in?\n"
.string "This doesn't sound right.\p"
.string "First of all, what's in\n"
.string "these packages, anyway?\p"
.string "Raul: Hehe... I'm not supposed to\n"
.string "tell you this early, but fuck it.\p"
.string "There's a kilo of No. 2 China White\n"
.string "in each of these. Hehehe...\p"
.string "{PLAYER}: China White? Is't that...\p"
.string "Raul: Horse. Yeah. Heroin.\n"
.string "No. 2 ain't very pure. We save the\p"
.string "good stuff for higher paying customers.\p"
.string "{PLAYER}: Jesus. I had my suspicions\n"
.string "about this 'organization', but I\p"
.string "didn't know you guys were moving so\n"
.string "much weight. That's a shitload of H.\p"
.string "I've never tried the stuff, but I had\n"
.string "some friends who were into it.\p"
.string "Raul: Yeah, kid... we move this shit\n"
.string "all over the place. But the reason I'm\p"
.string "telling you this is because the boss\n"
.string "is a grade-A fuckhead. He treats me and\p"
.string "the other workers like shit. And don't\n"
.string "get me started on that Thomas guy.\p"
.string "{PLAYER}: The boss tells me to go with you\n"
.string "on my first delivery job and already\p"
.string "you're pulling shit like this?\n"
.string "God dammit, man...\p"
.string "Raul: Look, man, you in or not?\p"
.string "We deliver one package and sell the\n"
.string "other, and split the profits between us.\p"
.string "No one has to know.\p"
.string "{PLAYER}: Fuck... Raul. I don't know.\n"
.string "I think I want out of this business.\p"
.string "Well, maybe I could use the profits from\n"
.string "the sale to get outta here.\p"
.string "I need to go back home. I can buy a plane\n"
.string "ticket and I'll be back in no time.\p"
.string "Problem is, I don't recognize anything\n"
.string "and my memory is all fuzzy. But I think\p"
.string "it's slowly coming back...\p"
.string "Raul: That's good, dude, but you must\n"
.string "be fuckin' stoned if you think it's\p"
.string "that easy to just leave an\n"
.string "organization like this.\p"
.string "...\p"
.string "Here. You take the second package and\n"
.string "deliver it to the guy on the fourth\p"
.string "floor, in this here apartment building.\p"
.string "Dude is a junkie named Marco. He's a\n"
.string "pretty high-level dealer in this area.\p"
.string "He's been buying from us for a long time.\n"
.string "Problem is, he's been using a lot lately.\p"
.string "Too much. He's been acting weird.\p"
.string "He owes us for the kilo. 40 thousand.\p"
.string "He'll give you the money when you give\n"
.string "him the stuff. It should go smoothly.\p"
.string "He's a good customer. You won't have\n"
.string "any problems.\p"
.string "..."
.string "I'll go stash the other package in one\n"
.string "of these buildings here. I know a place.\p"
.string "{PLAYER}: You want ME to deliver it?...\p"
.string "Raul: Well, this is a delivery job,\n"
.string "ain't it?\p"
.string "Here.$"

end
