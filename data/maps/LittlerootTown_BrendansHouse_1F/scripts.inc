LittlerootTown_BrendansHouse_1F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_SUNDARA_STATE, 0, SundaraVillage_PlayerHouse_1F_EventScript_WalkDownstairs
	.2byte 0


SundaraVillage_PlayerHouse_1F_EventScript_WalkDownstairs::
	lock
	call SetGameStart
	playse SE_PIN
	applymovement 1, mumExclamationMark
	waitmovement 1
	waitse
	msgbox SundaraVillage_PlayerHouse_1F_EventScript_WalkDownstairs_Text_0
	closemessage
	delay 15
	applymovement 1, mumMoveToPlayer
	waitmovement 1
	msgbox SundaraVillage_PlayerHouse_1F_EventScript_WalkDownstairs_Text_1
	closemessage
	fadescreen FADE_TO_BLACK
	special StartWallClock
	waitstate
	msgbox SundaraVillage_PlayerHouse_1F_EventScript_WalkDownstairs_Text_2
	closemessage
	call giveRunningShoes
	applymovement 1, mumWalkAwayABit
	waitmovement 1
	msgbox SundaraVillage_PlayerHouse_1F_EventScript_WalkDownstairs_Text_3
	closemessage
	applymovement 1, mumBackToTable
	waitmovement 1
	setvar VAR_SUNDARA_STATE, 1
	release
	end


SetGameStart::
	setflag FLAG_SUNDARA_GET_POKEMON_GRUNT
	setflag FLAG_ROUTE4_LOST_POKEMON
	setflag FLAG_SUNDARA_RETURN_STOLEN_POKEMON
	setflag FLAG_VENARUSCOVE_BLOCKING_FISHERMAN_NEW_PLACE
	return


mumExclamationMark:
	emote_exclamation_mark
	step_end

mumMoveToPlayer:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	step_end

mumWalkAwayABit:
	walk_down
	walk_left
	face_up
	step_end

mumBackToTable:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	face_right
	step_end

giveRunningShoes::
	playfanfare MUS_OBTAIN_ITEM
	msgbox giveRunningShoes_Text_0
	closemessage
	waitfanfare
	setflag FLAG_SYS_B_DASH
	return


SundaraVillage_PlayerHouse_1F_EventScript_Mum::
	lock
	faceplayer
	switch VAR_SUNDARA_STATE
	case 1, SundaraVillage_PlayerHouse_1F_EventScript_Mum_3
	case 4, SundaraVillage_PlayerHouse_1F_EventScript_Mum_4
	case 6, SundaraVillage_PlayerHouse_1F_EventScript_Mum_5
SundaraVillage_PlayerHouse_1F_EventScript_Mum_1:
	closemessage
	release
	end

SundaraVillage_PlayerHouse_1F_EventScript_Mum_3:
	msgbox SundaraVillage_PlayerHouse_1F_EventScript_Mum_Text_0
	goto SundaraVillage_PlayerHouse_1F_EventScript_Mum_1

SundaraVillage_PlayerHouse_1F_EventScript_Mum_4:
	msgbox SundaraVillage_PlayerHouse_1F_EventScript_Mum_Text_1
	goto SundaraVillage_PlayerHouse_1F_EventScript_Mum_1

SundaraVillage_PlayerHouse_1F_EventScript_Mum_5:
	msgbox SundaraVillage_PlayerHouse_1F_EventScript_Mum_Text_2
	goto SundaraVillage_PlayerHouse_1F_EventScript_Mum_1


SundaraVillage_PlayerHouse_1F_EventScript_WalkDownstairs_Text_0:
	.string "Hey {PLAYER}!$"

SundaraVillage_PlayerHouse_1F_EventScript_WalkDownstairs_Text_1:
	.string "You're up late, what time do you call\n"
	.string "this?$"

SundaraVillage_PlayerHouse_1F_EventScript_WalkDownstairs_Text_2:
	.string "Isn't today the day <AIDE> arrives with\n"
	.string "her Pokémon? Don't forget these!$"

SundaraVillage_PlayerHouse_1F_EventScript_WalkDownstairs_Text_3:
	.string "Also I think {RIVAL} is outside, you\n"
	.string "probably ought to say hello.$"

giveRunningShoes_Text_0:
	.string "{PLAYER} put on the running shoes!$"

SundaraVillage_PlayerHouse_1F_EventScript_Mum_Text_0:
	.string "You really ought to go see {RIVAL},\n"
	.string "they're mucking up the window.$"

SundaraVillage_PlayerHouse_1F_EventScript_Mum_Text_1:
	.string "Are you ok {PLAYER}? I heard about\n"
	.string "that rotten fella stealing that poor\l"
	.string "Pokémon. I haven't seen him here at\l"
	.string "least!$"

SundaraVillage_PlayerHouse_1F_EventScript_Mum_Text_2:
	.string "Hey {PLAYER}, how are you? I've been\n"
	.string "thinking about clouds recently.$"
