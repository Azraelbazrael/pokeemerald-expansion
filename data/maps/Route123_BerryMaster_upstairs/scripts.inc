Testing_Testing::
# 2 "data/maps/Route123_BerryMaster_upstairs/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, Testing_Testing_1
	return

Testing_Testing_1:
# 3 "data/maps/Route123_BerryMaster_upstairs/scripts.pory"
	callnative StartNewPokeballCaseUI
# 4 "data/maps/Route123_BerryMaster_upstairs/scripts.pory"
	waitstate
	return

