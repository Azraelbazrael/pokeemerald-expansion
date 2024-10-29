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
	givemon SPECIES_EEVEE, 5, ITEM_NONE, move1 = MOVE_CHARM, move2 = MOVE_CURSE, move3 = MOVE_TACKLE, move4 = MOVE_WISH
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


BerryMastersHouse_EventScript_Starter::
# 85 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	lockall
# 86 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x021, BerryMastersHouse_EventScript_Starter_2
BerryMastersHouse_EventScript_Starter_1:
# 113 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	waitmessage
# 114 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	releaseall
	return

BerryMastersHouse_EventScript_Starter_2:
# 88 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	applymovement 1, MomLook
# 90 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LookUp
# 91 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox BerryMasterHouse_EventScipt_Player_NotBuyingIt
# 92 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox BerryMasterHouse_EventScipt_Mom1_No_Occasion
# 94 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	applymovement 2, MaudMove
# 95 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	waitmovement 0
# 96 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox BerryMasterHouse_EventScript_Mom2_Youre_Getting_To_That_Age
# 97 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox BerryMasterHouse_EventScipt_Player_NotBuyingIt
# 98 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	applymovement 2, LookLeft
# 99 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox BerryMasterHouse_EventScript_Mom2_Compositor
# 100 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	applymovement 1, LookRight
# 101 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox BerryMasterHouse_EventScipt_Mom1_Happy
# 102 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox BerryMasterHouse_EventScipt_Player_Oh
# 104 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	applymovement 2, MomLook
# 105 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox BerryMasterHouse_EventScipt_Mom2_Battling
# 106 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	applymovement 1, MomLook
# 107 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox BerryMasterHouse_EventScipt_Mom1_Breeders
# 109 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setflag FLAG_UNUSED_0x021
	goto BerryMastersHouse_EventScript_Starter_1


BerryMasterHouse_EventScipt_Mom1::
# 118 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	lockall
# 119 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, BerryMasterHouse_EventScipt_Mom1_4
BerryMasterHouse_EventScipt_Mom1_3:
# 124 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, BerryMasterHouse_EventScipt_Mom1_7
BerryMasterHouse_EventScipt_Mom1_1:
# 129 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	waitmessage
# 130 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	releaseall
	end

BerryMasterHouse_EventScipt_Mom1_2:
# 120 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	faceplayer
# 121 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox BerryMasterHouse_EventScipt_Mom1_pokeball
	goto BerryMasterHouse_EventScipt_Mom1_1

BerryMasterHouse_EventScipt_Mom1_4:
# 119 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_set FLAG_UNUSED_0x021, BerryMasterHouse_EventScipt_Mom1_2
	goto BerryMasterHouse_EventScipt_Mom1_3

BerryMasterHouse_EventScipt_Mom1_7:
# 125 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	faceplayer
# 126 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox BerryMasterHouse_EventScipt_Mom1_Stay_Safe
	goto BerryMasterHouse_EventScipt_Mom1_1


BerryMastersHouse_EventScript_Mom1_wait::
# 135 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	applymovement 1, MomLook
# 136 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	lockall
# 137 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, BerryMastersHouse_EventScript_Mom1_wait_2
# 144 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	applymovement 1, MomLook
# 145 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox BerryMastersHouse_EventScript_Mom1_wait_Text_0
# 146 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	giveitem ITEM_POKEBLOCK_CASE, 1
# 147 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 148 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox BerryMastersHouse_EventScript_Mom1_wait_Text_1
# 149 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setflag FLAG_RECEIVED_POKEBLOCK_CASE
BerryMastersHouse_EventScript_Mom1_wait_1:
# 152 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	waitmessage
# 153 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	releaseall
	return

BerryMastersHouse_EventScript_Mom1_wait_2:
# 138 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox BerryMasterHouse_Mom1Worried
# 139 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	applymovement 1, MomLook
# 140 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DontGo
# 141 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	waitmovement 0
	goto BerryMastersHouse_EventScript_Mom1_wait_1


# 210 "data/maps/Route123_BerryMastersHouse/scripts.pory"
DontGo:
# 211 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	walk_up
	step_end

# 213 "data/maps/Route123_BerryMastersHouse/scripts.pory"
MaudMove:
# 214 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	walk_left
# 214 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	walk_left
# 215 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	face_down
	step_end

# 220 "data/maps/Route123_BerryMastersHouse/scripts.pory"
LookRight:
# 221 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	face_right
	step_end

# 224 "data/maps/Route123_BerryMastersHouse/scripts.pory"
MomLook:
# 225 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	face_down
	step_end

# 229 "data/maps/Route123_BerryMastersHouse/scripts.pory"
LookLeft:
# 230 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	face_left
	step_end

# 233 "data/maps/Route123_BerryMastersHouse/scripts.pory"
LookUp:
# 234 "data/maps/Route123_BerryMastersHouse/scripts.pory"
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

BerryMastersHouse_EventScript_Mom1_wait_Text_0:
# 145 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "Wait! Before you go...$"

BerryMastersHouse_EventScript_Mom1_wait_Text_1:
# 148 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "GENEOVA recieved {POKEBLOCK} CASE!$"

BerryMasterHouse_EventScipt_Mom1_So::
# 158 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "Mother: Thank the skies you're up,\n"
	.string "Geneova!\l"
	.string "Breakfast is ready!\l"
	.string "Come, Come! Have a seat.$"

BerryMasterHouse_EventScipt_Player_NotBuyingIt::
# 161 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "...?$"

BerryMasterHouse_EventScipt_Mom1_No_Occasion::
# 164 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "Mother: Whaa--t? Occassion?\n"
	.string "Theres no occasion. We just wanted\l"
	.string "to--\l"
	.string "Have a little chat with you, right hun?$"

BerryMasterHouse_EventScipt_Mom2_No_Occasion::
# 168 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "Mom: Er-- yeah...\n"
	.string "Somethin' like that.$"

BerryMasterHouse_EventScript_Mom2_Youre_Getting_To_That_Age::
# 172 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "Mom: So...\n"
	.string "You're getting to that age where you're\l"
	.string "curious about POKEMON training.\l"
	.string "Now that's all good, sport, yer not in\l"
	.string "any trouble...\l"
	.string "We just want our little blossom to\l"
	.string "adventure out there safely.$"

BerryMasterHouse_EventScipt_Player_Oh::
# 177 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "!!!!$"

BerryMasterHouse_EventScript_Mom2_Compositor::
# 181 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "Mom: ...What's that sweetpea?\n"
	.string "A Pokemon compositor?$"

BerryMasterHouse_EventScipt_Mom1_Happy::
# 185 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "Mother: Oh? Oh!\n"
	.string "That's wonderful, sweetie! You hear\l"
	.string "that, Maude?\l"
	.string "Our little sprout's not gonna get into\l"
	.string "any battles!$"

BerryMasterHouse_EventScipt_Player_Well::
# 189 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string ".... ... .........$"

BerryMasterHouse_EventScipt_Mom2_Battling::
# 193 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "Mom: Oh. Modern Poke-contests use\n"
	.string "battling as another form of display,\l"
	.string "huh...?\l"
	.string "Figures...\l"
	.string "$"

BerryMasterHouse_EventScipt_Mom1_Breeders::
# 197 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "Mother: Oh, don't be like that... Least\n"
	.string "they can use our little surprise for\l"
	.string "them now.\l"
	.string "Got these from our old-neighbours!\l"
	.string "Adorable, but I hear packs a punch!$"

BerryMasterHouse_EventScipt_Mom1_Stay_Safe::
# 202 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "You stay safe now, alright? Good luck,\n"
	.string "Geneova!$"

BerryMasterHouse_EventScipt_Mom1_pokeball::
# 206 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "Arent't you gonna pick up the pokeball?$"

BerryMasterHouse_Mom1Worried::
# 238 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "Where are you going? get back here!\n$"

BerryMasterHouse_Mom2Worried::
# 245 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "Ay! Go back there!\p"
	.string "Listen to your mother, now.\n$"

BerryMasterHouse_Mom2Relieved::
# 249 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "Oh your mother is really a life saver\p"
	.string " dont ya know...\p"
	.string "Stay safe out there, Ginnie.\p"
	.string " I mean it!\p"
	.string "The second you have problems\p"
	.string "you run right back to this house!!\n$"
