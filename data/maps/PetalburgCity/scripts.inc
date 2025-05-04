PetalburgCity_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PetalburgCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_SUNDARA_STATE, 1, SundaraVillage_EventScript_RivalOutsideHouse
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
	hideobjectat 1, 0
	playse SE_EXIT
	waitse
	applymovement OBJ_EVENT_ID_PLAYER, rivalWalkToContentHallPlayerInFrontOfDoor
	waitmovement OBJ_EVENT_ID_PLAYER
	warp MAP_SUNDARA_VILLAGE_CONTEST_HALL, 0, 0, 0
	return


rivalOutsideHousePlayer:
	face_right
	step_end

rivalOutsideHouse:
	emote_exclamation_mark
	face_left
	step_end

rivalWalkToContestHall:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_right
	walk_down
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	face_up
	step_end

rivalWalkToContestHallPlayer:
	walk_right
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_right
	walk_down
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
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

SundaraVillage_EventScript_RivalOutsideHouse_Text_0:
	.string "I wasn't looking at your mum! Anyways!\n"
	.string "Let's go see if <AIDE> is down at the\l"
	.string "content hall yet!$"

SundaraVillage_EventScript_RivalOutsideHouse_Text_1:
	.string "I can see them through the window!\n"
	.string "Quick! Let's go inside!$"
