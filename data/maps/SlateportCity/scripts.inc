SlateportCity_MapScripts::
	.byte 0


ApiseVillage_EventScript_Grandma::
	lock
	faceplayer
	msgbox ApiseVillage_EventScript_Grandma_Text_0
	closemessage
	release
	end


ApiseVillage_EventScript_HealSpot::
	lock
	fadescreen FADE_TO_BLACK
	playse MUS_HEAL
	special HealPlayerParty
	waitse
	fadescreen FADE_FROM_BLACK
	msgbox ApiseVillage_EventScript_HealSpot_Text_0
	closemessage
	release
	end


ApiseVillage_EventScript_Grandma_Text_0:
	.string "Grandma: Hello my dear {PLAYER}. Here\n"
	.string "in Apise Village, we have very clear air,\l"
	.string "it can even restore the health of\l"
	.string "Pokémon! Try stepping in the middle of\l"
	.string "those flowers!$"

ApiseVillage_EventScript_HealSpot_Text_0:
	.string "{PLAYER}'s Pokémon were healed\n"
	.string "completely!$"
