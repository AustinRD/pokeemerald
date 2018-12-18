Route31_EventObjects::
	object_event 1, EVENT_OBJ_GFX_FAT_MAN, 2, 17, 7, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, Route103_EventScript_1EC5E2, 0
	object_event 2, EVENT_OBJ_GFX_YOUNGSTER, 2, 9, 5, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, FALSE, 3, Route103_EventScript_1EC5F4, 0
	object_event 3, EVENT_OBJ_GFX_BUG_CATCHER, 4, 21, 13, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 1, 5, Route103_EventScript_1EC66E, 0
	object_event 4, EVENT_OBJ_GFX_COOLTRAINER_M, 2, 33, 8, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, FALSE, 0, Route103_EventScript_1EC60B, 0
	object_event 5, EVENT_OBJ_GFX_BERRY_TREE, 0, 16, 7, 3, MOVEMENT_TYPE_NONE, 0, 0, FALSE, 0, Route103_EventScript_1EC6D1, 0
	object_event 6, EVENT_OBJ_GFX_ITEM_BALL, 1, 29, 5, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, 0, 0, Route103_EventScript_290CE5, FLAG_ITEM_ROUTE_103_GUARD_SPEC
	object_event 7, EVENT_OBJ_GFX_ITEM_BALL, 1, 19, 15, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, 0, 0, Route103_EventScript_290CF2, FLAG_ITEM_ROUTE_103_PP_UP

Route31_MapWarps::
	warp_def 34, 5, 0, 2, MAP_BATTLE_FRONTIER_OUTSIDE_WEST
	warp_def 4, 6, 3, 0, MAP_ROUTE31_GATE
	warp_def 4, 7, 3, 1, MAP_ROUTE31_GATE

Route31_MapBGEvents::
	bg_event 7, 5, 0, BG_EVENT_PLAYER_FACING_ANY, Route103_EventScript_1EC5EB
	bg_event 31, 5, 3, BG_EVENT_PLAYER_FACING_ANY, NULL

Route31_MapEvents::
	map_events Route31_EventObjects, Route31_MapWarps, 0x0, Route31_MapBGEvents