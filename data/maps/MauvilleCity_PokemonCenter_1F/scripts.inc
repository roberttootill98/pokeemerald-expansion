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

VenarusCove_EventScript_PokeMart::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart VenarusCove_Mart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


	.align 2
VenarusCove_Mart:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

VenarusCove_EventScript_PokemonCenter_1F_Camper::
	lock
	faceplayer
	msgbox VenarusCove_EventScript_PokemonCenter_1F_Camper_Text_0, MSGBOX_AUTOCLOSE
	release
	end


VenarusCove_EventScript_PokemonCenter_1F_Woman::
	lock
	faceplayer
	msgbox VenarusCove_EventScript_PokemonCenter_1F_Woman_Text_0, MSGBOX_AUTOCLOSE
	release
	end


VenarusCove_EventScript_PokemonCenter_1F_Camper_Text_0:
	.string "I heard the mart employee complaining\n"
	.string "on his break. He said they're losing out\l"
	.string "to the fishing shop.$"

VenarusCove_EventScript_PokemonCenter_1F_Woman_Text_0:
	.string "I have a really hard time telling what\n"
	.string "the nurse is saying, I think it's\l"
	.string "something about the room acoustics.$"
