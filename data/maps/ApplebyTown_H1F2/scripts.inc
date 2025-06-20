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