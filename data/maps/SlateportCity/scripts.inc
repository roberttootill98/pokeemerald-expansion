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


ApiseVillage_SweetHeart::
	lock
	faceplayer
	goto_if_set FLAG_APISEVILLAGE_SWEETHEART, ApiseVillage_SweetHeart_2
	msgbox ApiseVillage_SweetHeart_Text_1
	closemessage
	giveitem ITEM_SWEET_HEART
	setflag FLAG_APISEVILLAGE_SWEETHEART
ApiseVillage_SweetHeart_1:
	release
	end

ApiseVillage_SweetHeart_2:
	msgbox ApiseVillage_SweetHeart_Text_0
	closemessage
	goto ApiseVillage_SweetHeart_1


ApiseVillage_Sneezy::
	lock
	faceplayer
	msgbox ApiseVillage_Sneezy_Text_0
	closemessage
	release
	end


ApiseVillage_FlowerBox::
	lock
	faceplayer
	msgbox ApiseVillage_FlowerBox_Text_0
	closemessage
	applymovement 6, ApiseVillage_Movement_FlowerBox
	waitmovement 6
	release
	end


ApiseVillage_Movement_FlowerBox:
	face_right
	step_end

ApiseVillage_FenceGuy::
	lock
	faceplayer
	msgbox ApiseVillage_FenceGuy_Text_0
	closemessage
	release
	end


ApiseVillage_Boyfriend::
	lock
	faceplayer
	msgbox ApiseVillage_Boyfriend_Text_0
	closemessage
	applymovement 8, ApiseVillage_Movement_Boyfriend
	waitmovement 8
	release
	end


ApiseVillage_Movement_Boyfriend:
	face_right
	step_end

ApiseVillage_Girlfriend::
	lock
	faceplayer
	msgbox ApiseVillage_Girlfriend_Text_0
	closemessage
	applymovement 9, ApiseVillage_Movement_Girlfriend
	waitmovement 9
	release
	end


ApiseVillage_Movement_Girlfriend:
	face_left
	step_end

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

ApiseVillage_SweetHeart_Text_0:
	.string "I hope her cat is well.$"

ApiseVillage_SweetHeart_Text_1:
	.string "I've just had my heart broken, you might\n"
	.string "as well have this.$"

ApiseVillage_Sneezy_Text_0:
	.string "There must be a lot of pollen in this\n"
	.string "town, I can't stop sneezing!$"

ApiseVillage_FlowerBox_Text_0:
	.string "This is one of the flower boxes that our\n"
	.string "combee use to make the delicious honey\l"
	.string "for the cafe.$"

ApiseVillage_FenceGuy_Text_0:
	.string "I'm more suited to life inside the fence,\n"
	.string "if I could get a toilet installed out\l"
	.string "here it would be perfect.$"

ApiseVillage_Boyfriend_Text_0:
	.string "My girlfriend is 15 and I'm 20!$"

ApiseVillage_Girlfriend_Text_0:
	.string "My boyfriend thinks there's strong\n"
	.string "trainers who don't go the honey café\l"
	.string "and he's wrong!$"

ApiseVillage_Text_RivalBattle_Lose::
	.string "I can't believe it!$"
