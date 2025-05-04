Route104_MapScripts::
	.byte 0


Route4_EventScript_Grunt::
	lockall
	msgbox Route4_EventScript_Grunt_Text_0
	closemessage
	playse SE_PIN
	faceplayer
	applymovement 1, Route4_Grunt_Exclame
	waitmovement 1
	waitse
	msgbox Route4_EventScript_Grunt_Text_1
	closemessage
	switch VAR_STARTER_MON
	case 0, Route4_EventScript_Grunt_3
	case 1, Route4_EventScript_Grunt_4
	case 2, Route4_EventScript_Grunt_5
Route4_EventScript_Grunt_1:
	msgbox Route4_EventScript_Grunt_Text_3
	closemessage
	fadescreen FADE_TO_BLACK
	playse SE_M_DIVE
	removeobject 1
	addobject 2
	waitse
	fadescreen FADE_FROM_BLACK
	setflag FLAG_ROUTE4_GRUNT
	setvar VAR_SUNDARA_STATE, 5
	releaseall
	end

Route4_EventScript_Grunt_3:
	trainerbattle_no_intro TRAINER_ROUTE4_GRUNT_MUDKIP, Route4_EventScript_Grunt_Text_2
	goto Route4_EventScript_Grunt_1

Route4_EventScript_Grunt_4:
	trainerbattle_no_intro TRAINER_ROUTE4_GRUNT_BULBASAUR, Route4_EventScript_Grunt_Text_2
	goto Route4_EventScript_Grunt_1

Route4_EventScript_Grunt_5:
	trainerbattle_no_intro TRAINER_ROUTE4_GRUNT_CHIMCHAR, Route4_EventScript_Grunt_Text_2
	goto Route4_EventScript_Grunt_1


Route4_Grunt_Exclame:
	emote_exclamation_mark
	step_end

Route4_EventScript_Grunt_Text_0:
	.string "Oh boy I never considered that I might\n"
	.string "have to swim when I joined\l"
	.string "<EVILTEAM>...$"

Route4_EventScript_Grunt_Text_1:
	.string "Wait you're back? I guess I'll have to\n"
	.string "show you how to battle now!$"

Route4_EventScript_Grunt_Text_2:
	.string "I hate losing, like winning hates me!$"

Route4_EventScript_Grunt_Text_3:
	.string "This Pokémon doesn't seem strong\n"
	.string "anyway! I gotta zip!$"
