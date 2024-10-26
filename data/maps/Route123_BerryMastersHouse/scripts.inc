Route123_BerryMastersHouse_MapScripts::
	.byte 0


BerryMasterHouse_EventScipt_Pokeball::
# 6 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	lockall
# 8 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_set FLAG_UNUSED_0x021, BerryMasterHouse_EventScipt_Pokeball_2
BerryMasterHouse_EventScipt_Pokeball_1:
# 27 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	waitmessage
# 28 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	releaseall
	end

BerryMasterHouse_EventScipt_Pokeball_2:
# 10 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	showmonpic SPECIES_EEVEE, 4, 4
# 11 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	playmoncry SPECIES_EEVEE, CRY_MODE_ENCOUNTER
BerryMasterHouse_EventScipt_Pokeball_6:
# 13 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox BerryMasterHouse_EventScipt_Pokeball_Text_0, MSGBOX_YESNO
# 14 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne BerryMasterHouse_EventScipt_Pokeball_6
# 16 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BerryMasterHouse_EventScipt_Pokeball_8
	goto BerryMasterHouse_EventScipt_Pokeball_1

BerryMasterHouse_EventScipt_Pokeball_8:
# 18 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	givemon SPECIES_EEVEE, 5, ITEM_NONE
# 19 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 20 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox BerryMasterHouse_EventScipt_Pokeball_Text_1
# 21 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	removeobject 3
# 22 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 23 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	call Nicknamepartymon
	goto BerryMasterHouse_EventScipt_Pokeball_1


Nicknamepartymon::
# 34 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	hidemonpic
# 35 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Nicknamepartymon_Text_0, MSGBOX_YESNO
# 37 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Nicknamepartymon_1
	return

Nicknamepartymon_1:
# 38 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 39 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


BerryMasterHouse_EventScipt_Mom2::
# 44 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	lockall
# 46 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, BerryMasterHouse_EventScipt_Mom2_2
# 51 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox BerryMasterHouse_Mom2Relieved
BerryMasterHouse_EventScipt_Mom2_1:
# 54 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	waitmessage
# 55 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	releaseall
	end

BerryMasterHouse_EventScipt_Mom2_2:
# 47 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	faceplayer
# 48 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox BerryMasterHouse_Mom2Worried
	goto BerryMasterHouse_EventScipt_Mom2_1


BerryMasterHouse_EventScipt_Morning::
# 64 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x022, BerryMasterHouse_EventScipt_Morning_2
BerryMasterHouse_EventScipt_Morning_1:
# 73 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	waitmessage
# 74 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	releaseall
	end

BerryMasterHouse_EventScipt_Morning_2:
# 65 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	applymovement 1, LookLeft
# 66 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox BerryMasterHouse_EventScipt_Mom1_So
# 69 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setflag FLAG_UNUSED_0x022
	goto BerryMasterHouse_EventScipt_Morning_1


BerryMastersHouse_EventScript_Mom1::
# 85 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	lockall
# 86 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x021, BerryMastersHouse_EventScript_Mom1_2
# 110 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, BerryMastersHouse_EventScript_Mom1_3
BerryMastersHouse_EventScript_Mom1_1:
# 114 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	waitmessage
# 115 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	releaseall
	return

BerryMastersHouse_EventScript_Mom1_2:
# 88 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	applymovement 1, MomLook
# 89 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LookUp
# 90 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox BerryMasterHouse_EventScipt_Mom1_No_Occasion
# 92 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	applymovement 2, MaudMove
# 93 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	waitmovement 0
# 94 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox BerryMasterHouse_EventScript_Mom2_Youre_Getting_To_That_Age
# 95 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox BerryMasterHouse_EventScipt_Player_NotBuyingIt
# 96 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	applymovement 2, LookLeft
# 97 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox BerryMasterHouse_EventScript_Mom2_Compositor
# 98 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	applymovement 1, LookRight
# 99 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox BerryMasterHouse_EventScipt_Mom1_Happy
# 100 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox BerryMasterHouse_EventScipt_Player_Oh
# 102 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	applymovement 2, MomLook
# 103 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox BerryMasterHouse_EventScipt_Mom2_Battling
# 104 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	applymovement 1, MomLook
# 105 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox BerryMasterHouse_EventScipt_Mom1_Breeders
# 107 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setflag FLAG_UNUSED_0x021
	goto BerryMastersHouse_EventScript_Mom1_1

BerryMastersHouse_EventScript_Mom1_3:
# 111 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	faceplayer
# 112 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox BerryMasterHouse_EventScipt_Mom1_pokeball
	goto BerryMastersHouse_EventScript_Mom1_1


BerryMastersHouse_EventScript_Mom1_wait::
# 119 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	applymovement 1, MomLook
# 120 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	lockall
# 121 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, BerryMastersHouse_EventScript_Mom1_wait_2
BerryMastersHouse_EventScript_Mom1_wait_1:
# 127 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	waitmessage
# 128 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	releaseall
	return

BerryMastersHouse_EventScript_Mom1_wait_2:
# 122 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox BerryMasterHouse_Mom1Worried
# 123 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	applymovement 1, MomLook
# 124 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DontGo
# 125 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	waitmovement 0
	goto BerryMastersHouse_EventScript_Mom1_wait_1


# 185 "data/maps/Route123_BerryMastersHouse/scripts.pory"
DontGo:
# 186 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	walk_up
	step_end

# 188 "data/maps/Route123_BerryMastersHouse/scripts.pory"
MaudMove:
# 189 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	walk_left
# 189 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	walk_left
# 190 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	face_down
	step_end

# 194 "data/maps/Route123_BerryMastersHouse/scripts.pory"
LookRight:
# 195 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	face_right
	step_end

# 198 "data/maps/Route123_BerryMastersHouse/scripts.pory"
MomLook:
# 199 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	face_down
	step_end

# 203 "data/maps/Route123_BerryMastersHouse/scripts.pory"
LookLeft:
# 204 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	face_left
	step_end

# 207 "data/maps/Route123_BerryMastersHouse/scripts.pory"
LookUp:
# 208 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	face_up
	step_end

BerryMasterHouse_EventScipt_Pokeball_Text_0:
# 13 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "Let EEVEE join your party?$"

BerryMasterHouse_EventScipt_Pokeball_Text_1:
# 20 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "EEVEE joins your party!$"

Nicknamepartymon_Text_0:
# 35 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "would you like to nickname your EEVEE?$"

BerryMasterHouse_EventScipt_Mom1_So::
# 133 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "Mother: Thank the skies you're up,\n"
	.string "Geneova!\l"
	.string "Breakfast is ready!\l"
	.string "Come, Come! Have a seat.$"

BerryMasterHouse_EventScipt_Player_NotBuyingIt::
# 136 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "...?$"

BerryMasterHouse_EventScipt_Mom1_No_Occasion::
# 139 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "Mother: Whaa--t? Occassion? Theres no\n"
	.string "occasion. We just wanted to-- Have a\l"
	.string "little chat with you, right hun?$"

BerryMasterHouse_EventScipt_Mom2_No_Occasion::
# 143 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "Mom: Er-- yeah... Somethin' like that.$"

BerryMasterHouse_EventScript_Mom2_Youre_Getting_To_That_Age::
# 147 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "Mom: So...\n"
	.string "You're getting to that age where you're\l"
	.string "curious about POKEMON training.\l"
	.string "Now that's all good, sport, yer not in\l"
	.string "any trouble...\l"
	.string "We just want our little blossom to\l"
	.string "adventure out there safely.$"

BerryMasterHouse_EventScipt_Player_Oh::
# 152 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "!!!!$"

BerryMasterHouse_EventScript_Mom2_Compositor::
# 156 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "Mom: ...What's that sweetpea?\n"
	.string "A Pokemon compositor?$"

BerryMasterHouse_EventScipt_Mom1_Happy::
# 160 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "Mother: Oh? Oh!\n"
	.string "That's wonderful, sweetie! You hear\l"
	.string "that, Maude?\l"
	.string "Our little sprout's not gonna get into\l"
	.string "any battles!$"

BerryMasterHouse_EventScipt_Player_Well::
# 164 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string ".... ... .........$"

BerryMasterHouse_EventScipt_Mom2_Battling::
# 168 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "Mom: Oh. Modern Poke-contests use\n"
	.string "battling as another form of display,\l"
	.string "huh...?\l"
	.string "Figures...\l"
	.string "$"

BerryMasterHouse_EventScipt_Mom1_Breeders::
# 172 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "Mother: Oh, don't be like that... Least\n"
	.string "they can use our little surprise for\l"
	.string "them now.\l"
	.string "Got these from our old-neighbours!\l"
	.string "Adorable, but I hear packs a punch!$"

BerryMasterHouse_EventScipt_Mom1::
# 177 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "You stay safe now, alright? Good luck,\n"
	.string "Geneova!$"

BerryMasterHouse_EventScipt_Mom1_pokeball::
# 181 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "Arent't you gonna pick up the pokeball?$"

BerryMasterHouse_Mom1Worried::
# 212 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "Where are you going? get back here!\n$"

BerryMasterHouse_Mom2Worried::
# 219 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "Ay! Go back there!\p"
	.string "Listen to your mother, now.\n$"

BerryMasterHouse_Mom2Relieved::
# 223 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "Oh your mother is really a life saver\p"
	.string " dont ya know...\p"
	.string "Stay safe out there, Ginnie.\p"
	.string " I mean it!\p"
	.string "The second you have problems\p"
	.string "you run right back to this house!!\n$"
