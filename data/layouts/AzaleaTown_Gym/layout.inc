AzaleaTown_Gym_MapBorder::
	.incbin "data/layouts/AzaleaTown_Gym/border.bin"

AzaleaTown_Gym_MapBlockdata::
	.incbin "data/layouts/AzaleaTown_Gym/map.bin"

	.align 2
AzaleaTown_Gym_Layout::
	.4byte 10
	.4byte 16
	.4byte AzaleaTown_Gym_MapBorder
	.4byte AzaleaTown_Gym_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop
