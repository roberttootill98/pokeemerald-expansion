RusturfTunnel_MapScripts::
	.byte 0


LakeApise_GiveSootheBell::
	lock
	faceplayer
	goto_if_set FLAG_LAKEAPISE_GIVE_SOOTHEBELL, LakeApise_GiveSootheBell_2
	msgbox LakeApise_GiveSootheBell_Text_1
	closemessage
	giveitem ITEM_SOOTHE_BELL
	setflag FLAG_LAKEAPISE_GIVE_SOOTHEBELL
LakeApise_GiveSootheBell_1:
	release
	end

LakeApise_GiveSootheBell_2:
	msgbox LakeApise_GiveSootheBell_Text_0
	closemessage
	goto LakeApise_GiveSootheBell_1


LakeApise_Trainer_Annabelle::
	trainerbattle_single TRAINER_LAKEAPISE_ANNABELLE, LakeApise_Trainer_Annabelle_Text_0, LakeApise_Trainer_Annabelle_Text_1
	msgbox LakeApise_Trainer_Annabelle_Text_1, MSGBOX_AUTOCLOSE
	end


LakeApise_Trainer_Christian::
	trainerbattle_single TRAINER_LAKEAPISE_CHRISTIAN, LakeApise_Trainer_Christian_Text_0, LakeApise_Trainer_Christian_Text_1
	msgbox LakeApise_Trainer_Christian_Text_1, MSGBOX_AUTOCLOSE
	end


LakeApise_Trainer_Dunga::
	trainerbattle_single TRAINER_LAKEAPISE_DUNGA, LakeApise_Trainer_Dunga_Text_0, LakeApise_Trainer_Dunga_Text_1
	msgbox LakeApise_Trainer_Dunga_Text_1, MSGBOX_AUTOCLOSE
	end


LakeApise_Trainer_Fingle::
	trainerbattle_single TRAINER_LAKEAPISE_FINGLE, LakeApise_Trainer_Fingle_Text_0, LakeApise_Trainer_Fingle_Text_1
	msgbox LakeApise_Trainer_Fingle_Text_1, MSGBOX_AUTOCLOSE
	end


LakeApise_Item_NestBall::
	finditem ITEM_NEST_BALL
	end


LakeApise_GiveSootheBell_Text_0:
	.string "Lake Apise must be the most soothing\n"
	.string "place in all of <REGION>.$"

LakeApise_GiveSootheBell_Text_1:
	.string "Lake Apise is really soothing at this\n"
	.string "time of day.\p"
	.string "...\p"
	.string "Take this.$"

LakeApise_Trainer_Annabelle_Text_0:
	.string "The smell of the breeze is different\n"
	.string "out here!$"

LakeApise_Trainer_Annabelle_Text_1:
	.string "Your odour is quite unique!$"

LakeApise_Trainer_Christian_Text_0:
	.string "I've been practising my moves by\n"
	.string "cutting this grass!$"

LakeApise_Trainer_Christian_Text_1:
	.string "Maybe I would have been better suited\n"
	.string "practising my battling skills!$"

LakeApise_Trainer_Dunga_Text_0:
	.string "I've heard there are some extremely\n"
	.string "rare pokémon here!$"

LakeApise_Trainer_Dunga_Text_1:
	.string "Your pokémon seem like quite rare\n"
	.string "specimens!$"

LakeApise_Trainer_Fingle_Text_0:
	.string "I ain't finding nothing in this here\n"
	.string "Lake, fancy a battle?$"

LakeApise_Trainer_Fingle_Text_1:
	.string "Fishing sure is a grind, got me wonderin'\n"
	.string "if I'm the one on the hook.$"
