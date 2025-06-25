ApplebyTown_MapScripts::
	.byte 0


Script_SkittyTrainer::
	lock
	faceplayer
	msgbox Text_SkittyTrainer, MSGBOX_DEFAULT
	release
	end

Text_SkittyTrainer:
	.string "Skitty loves running\n"
	.string "through the flowers!\p"
	.string "I could watch her all day!$"

	Script_FatMan::
	lock
	faceplayer
	msgbox Text_FatMan, MSGBOX_DEFAULT
	release
	end

Text_FatMan:
	.string "Everyday I fly here to drop my son off\n"
	.string "at the trainer school!\p"
	.string "I sure am proud of him!$"

Script_ApplebyTown::
	msgbox Text_ApplebyTown, MSGBOX_SIGN
	end

Text_ApplebyTown:
	.string "APPLEBY TOWN\n"
	.string "'A home for all!'$"

Script_TrainerSchool::
	msgbox Text_Trainerschool, MSGBOX_SIGN
	end

Text_Trainerschool:
	.string "Appleby Trainer School\n"
	.string "'Training Trainers Train Pokémon'$"

Script_PlayerHouse::
	msgbox Text_PlayerHouse, MSGBOX_SIGN
	end

Text_PlayerHouse:
	.string "{PLAYER}{KUN}'s house$"

Script_Lab::
	msgbox Text_Lab, MSGBOX_SIGN
	end

Text_Lab:
	.string "Professor Maple's lab$"

Script_ApplebyCave::
	msgbox Text_ApplebyCave, MSGBOX_SIGN
	end

Text_ApplebyCave:
	.string "APPLEBY CAVE$"