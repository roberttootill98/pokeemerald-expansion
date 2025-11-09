SlateportCity_MapScripts::
	.byte 0


ApiseVillage_EventScript_Grandma::
	lock
	faceplayer
	msgbox ApiseVillage_EventScript_Grandma_Text_0
	closemessage
	release
	end


ApiseVillage_EventScript_HealSpot::
	lock
	fadescreen FADE_TO_BLACK
	playse MUS_HEAL
	special HealPlayerParty
	waitse
	fadescreen FADE_FROM_BLACK
	msgbox ApiseVillage_EventScript_HealSpot_Text_0
	closemessage
	release
	end


ApiseVillage_EventScript_RivalBattle::
	lock
	playse SE_PIN
	applymovement 2, ApiseVillage_Movement_RivalSee
	waitmovement 2
	waitse
	msgbox ApiseVillage_EventScript_RivalBattle_Text_0
	closemessage
	applymovement 2, ApiseVillage_Movement_RivalApproach
	waitmovement 2
	msgbox ApiseVillage_EventScript_RivalBattle_Text_1
	closemessage
	switch VAR_STARTER_MON
	case 0, ApiseVillage_EventScript_RivalBattle_3
	case 1, ApiseVillage_EventScript_RivalBattle_4
	case 2, ApiseVillage_EventScript_RivalBattle_5
ApiseVillage_EventScript_RivalBattle_1:
	msgbox ApiseVillage_EventScript_RivalBattle_Text_2
	closemessage
	applymovement 2, ApiseVillage_Movement_RivalLeave
	waitmovement 2
	removeobject 2
	setvar VAR_APISE_RIVAL, 1
	setflag FLAG_APISEVILLAGE_RIVAL
	release
	end

ApiseVillage_EventScript_RivalBattle_3:
	trainerbattle_no_intro TRAINER_APISEVILLAGE_RIVAL_CHIMCHAR, ApiseVillage_Text_RivalBattle_Lose
	goto ApiseVillage_EventScript_RivalBattle_1

ApiseVillage_EventScript_RivalBattle_4:
	trainerbattle_no_intro TRAINER_APISEVILLAGE_RIVAL_MUDKIP, ApiseVillage_Text_RivalBattle_Lose
	goto ApiseVillage_EventScript_RivalBattle_1

ApiseVillage_EventScript_RivalBattle_5:
	trainerbattle_no_intro TRAINER_APISEVILLAGE_RIVAL_BULBASAUR, ApiseVillage_Text_RivalBattle_Lose
	goto ApiseVillage_EventScript_RivalBattle_1


ApiseVillage_Movement_RivalSee:
	face_left
	emote_exclamation_mark
	step_end

ApiseVillage_Movement_RivalApproach:
	walk_left
	walk_left
	step_end

ApiseVillage_Movement_RivalLeave:
	player_run_right
	player_run_right
	player_run_right
	player_run_right
	player_run_right
	player_run_right
	player_run_right
	step_end

ApiseVillage_HoneyShopGuy::
	lock
	faceplayer
	msgbox ApiseVillage_HoneyShopGuy_Text_0
	closemessage
	release
	end


ApiseVillage_EventScript_Grandma_Text_0:
	.string "Grandma: Hello my dear {PLAYER}. Here\n"
	.string "in Apise Village, we have honey gardens,\l"
	.string "they create very clear air. It can even\l"
	.string "restore the health of Pokémon, try\l"
	.string "stepping in the middle of those\l"
	.string "flowers!$"

ApiseVillage_EventScript_HealSpot_Text_0:
	.string "{PLAYER}'s Pokémon were healed\n"
	.string "completely!$"

ApiseVillage_EventScript_RivalBattle_Text_0:
	.string "Hey {PLAYER}!$"

ApiseVillage_EventScript_RivalBattle_Text_1:
	.string "Let's battle you turd!$"

ApiseVillage_EventScript_RivalBattle_Text_2:
	.string "Blow me down, you shit me out!$"

ApiseVillage_HoneyShopGuy_Text_0:
	.string "Hey there! Sorry the Honey Café (tm) is\n"
	.string "closed for now!$"

ApiseVillage_Text_RivalBattle_Lose::
	.string "I can't believe it!$"
