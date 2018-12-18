SproutTower_1F_EventObjects::
	object_event 1, EVENT_OBJ_GFX_ITEM_BALL, 0, 2, 14, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, MeteorFalls_1F_1R_EventScript_2911AB, FLAG_ITEM_METEOR_FALLS_1F_1R_TM_23
	object_event 2, EVENT_OBJ_GFX_ITEM_BALL, 0, 3, 14, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, MeteorFalls_1F_1R_EventScript_2911C5, FLAG_ITEM_METEOR_FALLS_1F_1R_MOON_STONE
	object_event 3, EVENT_OBJ_GFX_ITEM_BALL, 0, 4, 14, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, MeteorFalls_1F_1R_EventScript_2911B8, FLAG_ITEM_METEOR_FALLS_1F_1R_FULL_HEAL
	object_event 4, EVENT_OBJ_GFX_ITEM_BALL, 0, 5, 14, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, MeteorFalls_1F_1R_EventScript_2911D2, FLAG_ITEM_METEOR_FALLS_1F_1R_PP_UP
	object_event 5, EVENT_OBJ_GFX_ROCKET_GRUNT_M, 0, 4, 0, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, 0x0, FLAG_HIDE_METEOR_FALLS_TEAM_MAGMA
	object_event 6, EVENT_OBJ_GFX_ROCKET_GRUNT_M, 0, 3, 0, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 0, 0, 0x0, FLAG_HIDE_METEOR_FALLS_TEAM_MAGMA
	object_event 7, EVENT_OBJ_GFX_DAISY, 0, 6, 0, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, 0x0, FLAG_HIDE_METEOR_FALLS_TEAM_AQUA
	object_event 8, EVENT_OBJ_GFX_ROCKET_GRUNT_M, 0, 5, 0, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, 0x0, FLAG_HIDE_METEOR_FALLS_TEAM_AQUA
	object_event 9, EVENT_OBJ_GFX_ROCKET_GRUNT_M, 0, 7, 0, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, 0x0, FLAG_HIDE_METEOR_FALLS_TEAM_AQUA
	object_event 10, EVENT_OBJ_GFX_SCIENTIST, 0, 8, 0, 3, MOVEMENT_TYPE_FACE_UP_LEFT_AND_RIGHT, 0, 0, 0, 0, MeteorFalls_1F_1R_EventScript_22BF25, FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO

SproutTower_1F_MapWarps::
	warp_def 9, 15, 3, 8, MAP_VIOLET_CITY
	warp_def 10, 15, 3, 8, MAP_VIOLET_CITY
	warp_def 6, 4, 3, 0, MAP_SPROUT_TOWER_2F
	warp_def 17, 3, 3, 1, MAP_SPROUT_TOWER_2F
	warp_def 2, 6, 3, 2, MAP_SPROUT_TOWER_2F

SproutTower_1F_MapCoordEvents::
	coord_event 2, 0, 4, VAR_0x40BF, 0, MeteorFalls_1F_1R_EventScript_22BD5F

SproutTower_1F_MapBGEvents::
	bg_event 3, 11, 0, BG_EVENT_PLAYER_FACING_ANY, 0x0

SproutTower_1F_MapEvents::
	map_events SproutTower_1F_EventObjects, SproutTower_1F_MapWarps, SproutTower_1F_MapCoordEvents, SproutTower_1F_MapBGEvents