.set LOCALID_NURSE, 1

SlateportCity_PokemonCenter_1F_MapScripts:: @ 820DABF
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

SlateportCity_PokemonCenter_1F_OnTransition: @ 820DACA
	setrespawn HEAL_LOCATION_SLATEPORT_CITY
	call Common_EventScript_UpdateBrineyLocation
	end

SlateportCity_PokemonCenter_1F_EventScript_Nurse:: @ 820DAD3
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

ApiseVillage_EventScript_PokeMart::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart ApiseVillage_Mart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


	.align 2
ApiseVillage_Mart:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_NEST_BALL
	.2byte ITEM_POTION
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

ApiseVillage_PokemonCenter_1F_EventScript_Boy1::
	lock
	faceplayer
	msgbox ApiseVillage_PokemonCenter_1F_EventScript_Boy1_Text_0
	closemessage
	release
	end


ApiseVillage_PokemonCenter_1F_EventScript_Boy2::
	lock
	faceplayer
	msgbox ApiseVillage_PokemonCenter_1F_EventScript_Boy2_Text_0
	closemessage
	release
	end


ApiseVillage_PokemonCenter_1F_EventScript_Girl::
	lock
	faceplayer
	msgbox ApiseVillage_PokemonCenter_1F_EventScript_Girl_Text_0
	closemessage
	release
	end


ApiseVillage_PokemonCenter_1F_EventScript_Boy1_Text_0:
	.string "I'm preparing my team to take on the\n"
	.string "honey café!$"

ApiseVillage_PokemonCenter_1F_EventScript_Boy2_Text_0:
	.string "What's the best held item to give to my\n"
	.string "Fletchling...$"

ApiseVillage_PokemonCenter_1F_EventScript_Girl_Text_0:
	.string "I wonder what my legacy will be, who will\n"
	.string "remember me last?$"
