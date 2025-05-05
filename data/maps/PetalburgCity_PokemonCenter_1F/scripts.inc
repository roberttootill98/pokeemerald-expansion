SundaraVillage_PokemonCenter_1F_EventScript_Gentleman::
	lock
	faceplayer
	msgbox SundaraVillage_PokemonCenter_1F_EventScript_Gentleman_Text_0
	closemessage
	release
	end


SundaraVillage_PokemonCenter_1F_EventScript_Man::
	lock
	faceplayer
	msgbox SundaraVillage_PokemonCenter_1F_EventScript_Man_Text_0
	closemessage
	release
	end


.set LOCALID_NURSE, 1

PetalburgCity_PokemonCenter_1F_MapScripts:: @ 82079E8
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

PetalburgCity_PokemonCenter_1F_OnTransition: @ 82079F3
	setrespawn HEAL_LOCATION_PETALBURG_CITY
	call Common_EventScript_UpdateBrineyLocation
	end

PetalburgCity_PokemonCenter_1F_EventScript_Nurse:: @ 82079FC
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

SundaraVillage_PokemonCenter_1F_EventScript_Gentleman_Text_0:
	.string "Not every Pokémon center is the same,\n"
	.string "but they all have the same logo on the\l"
	.string "outside of the building.$"

SundaraVillage_PokemonCenter_1F_EventScript_Man_Text_0:
	.string "I'm exhausted, I've just come from\n"
	.string "Litdrum Island to compete in the\l"
	.string "master rank contest!$"
