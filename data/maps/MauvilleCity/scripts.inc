MauvilleCity_MapScripts::
	.byte 0


VenarusCove_EventScript_BlockingFisherman::
	lock
	faceplayer
	msgbox VenarusCove_Text_BlockingFisherman_Check
	closemessage
	goto_if_set FLAG_VENARUSCOVE_GOT_FISHERMANS_BADGE, VenarusCove_EventScript_BlockingFisherman_2
VenarusCove_EventScript_BlockingFisherman_1:
	release
	end

VenarusCove_EventScript_BlockingFisherman_2:
	playse SE_PIN
	applymovement 10, VenarusCove_Movement_BlockingFisherman_Exclaim
	waitmovement 10
	waitse
	msgbox VenarusCove_EventScript_BlockingFisherman_Text_0
	closemessage
	applymovement 10, VenarusCove_Movement_BlockingFisherman_Leave
	waitmovement 10
	setflag FLAG_VENARUSCOVE_BLOCKING_FISHERMAN_STARTING_PLACE
	removeobject 10
	clearflag FLAG_VENARUSCOVE_BLOCKING_FISHERMAN_NEW_PLACE
	removeobject 13
	goto VenarusCove_EventScript_BlockingFisherman_1


VenarusCove_Movement_BlockingFisherman_Exclaim:
	emote_exclamation_mark
	step_end

VenarusCove_Movement_BlockingFisherman_Leave:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

VenarusCove_EventScript_BlockingFishermanMoved::
	lock
	faceplayer
	msgbox VenarusCove_EventScript_BlockingFishermanMoved_Text_0
	closemessage
	release
	end


VenarusCove_EventScript_GymLeader::
	lock
	faceplayer
	goto_if_set FLAG_BADGE01_GET, VenarusCove_EventScript_GymLeader_2
	msgbox VenarusCove_EventScript_GymLeader_Text_2, MSGBOX_AUTOCLOSE
	msgbox VenarusCove_EventScript_GymLeader_Text_3, MSGBOX_AUTOCLOSE
	msgbox VenarusCove_EventScript_GymLeader_Text_4, MSGBOX_AUTOCLOSE
VenarusCove_EventScript_GymLeader_1:
	release
	end

VenarusCove_EventScript_GymLeader_2:
	msgbox VenarusCove_EventScript_GymLeader_Text_0, MSGBOX_AUTOCLOSE
	msgbox VenarusCove_EventScript_GymLeader_Text_1, MSGBOX_AUTOCLOSE
	goto VenarusCove_EventScript_GymLeader_1


VenarusCove_Trigger_GymBattle::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, VenarusCove_Trigger_GymBattle_PlayerFace
	applymovement 11, VenarusCove_Trigger_GymBattle_LeaderFace
	waitmovement OBJ_EVENT_ID_PLAYER
	waitmovement 11
	goto_if_unset FLAG_BADGE01_GET, VenarusCove_Trigger_GymBattle_2
VenarusCove_Trigger_GymBattle_1:
	msgbox VenarusCove_Trigger_GymBattle_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne VenarusCove_Trigger_GymBattle_5
	msgbox VenarusCove_Trigger_GymBattle_Text_6, MSGBOX_AUTOCLOSE
VenarusCove_Trigger_GymBattle_4:
	end

VenarusCove_Trigger_GymBattle_2:
	msgbox VenarusCove_Trigger_GymBattle_Text_0, MSGBOX_YESNO
	goto VenarusCove_Trigger_GymBattle_1

VenarusCove_Trigger_GymBattle_5:
	msgbox VenarusCove_Trigger_GymBattle_Text_2, MSGBOX_AUTOCLOSE
	switch VAR_BADGE_COUNT
	case 0, VenarusCove_Trigger_GymBattle_10
	case 1, VenarusCove_Trigger_GymBattle_10
	case 2, VenarusCove_Trigger_GymBattle_11
	case 3, VenarusCove_Trigger_GymBattle_12
	case 4, VenarusCove_Trigger_GymBattle_13
	case 5, VenarusCove_Trigger_GymBattle_14
	case 6, VenarusCove_Trigger_GymBattle_15
	case 7, VenarusCove_Trigger_GymBattle_16
	case 8, VenarusCove_Trigger_GymBattle_17
VenarusCove_Trigger_GymBattle_8:
	msgbox VenarusCove_Trigger_GymBattle_Text_3, MSGBOX_AUTOCLOSE
	goto_if_unset FLAG_BADGE01_GET, VenarusCove_Trigger_GymBattle_18
	goto VenarusCove_Trigger_GymBattle_4

VenarusCove_Trigger_GymBattle_10:
	trainerbattle_no_intro TRAINER_GYMLEADER_ESDEN_1, ApiseVillage_Text_RivalBattle_Lose
	goto VenarusCove_Trigger_GymBattle_8

VenarusCove_Trigger_GymBattle_11:
	trainerbattle_no_intro TRAINER_GYMLEADER_ESDEN_2, ApiseVillage_Text_RivalBattle_Lose
	goto VenarusCove_Trigger_GymBattle_8

VenarusCove_Trigger_GymBattle_12:
	trainerbattle_no_intro TRAINER_GYMLEADER_ESDEN_3, ApiseVillage_Text_RivalBattle_Lose
	goto VenarusCove_Trigger_GymBattle_8

VenarusCove_Trigger_GymBattle_13:
	trainerbattle_no_intro TRAINER_GYMLEADER_ESDEN_4, ApiseVillage_Text_RivalBattle_Lose
	goto VenarusCove_Trigger_GymBattle_8

VenarusCove_Trigger_GymBattle_14:
	trainerbattle_no_intro TRAINER_GYMLEADER_ESDEN_5, ApiseVillage_Text_RivalBattle_Lose
	goto VenarusCove_Trigger_GymBattle_8

VenarusCove_Trigger_GymBattle_15:
	trainerbattle_no_intro TRAINER_GYMLEADER_ESDEN_6, ApiseVillage_Text_RivalBattle_Lose
	goto VenarusCove_Trigger_GymBattle_8

VenarusCove_Trigger_GymBattle_16:
	trainerbattle_no_intro TRAINER_GYMLEADER_ESDEN_7, ApiseVillage_Text_RivalBattle_Lose
	goto VenarusCove_Trigger_GymBattle_8

VenarusCove_Trigger_GymBattle_17:
	trainerbattle_no_intro TRAINER_GYMLEADER_ESDEN_8, ApiseVillage_Text_RivalBattle_Lose
	goto VenarusCove_Trigger_GymBattle_8

VenarusCove_Trigger_GymBattle_18:
	msgbox VenarusCove_Trigger_GymBattle_Text_4, MSGBOX_AUTOCLOSE
	playfanfare MUS_OBTAIN_BADGE
	msgbox VenarusCove_Trigger_GymBattle_Text_5, MSGBOX_AUTOCLOSE
	waitfanfare
	setflag FLAG_BADGE01_GET
	addvar VAR_BADGE_COUNT, 1
	goto VenarusCove_Trigger_GymBattle_4


VenarusCove_Trigger_GymBattle_PlayerFace:
	face_right
	step_end

VenarusCove_Trigger_GymBattle_LeaderFace:
	face_left
	step_end

VenarusCove_Item_ParalyzeHeal::
	finditem ITEM_PARALYZE_HEAL
	end


VenarusCove_EventScript_PierFisherman::
	lock
	faceplayer
	msgbox VenarusCove_EventScript_PierFisherman_Text_0
	closemessage
	release
	end


VenarusCove_EventScript_PierWoman::
	lock
	faceplayer
	msgbox VenarusCove_EventScript_PierWoman_Text_0
	closemessage
	release
	end


VenarusCove_EventScript_PierBoy::
	lock
	faceplayer
	msgbox VenarusCove_EventScript_PierBoy_Text_0
	closemessage
	release
	end


VenarusCove_EventScript_BeachLittleGirl::
	lock
	faceplayer
	msgbox VenarusCove_EventScript_BeachLittleGirl_Text_0
	closemessage
	release
	end


VenarusCove_EventScript_BeachGirl::
	lock
	faceplayer
	msgbox VenarusCove_EventScript_BeachGirl_Text_0
	closemessage
	release
	end


VenarusCove_EventScript_BeachBoy::
	lock
	faceplayer
	msgbox VenarusCove_EventScript_BeachBoy_Text_0
	closemessage
	release
	end


VenarusCove_EventScript_RichBoy::
	lock
	faceplayer
	msgbox VenarusCove_EventScript_RichBoy_Text_0
	closemessage
	release
	end


VenarusCove_EventScript_Gentleman::
	lock
	faceplayer
	msgbox VenarusCove_EventScript_Gentleman_Text_0
	closemessage
	release
	end


VenarusCove_EventScript_Woman::
	lock
	faceplayer
	msgbox VenarusCove_EventScript_Woman_Text_0
	closemessage
	release
	end


VenarusCove_EventScript_BlockingFisherman_Text_0:
	.string "...\p"
	.string "Oh you have got the fisherman's badge!\n"
	.string "I'll go tell the gym leader!$"

VenarusCove_EventScript_BlockingFishermanMoved_Text_0:
	.string "You know they don't give out the\n"
	.string "fisherman's badge to just anyone, you\l"
	.string "must have done something pretty\l"
	.string "special!$"

VenarusCove_EventScript_GymLeader_Text_0:
	.string "You are a strong trainer and a good\n"
	.string "fisherman {PLAYER}!$"

VenarusCove_EventScript_GymLeader_Text_1:
	.string "If you fancy another battle make your\n"
	.string "way over to the otherside of the\l"
	.string "battlefield!$"

VenarusCove_EventScript_GymLeader_Text_2:
	.string "Hello there {PLAYER}, this is the\n"
	.string "secret fisherman's beach!$"

VenarusCove_EventScript_GymLeader_Text_3:
	.string "I heard about your induction into the\n"
	.string "fishermans guild, so we may do battle\l"
	.string "now!$"

VenarusCove_EventScript_GymLeader_Text_4:
	.string "Go stand on your side of the\n"
	.string "battlefield and our battle can start!$"

VenarusCove_Trigger_GymBattle_Text_0:
	.string "Hello again {PLAYER}, since we have\n"
	.string "already battled I won't give you\l"
	.string "another badge, this will just be for the\l"
	.string "love of the game!$"

VenarusCove_Trigger_GymBattle_Text_1:
	.string "Fisherman {PLAYER} are you ready to\n"
	.string "battle!$"

VenarusCove_Trigger_GymBattle_Text_2:
	.string "Get ready for a shock!$"

VenarusCove_Trigger_GymBattle_Text_3:
	.string "Wow, you are a well grounded trainer\n"
	.string "fisherman {PLAYER}!$"

VenarusCove_Trigger_GymBattle_Text_4:
	.string "You are well deserving of this!$"

VenarusCove_Trigger_GymBattle_Text_5:
	.string "{PLAYER} received the Shock Badge!$"

VenarusCove_Trigger_GymBattle_Text_6:
	.string "You aren't ready for my shock?$"

VenarusCove_EventScript_PierFisherman_Text_0:
	.string "I'm casting my line from all the way up\n"
	.string "here, but it seems to just mean I need\l"
	.string "more strength to reel it in.$"

VenarusCove_EventScript_PierWoman_Text_0:
	.string "I try to let me my son explore the world\n"
	.string "freely, but I would not mind if there\l"
	.string "were some guard rails up here!$"

VenarusCove_EventScript_PierBoy_Text_0:
	.string "These boards are creeky!$"

VenarusCove_EventScript_BeachLittleGirl_Text_0:
	.string "I'm trying to make a water system by\n"
	.string "digging channels into the sand!$"

VenarusCove_EventScript_BeachGirl_Text_0:
	.string "Can you see the tracks I'm making?$"

VenarusCove_EventScript_BeachBoy_Text_0:
	.string "Seems like there's a lot of people with\n"
	.string "projects today on the beach.$"

VenarusCove_EventScript_RichBoy_Text_0:
	.string "I came here to shop but there's only\n"
	.string "this crummy fishing supplies store!$"

VenarusCove_EventScript_Gentleman_Text_0:
	.string "This here is the centre of town, and\n"
	.string "that building up there is the\l"
	.string "fisherman's club.$"

VenarusCove_EventScript_Woman_Text_0:
	.string "Some people would say the weather here\n"
	.string "today is bad, but it makes a beautiful\l"
	.string "smell.$"

VenarusCove_Text_BlockingFisherman_Check::
	.string "Hey bud, this is the pathway to the\n"
	.string "fisherman's secret beach. Only cool\l"
	.string "guys with the fisherman's badge are\l"
	.string "allowed back here.$"
