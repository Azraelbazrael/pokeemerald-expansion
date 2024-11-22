Route123_BerryMaster_upstairs_MapScripts::
	.byte 0


ROUTE_123_BERRYMASTERSHOUSE_STUPID_TOGEPI_DOLL::
# 6 "data/maps/Route123_BerryMaster_upstairs/scripts.pory"
	lockall
# 7 "data/maps/Route123_BerryMaster_upstairs/scripts.pory"
	msgbox ROUTE_123_BERRYMASTERSHOUSE_STUPID_TOGEPI_DOLL_Text_0
# 8 "data/maps/Route123_BerryMaster_upstairs/scripts.pory"
	waitmessage
# 9 "data/maps/Route123_BerryMaster_upstairs/scripts.pory"
	releaseall
	return


Contest_Test::
# 18 "data/maps/Route123_BerryMaster_upstairs/scripts.pory"
	lockall
# 20 "data/maps/Route123_BerryMaster_upstairs/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, Contest_Test_2
Contest_Test_1:
	end

Contest_Test_2:
# 21 "data/maps/Route123_BerryMaster_upstairs/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_SpeakToContestReceptionist
# 22 "data/maps/Route123_BerryMaster_upstairs/scripts.pory"
	special SetContestTrainerGfxIds
# 24 "data/maps/Route123_BerryMaster_upstairs/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_SetContestType
# 25 "data/maps/Route123_BerryMaster_upstairs/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_WarpToContestHall
# 26 "data/maps/Route123_BerryMaster_upstairs/scripts.pory"
	waitstate
	goto Contest_Test_1


ROUTE_123_BERRYMASTERSHOUSE_STUPID_TOGEPI_DOLL_Text_0:
# 7 "data/maps/Route123_BerryMaster_upstairs/scripts.pory"
	.string "She sits quietly on your desk. It's togepi!$"
