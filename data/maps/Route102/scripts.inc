Route102_MapScripts::
	.byte 0


WindyMeadow_EventScript_Angela::
	lock
	faceplayer
	trainerbattle_single TRAINER_WINDYMEADOW_ANGELA, WindyMeadow_EventScript_Angela_Text_0, Angela_Lose
	msgbox Angela_Lose, MSGBOX_AUTOCLOSE
	release
	end


WindyMeadow_EventScript_Angela_Text_0:
	.string "Shot in the dark here, but are you\n"
	.string "ignored in large crowds?$"

Angela_Lose::
	.string "Do you know how to operate a pitman\n"
	.string "arm?$"
