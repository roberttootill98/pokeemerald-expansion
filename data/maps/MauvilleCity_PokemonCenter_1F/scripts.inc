MauvilleCity_PokemonCenter_1F_MapScripts::
	.byte 0


.set LOCALID_NURSE, 1

MauvilleCity_PokemonCenter_1F_EventScript_Nurse:: @ 8210E78
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

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
	clearflag FLAG_VENARUSCOVE_BLOCKING_FISHERMAN_NEW_PLACE
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
