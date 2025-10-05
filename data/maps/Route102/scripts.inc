Route102_MapScripts::
	.byte 0


WindyMeadow_EventScript_Angela::
	lock
	faceplayer
	trainerbattle_single TRAINER_WINDYMEADOW_ANGELA, WindyMeadow_EventScript_Angela_Text_0, Angela_Lose
	msgbox Angela_Lose, MSGBOX_AUTOCLOSE
	release
	end


WindyMeadow_EventScript_Steven::
	lock
	faceplayer
	trainerbattle_single TRAINER_WINDYMEADOW_STEVEN, WindyMeadow_EventScript_Steven_Text_0, Steven_Lose
	release
	end


WindyMeadow_EventScript_Winona::
	lock
	faceplayer
	trainerbattle_single TRAINER_WINDYMEADOW_WINONA, WindyMeadow_EventScript_Winona_Text_0, Winona_Lose
	release
	end


WindyMeadow_EventScript_Angela_Text_0:
	.string "Shot in the dark here, but are you\n"
	.string "ignored in large crowds?$"

WindyMeadow_EventScript_Steven_Text_0:
	.string "I've just completed my bachelor's in\n"
	.string "piperidine opioids!$"

WindyMeadow_EventScript_Winona_Text_0:
	.string "Help me build up the strength to jump in\n"
	.string "the water!$"

Angela_Lose::
	.string "Do you know how to operate a pitman\n"
	.string "arm?$"

Steven_Lose::
	.string "Do let me know if you need any\n"
	.string "piperidine opioids produced!$"

Winona_Lose::
	.string "I don't know if I'm feel any more\n"
	.string "confident...$"
