Route102_MapScripts::
	.byte 0


WindyMeadow_Trainer_Angela::
	trainerbattle_single TRAINER_WINDYMEADOW_ANGELA, WindyMeadow_Trainer_Angela_Text_0, Angela_Lose
	msgbox Angela_Lose, MSGBOX_AUTOCLOSE
	release
	end


WindyMeadow_Trainer_Steven::
	trainerbattle_single TRAINER_WINDYMEADOW_STEVEN, WindyMeadow_Trainer_Steven_Text_0, Steven_Lose
	msgbox Steven_Lose, MSGBOX_AUTOCLOSE
	release
	end


WindyMeadow_Trainer_Winona::
	trainerbattle_single TRAINER_WINDYMEADOW_WINONA, WindyMeadow_Trainer_Winona_Text_0, Winona_Lose
	msgbox Winona_Lose, MSGBOX_AUTOCLOSE
	release
	end


WindyMeadow_Trainer_Halston::
	trainerbattle_single TRAINER_WINDYMEADOW_HALSTON, WindyMeadow_Trainer_Halston_Text_0, Halston_Lose
	msgbox Halston_Lose, MSGBOX_AUTOCLOSE
	release
	end


WindyMeadow_Trainer_Jake::
	trainerbattle_single TRAINER_WINDYMEADOW_JAKE, WindyMeadow_Trainer_Jake_Text_0, Jake_Lose
	msgbox Jake_Lose, MSGBOX_AUTOCLOSE
	release
	end


WindyMeadow_Item_ParalyzeHeal::
	finditem ITEM_PARALYZE_HEAL
	end


WindyMeadow_Item_PPUp::
	finditem ITEM_PP_UP
	end


WindyMeadow_Trainer_Angela_Text_0:
	.string "Shot in the dark here, but are you\n"
	.string "ignored in large crowds?$"

WindyMeadow_Trainer_Steven_Text_0:
	.string "I've just completed my bachelor's in\n"
	.string "piperidine opioids!$"

WindyMeadow_Trainer_Winona_Text_0:
	.string "Help me build up the strength to jump in\n"
	.string "the water!$"

WindyMeadow_Trainer_Halston_Text_0:
	.string "Bug pokémon are kinda like land fish!$"

WindyMeadow_Trainer_Jake_Text_0:
	.string "I'm looking to get a new job.$"

Angela_Lose::
	.string "Do you know how to operate a pitman\n"
	.string "arm?$"

Steven_Lose::
	.string "Do let me know if you need any\n"
	.string "piperidine opioids produced!$"

Winona_Lose::
	.string "I don't know if I'm feel any more\n"
	.string "confident...$"

Halston_Lose::
	.string "I'm not sure what land fish means if I'm\n"
	.string "being honest.$"

Jake_Lose::
	.string "The job market for Poochyena trainers\n"
	.string "isn't so good right now.$"
