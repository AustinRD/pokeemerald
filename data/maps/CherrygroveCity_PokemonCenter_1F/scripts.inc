CherrygroveCity_PokemonCenter_1F_MapScripts::
	map_script 3, OldaleTown_PokemonCenter_1F_MapScript1_1FC011
	map_script 5, OldaleTown_PokemonCenter_1F_MapScript1_277C30
	.byte 0

OldaleTown_PokemonCenter_1F_MapScript1_1FC011: @ 81FC011
	setrespawn HEAL_LOCATION_CHERRYGROVE_CITY
	call OldaleTown_PokemonCenter_1F_EventScript_2718DE
	end

OldaleTown_PokemonCenter_1F_EventScript_1FC01A:: @ 81FC01A
	setvar VAR_0x800B, 1
	call OldaleTown_PokemonCenter_1F_EventScript_27191E
	waitmessage
	waitbuttonpress
	release
	end

OldaleTown_PokemonCenter_1F_EventScript_1FC028:: @ 81FC028
	msgbox OldaleTown_PokemonCenter_1F_Text_1FC059, MSGBOX_NPC
	end

OldaleTown_PokemonCenter_1F_EventScript_1FC031:: @ 81FC031
	msgbox OldaleTown_PokemonCenter_1F_Text_1FC0CD, MSGBOX_NPC
	end

OldaleTown_PokemonCenter_1F_EventScript_1FC03A:: @ 81FC03A
	lock
	faceplayer
	checkflag FLAG_SYS_POKEDEX_GET
	goto_eq OldaleTown_PokemonCenter_1F_EventScript_1FC04F
	msgbox OldaleTown_PokemonCenter_1F_Text_1FC148, MSGBOX_DEFAULT
	release
	end

OldaleTown_PokemonCenter_1F_EventScript_1FC04F:: @ 81FC04F
	msgbox OldaleTown_PokemonCenter_1F_Text_1FC1B9, MSGBOX_DEFAULT
	release
	end

OldaleTown_PokemonCenter_1F_Text_1FC059: @ 81FC059
	.string "That PC is free\n"
	.string "for any trainer\l"
	.string "to use.$"

OldaleTown_PokemonCenter_1F_Text_1FC0CD: @ 81FC0CD
	.string "POKéMON CENTERS are great!\p"
	.string "You can use their services as much\n"
	.string "as you like, and it's all for free.\l"
	.string "You never have to worry!$"

OldaleTown_PokemonCenter_1F_Text_1FC148: @ 81FC148
	.string "The POKéMON WIRELESS CLUB on\n"
	.string "the second floor was built recently.\p"
	.string "But they say they're still making\n"
	.string "adjustments.$"

OldaleTown_PokemonCenter_1F_Text_1FC1B9: @ 81FC1B9
	.string "The POKéMON WIRELESS CLUB on\n"
	.string "the second floor was built recently.\p"
	.string "I traded POKéMON right away.$"
