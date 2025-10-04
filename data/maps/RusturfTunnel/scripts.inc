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
	trainerbattle_single TRAINER_LAKEAPISE_ANNABELLE, LakeApise_Trainer_Annabelle_Text_0, LakeApise_Trainer_Annabelle_Text_0
	msgbox LakeApise_Trainer_Annabelle_Text_0, MSGBOX_AUTOCLOSE
	end


LakeApise_Trainer_Christian::
	trainerbattle_single TRAINER_LAKEAPISE_CHRISTIAN, LakeApise_Trainer_Christian_Text_0, LakeApise_Trainer_Christian_Text_1
	msgbox LakeApise_Trainer_Christian_Text_1, MSGBOX_AUTOCLOSE
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
	.string "$"

LakeApise_Trainer_Christian_Text_0:
	.string "I've been practising my moves by\n"
	.string "cutting this grass!$"

LakeApise_Trainer_Christian_Text_1:
	.string "Maybe I would have been better suited\n"
	.string "practising my battling skills!$"
