Route101_MapScripts::
	.byte 0


FerreGrasslands_Trainer_Michelle::
	trainerbattle_single TRAINER_FERREGRASSLANDS_MICHELLE, FerreGrasslands_Trainer_Michelle_Text_0, FerreGrasslands_Trainer_Michelle_Text_1
	msgbox FerreGrasslands_Trainer_Michelle_Text_1, MSGBOX_AUTOCLOSE
	end


FerreGrasslands_Trainer_Mikey::
	trainerbattle_single TRAINER_FERREGRASSLANDS_MIKEY, FerreGrasslands_Trainer_Mikey_Text_0, FerreGrasslands_Trainer_Mikey_Text_1
	msgbox FerreGrasslands_Trainer_Mikey_Text_2, MSGBOX_AUTOCLOSE
	end


FerreGrasslands_Trainer_Nick::
	trainerbattle_single TRAINER_FERREGRASSLANDS_NICK, FerreGrasslands_Trainer_Nick_Text_0, FerreGrasslands_Trainer_Nick_Text_1
	msgbox FerreGrasslands_Trainer_Nick_Text_2, MSGBOX_AUTOCLOSE
	end


FerreGrasslands_Item_Antidote::
	finditem ITEM_ANTIDOTE
	end


FerreGrasslands_Item_Potion::
	finditem ITEM_POTION
	end


FerreGrasslands_Trainer_Michelle_Text_0:
	.string "Do you have strong Pokémon?$"

FerreGrasslands_Trainer_Michelle_Text_1:
	.string "My Pokémon will be as strong as yours\n"
	.string "soon!$"

FerreGrasslands_Trainer_Mikey_Text_0:
	.string "Are you going to Lake Apise?$"

FerreGrasslands_Trainer_Mikey_Text_1:
	.string "I never stood a chance!$"

FerreGrasslands_Trainer_Mikey_Text_2:
	.string "I've heard there's a rare Pokémon at\n"
	.string "Lake Apise!$"

FerreGrasslands_Trainer_Nick_Text_0:
	.string "What's your rarest Pokémon?$"

FerreGrasslands_Trainer_Nick_Text_1:
	.string "There's so many Pokémon to see!$"

FerreGrasslands_Trainer_Nick_Text_2:
	.string "There's so many rare Pokémon to see!$"
