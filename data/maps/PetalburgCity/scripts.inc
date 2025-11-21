PetalburgCity_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PetalburgCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_SUNDARA_STATE, 1, SundaraVillage_EventScript_RivalOutsideHouse
	map_script_2 VAR_SUNDARA_STATE, 5, SundaraVillage_EventScript_ReturnStolenPokemon
	.2byte 0


SundaraVillage_EventScript_RivalOutsideHouse::
	lock
	setvar VAR_SUNDARA_STATE, 2
	setflag FLAG_SUNDARA_RIVAL_OUTISDE_HOUSE
	applymovement OBJ_EVENT_ID_PLAYER, rivalOutsideHousePlayer
	waitmovement OBJ_EVENT_ID_PLAYER
	playse SE_PIN
	applymovement 1, rivalOutsideHouse
	waitmovement 1
	waitse
	msgbox SundaraVillage_EventScript_RivalOutsideHouse_Text_0
	closemessage
	applymovement 1, rivalWalkToContestHall
	applymovement OBJ_EVENT_ID_PLAYER, rivalWalkToContestHallPlayer
	waitmovement 1
	waitmovement OBJ_EVENT_ID_PLAYER
	playse SE_PIN
	applymovement 1, rivalWalkToContestHallLookInside
	waitmovement 1
	waitse
	msgbox SundaraVillage_EventScript_RivalOutsideHouse_Text_1
	closemessage
	applymovement 1, rivalWalkToContentHallRivalInFrontOfDoor
	waitmovement 1
	opendoor 21, 17
	playse SE_SLIDING_DOOR
	waitdooranim
	waitse
	removeobject 1
	playse SE_EXIT
	waitse
	applymovement OBJ_EVENT_ID_PLAYER, rivalWalkToContentHallPlayerInFrontOfDoor
	waitmovement OBJ_EVENT_ID_PLAYER
	warp MAP_SUNDARA_VILLAGE_CONTEST_HALL, 1, 0, 0
	return


rivalOutsideHousePlayer:
	face_right
	step_end

rivalOutsideHouse:
	emote_exclamation_mark
	face_left
	step_end

rivalWalkToContestHall:
	player_run_down
	player_run_right
	player_run_right
	player_run_right
	player_run_right
	player_run_right
	player_run_right
	player_run_right
	player_run_right
	player_run_right
	player_run_right
	player_run_right
	player_run_right
	player_run_right
	player_run_right
	player_run_right
	player_run_right
	player_run_right
	player_run_right
	player_run_right
	player_run_down
	player_run_right
	player_run_right
	player_run_down
	player_run_down
	player_run_right
	player_run_down
	player_run_down
	player_run_down
	player_run_down
	player_run_down
	player_run_down
	player_run_down
	player_run_down
	player_run_left
	player_run_down
	player_run_left
	player_run_left
	player_run_left
	player_run_left
	player_run_left
	player_run_left
	player_run_left
	player_run_left
	player_run_left
	player_run_left
	player_run_left
	player_run_left
	player_run_left
	player_run_left
	face_up
	step_end

rivalWalkToContestHallPlayer:
	player_run_right
	player_run_down
	player_run_right
	player_run_right
	player_run_right
	player_run_right
	player_run_right
	player_run_right
	player_run_right
	player_run_right
	player_run_right
	player_run_right
	player_run_right
	player_run_right
	player_run_right
	player_run_right
	player_run_right
	player_run_right
	player_run_right
	player_run_right
	player_run_right
	player_run_down
	player_run_right
	player_run_right
	player_run_down
	player_run_down
	player_run_right
	player_run_down
	player_run_down
	player_run_down
	player_run_down
	player_run_down
	player_run_down
	player_run_down
	player_run_down
	player_run_left
	player_run_down
	player_run_left
	player_run_left
	player_run_left
	player_run_left
	player_run_left
	player_run_left
	player_run_left
	player_run_left
	player_run_left
	player_run_left
	player_run_left
	player_run_left
	player_run_left
	face_left
	step_end

rivalWalkToContestHallLookInside:
	emote_exclamation_mark
	step_end

rivalWalkToContentHallRivalInFrontOfDoor:
	walk_left
	face_up
	step_end

rivalWalkToContentHallPlayerInFrontOfDoor:
	walk_left
	walk_left
	face_up
	step_end

SundaraVillage_EventScript_AideStopLeave::
	lockall
	applymovement 2, AideStopLeave_FaceLeft
	waitmovement 2
	msgbox SundaraVillage_EventScript_AideStopLeave_Text_0
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, AideStopLeave_MovePlayer
	waitmovement OBJ_EVENT_ID_PLAYER
	releaseall
	end


AideStopLeave_FaceLeft:
	face_left
	step_end

AideStopLeave_MovePlayer:
	walk_left
	step_end

SundaraVillage_EventScript_ReturnStolenPokemon::
	lockall
	setvar VAR_SUNDARA_STATE, 6
	switch VAR_STARTER_MON
	case 0, SundaraVillage_EventScript_ReturnStolenPokemon_3
	case 1, SundaraVillage_EventScript_ReturnStolenPokemon_4
	case 2, SundaraVillage_EventScript_ReturnStolenPokemon_5
SundaraVillage_EventScript_ReturnStolenPokemon_1:
	closemessage
	msgbox SundaraVillage_EventScript_ReturnStolenPokemon_Text_3
	closemessage
	msgbox SundaraVillage_EventScript_ReturnStolenPokemon_Text_4
	closemessage
	applymovement 5, SundaraVillage_ReturnStolenPokemon_RivalLeave
	waitmovement 5
	removeobject 5
	msgbox SundaraVillage_EventScript_ReturnStolenPokemon_Text_5
	closemessage
	applymovement 3, SundaraVillage_ReturnStolenPokemon_AideLeave
	waitmovement 3
	removeobject 3
	playse SE_PIN
	applymovement 4, SundaraVillage_ReturnStolenPokemon_DadHeart
	waitmovement 4
	waitse
	msgbox SundaraVillage_EventScript_ReturnStolenPokemon_Text_6
	closemessage
	applymovement 4, SundaraVillage_ReturnStolenPokemon_DadLeave
	waitmovement 4
	removeobject 4
	setflag FLAG_SUNDARA_RETURN_STOLEN_POKEMON
	releaseall
	end

SundaraVillage_EventScript_ReturnStolenPokemon_3:
	msgbox SundaraVillage_EventScript_ReturnStolenPokemon_Text_0
	goto SundaraVillage_EventScript_ReturnStolenPokemon_1

SundaraVillage_EventScript_ReturnStolenPokemon_4:
	msgbox SundaraVillage_EventScript_ReturnStolenPokemon_Text_1
	goto SundaraVillage_EventScript_ReturnStolenPokemon_1

SundaraVillage_EventScript_ReturnStolenPokemon_5:
	msgbox SundaraVillage_EventScript_ReturnStolenPokemon_Text_2
	goto SundaraVillage_EventScript_ReturnStolenPokemon_1


SundaraVillage_ReturnStolenPokemon_RivalLeave:
	player_run_right
	player_run_right
	player_run_up
	player_run_right
	player_run_right
	player_run_right
	player_run_right
	player_run_right
	step_end

SundaraVillage_ReturnStolenPokemon_AideLeave:
	walk_right
	walk_right
	walk_up
	walk_right
	walk_right
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

SundaraVillage_ReturnStolenPokemon_DadHeart:
	emote_heart
	step_end

SundaraVillage_ReturnStolenPokemon_DadLeave:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

SundaraVillage_Item_Potion::
	finditem ITEM_POTION
	end


SundaraVillage_EventScript_RiverMan::
	lock
	faceplayer
	msgbox SundaraVillage_EventScript_RiverMan_Text_0
	closemessage
	release
	end


SundaraVillage_EventScript_PromiseBoy::
	lock
	faceplayer
	msgbox SundaraVillage_EventScript_PromiseBoy_Text_0
	closemessage
	release
	end


SundaraVillage_EventScript_ContestGirl::
	lock
	faceplayer
	msgbox SundaraVillage_EventScript_ContestGirl_Text_0
	closemessage
	release
	end


SundaraVillage_EventScript_Fisherman::
	lock
	faceplayer
	msgbox SundaraVillage_EventScript_Fisherman_Text_0
	closemessage
	release
	end


SundaraVillage_EventScript_FlowerPatchMan::
	lock
	faceplayer
	msgbox SundaraVillage_EventScript_FlowerPatchMan_Text_0
	closemessage
	release
	end


SundaraVillage_EventScript_RivalOutsideHouse_Text_0:
	.string "I wasn't looking at your mum! Anyways!\n"
	.string "Let's go see if <AIDE> is down at the\l"
	.string "content hall yet!$"

SundaraVillage_EventScript_RivalOutsideHouse_Text_1:
	.string "I can see them through the window!\n"
	.string "Quick! Let's go inside!$"

SundaraVillage_EventScript_AideStopLeave_Text_0:
	.string "Hey {PLAYER}, have you found that\n"
	.string "guy yet? I haven't seem him come this\l"
	.string "way!$"

SundaraVillage_EventScript_ReturnStolenPokemon_Text_0:
	.string "<AIDE>: Thank you so much for saving\n"
	.string "Mudkip!$"

SundaraVillage_EventScript_ReturnStolenPokemon_Text_1:
	.string "<AIDE>: Thank you so much for saving\n"
	.string "Bulbasaur!$"

SundaraVillage_EventScript_ReturnStolenPokemon_Text_2:
	.string "<AIDE>: Thank you so much for saving\n"
	.string "Chimchar!$"

SundaraVillage_EventScript_ReturnStolenPokemon_Text_3:
	.string "Dad: What are you guys going to do now?$"

SundaraVillage_EventScript_ReturnStolenPokemon_Text_4:
	.string "{RIVAL}: I'm off to find the\n"
	.string "strongest Pokémon!$"

SundaraVillage_EventScript_ReturnStolenPokemon_Text_5:
	.string "<AIDE>: I'm going to find my way back to\n"
	.string "the capital to share my findings with\l"
	.string "<PROFESSOR>$"

SundaraVillage_EventScript_ReturnStolenPokemon_Text_6:
	.string "Dad: Well done today {PLAYER}.$"

SundaraVillage_EventScript_RiverMan_Text_0:
	.string "When life seems complicated and\n"
	.string "difficult, I like to just watch the\l"
	.string "river flow.$"

SundaraVillage_EventScript_PromiseBoy_Text_0:
	.string "I made a promise to my mum that I would\n"
	.string "find the longest strand of grass.$"

SundaraVillage_EventScript_ContestGirl_Text_0:
	.string "I came to Sundara Village to compete in\n"
	.string "contests, but I didn't realise I'd have\l"
	.string "to qualify beforehand.$"

SundaraVillage_EventScript_Fisherman_Text_0:
	.string "The open ocean has some of the rarest\n"
	.string "pokémon, or so I've been told, doesn't\l"
	.string "seem like it so far.$"

SundaraVillage_EventScript_FlowerPatchMan_Text_0:
	.string "This spot seems to be the best for\n"
	.string "growing flowers, I wonder if the soil is\l"
	.string "different here.$"
