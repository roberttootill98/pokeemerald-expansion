ShardMines_Entrance_MapScripts::
	.byte 0


ShardMines_Entrance_EntryHiker::
	lockall
	faceplayer
	msgbox ShardMines_Entrance_EntryHiker_Text_0
	random 2
	switch VAR_RESULT
	case 0, ShardMines_Entrance_EntryHiker_3
	case 1, ShardMines_Entrance_EntryHiker_4
ShardMines_Entrance_EntryHiker_1:
	msgbox ShardMines_Entrance_EntryHiker_Text_3
	releaseall
	return

ShardMines_Entrance_EntryHiker_3:
	msgbox ShardMines_Entrance_EntryHiker_Text_1
	warp MAP_VERDANTURF_TOWN_POKEMON_CENTER_1F, 0, 0, 0
	goto ShardMines_Entrance_EntryHiker_1

ShardMines_Entrance_EntryHiker_4:
	msgbox ShardMines_Entrance_EntryHiker_Text_2
	warp MAP_VERDANTURF_TOWN_MART, 0, 0, 0
	goto ShardMines_Entrance_EntryHiker_1


ShardMines_Entrance_EntryHiker_Text_0:
	.string "Hi, welcome to the Shard Mines!$"

ShardMines_Entrance_EntryHiker_Text_1:
	.string "you got 0, pokemon center$"

ShardMines_Entrance_EntryHiker_Text_2:
	.string "you got 1, pokemart$"

ShardMines_Entrance_EntryHiker_Text_3:
	.string "done$"
