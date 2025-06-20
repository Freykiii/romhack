ApplebyTown_H1F2_MapScripts::
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
	.string "Everyday I fly here\n"
	.string "to drop my son off at the trainer school!\p"
	.string "I sure am proud of him!$"