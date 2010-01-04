#ifndef OPCODES_H
#define OPCODES_H
enum Opcodes
{
    MSG_NULL_ACTION                                 = 0x000,
    CMSG_BOOTME                                     = 0x001,
    CMSG_DBLOOKUP                                   = 0x002,
    SMSG_DBLOOKUP                                   = 0x003,
    CMSG_QUERY_OBJECT_POSITION                      = 0x004,
    SMSG_QUERY_OBJECT_POSITION                      = 0x005,
    CMSG_QUERY_OBJECT_ROTATION                      = 0x006,
    SMSG_QUERY_OBJECT_ROTATION                      = 0x007,
    CMSG_WORLD_TELEPORT                             = 0x008,
    CMSG_TELEPORT_TO_UNIT                           = 0x009,
    CMSG_ZONE_MAP                                   = 0x00A,
    SMSG_ZONE_MAP                                   = 0x00B,
    CMSG_DEBUG_CHANGECELLZONE                       = 0x00C,
    CMSG_EMBLAZON_TABARD_OBSOLETE                   = 0x00D,
    CMSG_UNEMBLAZON_TABARD_OBSOLETE                 = 0x00E,
    CMSG_RECHARGE                                   = 0x00F,
    CMSG_LEARN_SPELL                                = 0x010,
    CMSG_CREATEMONSTER                              = 0x011,
    CMSG_DESTROYMONSTER                             = 0x012,
    CMSG_CREATEITEM                                 = 0x013,
    CMSG_CREATEGAMEOBJECT                           = 0x014,
    SMSG_CHECK_FOR_BOTS                             = 0x015,
    CMSG_MAKEMONSTERATTACKGUID                      = 0x016,
    CMSG_BOT_DETECTED2                              = 0x017,
    CMSG_FORCEACTION                                = 0x018,
    CMSG_FORCEACTIONONOTHER                         = 0x019,
    CMSG_FORCEACTIONSHOW                            = 0x01A,
    SMSG_FORCEACTIONSHOW                            = 0x01B,
    CMSG_PETGODMODE                                 = 0x01C,
    SMSG_PETGODMODE                                 = 0x01D,
    SMSG_DEBUGINFOSPELLMISS_OBSOLETE                = 0x01E,
    CMSG_WEATHER_SPEED_CHEAT                        = 0x01F,
    CMSG_UNDRESSPLAYER                              = 0x020,
    CMSG_BEASTMASTER                                = 0x021,
    CMSG_GODMODE                                    = 0x022,
    SMSG_GODMODE                                    = 0x023,
    CMSG_CHEAT_SETMONEY                             = 0x024,
    CMSG_LEVEL_CHEAT                                = 0x025,
    CMSG_PET_LEVEL_CHEAT                            = 0x026,
    CMSG_SET_WORLDSTATE                             = 0x027,
    CMSG_COOLDOWN_CHEAT                             = 0x028,
    CMSG_USE_SKILL_CHEAT                            = 0x029,
    CMSG_FLAG_QUEST                                 = 0x02A,
    CMSG_FLAG_QUEST_FINISH                          = 0x02B,
    CMSG_CLEAR_QUEST                                = 0x02C,
    CMSG_SEND_EVENT                                 = 0x02D,
    CMSG_DEBUG_AISTATE                              = 0x02E,
    SMSG_DEBUG_AISTATE                              = 0x02F,
    CMSG_DISABLE_PVP_CHEAT                          = 0x030,
    CMSG_ADVANCE_SPAWN_TIME                         = 0x031,
    CMSG_PVP_PORT_OBSOLETE                          = 0x032,
    CMSG_AUTH_SRP6_BEGIN                            = 0x033,
    CMSG_AUTH_SRP6_PROOF                            = 0x034,
    CMSG_AUTH_SRP6_RECODE                           = 0x035,
    CMSG_CHAR_CREATE                                = 0x036,
    CMSG_CHAR_ENUM                                  = 0x037,
    CMSG_CHAR_DELETE                                = 0x038,
    SMSG_AUTH_SRP6_RESPONSE                         = 0x039,
    SMSG_CHAR_CREATE                                = 0x03A,
    SMSG_CHAR_ENUM                                  = 0x03B,
    SMSG_CHAR_DELETE                                = 0x03C,
    CMSG_PLAYER_LOGIN                               = 0x03D,
    SMSG_NEW_WORLD                                  = 0x03E,
    SMSG_TRANSFER_PENDING                           = 0x03F,
    SMSG_TRANSFER_ABORTED                           = 0x040,
    SMSG_CHARACTER_LOGIN_FAILED                     = 0x041,
    SMSG_LOGIN_SETTIMESPEED                         = 0x042,
    SMSG_GAMETIME_UPDATE                            = 0x043,
    CMSG_GAMETIME_SET                               = 0x044,
    SMSG_GAMETIME_SET                               = 0x045,
    CMSG_GAMESPEED_SET                              = 0x046,
    SMSG_GAMESPEED_SET                              = 0x047,
    CMSG_SERVERTIME                                 = 0x048,
    SMSG_SERVERTIME                                 = 0x049,
    CMSG_PLAYER_LOGOUT                              = 0x04A,
    CMSG_LOGOUT_REQUEST                             = 0x04B,
    SMSG_LOGOUT_RESPONSE                            = 0x04C,
    SMSG_LOGOUT_COMPLETE                            = 0x04D,
    CMSG_LOGOUT_CANCEL                              = 0x04E,
    SMSG_LOGOUT_CANCEL_ACK                          = 0x04F,
    CMSG_NAME_QUERY                                 = 0x050,
    SMSG_NAME_QUERY_RESPONSE                        = 0x051,
    CMSG_PET_NAME_QUERY                             = 0x052,
    SMSG_PET_NAME_QUERY_RESPONSE                    = 0x053,
    CMSG_GUILD_QUERY                                = 0x054,
    SMSG_GUILD_QUERY_RESPONSE                       = 0x055,
    CMSG_ITEM_QUERY_SINGLE                          = 0x056,
    CMSG_ITEM_QUERY_MULTIPLE                        = 0x057,
    SMSG_ITEM_QUERY_SINGLE_RESPONSE                 = 0x058,
    SMSG_ITEM_QUERY_MULTIPLE_RESPONSE               = 0x059,
    CMSG_PAGE_TEXT_QUERY                            = 0x05A,
    SMSG_PAGE_TEXT_QUERY_RESPONSE                   = 0x05B,
    CMSG_QUEST_QUERY                                = 0x05C,
    SMSG_QUEST_QUERY_RESPONSE                       = 0x05D,
    CMSG_GAMEOBJECT_QUERY                           = 0x05E,
    SMSG_GAMEOBJECT_QUERY_RESPONSE                  = 0x05F,
    CMSG_CREATURE_QUERY                             = 0x060,
    SMSG_CREATURE_QUERY_RESPONSE                    = 0x061,
    CMSG_WHO                                        = 0x062,
    SMSG_WHO                                        = 0x063,
    CMSG_WHOIS                                      = 0x064,
    SMSG_WHOIS                                      = 0x065,
    CMSG_CONTACT_LIST                               = 0x066,
    SMSG_CONTACT_LIST                               = 0x067,
    SMSG_FRIEND_STATUS                              = 0x068,
    CMSG_ADD_FRIEND                                 = 0x069,
    CMSG_DEL_FRIEND                                 = 0x06A,
    CMSG_SET_CONTACT_NOTES                          = 0x06B,
    CMSG_ADD_IGNORE                                 = 0x06C,
    CMSG_DEL_IGNORE                                 = 0x06D,
    CMSG_GROUP_INVITE                               = 0x06E,
    SMSG_GROUP_INVITE                               = 0x06F,
    CMSG_GROUP_CANCEL                               = 0x070,
    SMSG_GROUP_CANCEL                               = 0x071,
    CMSG_GROUP_ACCEPT                               = 0x072,
    CMSG_GROUP_DECLINE                              = 0x073,
    SMSG_GROUP_DECLINE                              = 0x074,
    CMSG_GROUP_UNINVITE                             = 0x075,
    CMSG_GROUP_UNINVITE_GUID                        = 0x076,
    SMSG_GROUP_UNINVITE                             = 0x077,
    CMSG_GROUP_SET_LEADER                           = 0x078,
    SMSG_GROUP_SET_LEADER                           = 0x079,
    CMSG_LOOT_METHOD                                = 0x07A,
    CMSG_GROUP_DISBAND                              = 0x07B,
    SMSG_GROUP_DESTROYED                            = 0x07C,
    SMSG_GROUP_LIST                                 = 0x07D,
    SMSG_PARTY_MEMBER_STATS                         = 0x07E,
    SMSG_PARTY_COMMAND_RESULT                       = 0x07F,
    UMSG_UPDATE_GROUP_MEMBERS                       = 0x080,
    CMSG_GUILD_CREATE                               = 0x081,
    CMSG_GUILD_INVITE                               = 0x082,
    SMSG_GUILD_INVITE                               = 0x083,
    CMSG_GUILD_ACCEPT                               = 0x084,
    CMSG_GUILD_DECLINE                              = 0x085,
    SMSG_GUILD_DECLINE                              = 0x086,
    CMSG_GUILD_INFO                                 = 0x087,
    SMSG_GUILD_INFO                                 = 0x088,
    CMSG_GUILD_ROSTER                               = 0x089,
    SMSG_GUILD_ROSTER                               = 0x08A,
    CMSG_GUILD_PROMOTE                              = 0x08B,
    CMSG_GUILD_DEMOTE                               = 0x08C,
    CMSG_GUILD_LEAVE                                = 0x08D,
    CMSG_GUILD_REMOVE                               = 0x08E,
    CMSG_GUILD_DISBAND                              = 0x08F,
    CMSG_GUILD_LEADER                               = 0x090,
    CMSG_GUILD_MOTD                                 = 0x091,
    SMSG_GUILD_EVENT                                = 0x092,
    SMSG_GUILD_COMMAND_RESULT                       = 0x093,
    UMSG_UPDATE_GUILD                               = 0x094,
    CMSG_MESSAGECHAT                                = 0x095,
    SMSG_MESSAGECHAT                                = 0x096,
    CMSG_JOIN_CHANNEL                               = 0x097,
    CMSG_LEAVE_CHANNEL                              = 0x098,
    SMSG_CHANNEL_NOTIFY                             = 0x099,
    CMSG_CHANNEL_LIST                               = 0x09A,
    SMSG_CHANNEL_LIST                               = 0x09B,
    CMSG_CHANNEL_PASSWORD                           = 0x09C,
    CMSG_CHANNEL_SET_OWNER                          = 0x09D,
    CMSG_CHANNEL_OWNER                              = 0x09E,
    CMSG_CHANNEL_MODERATOR                          = 0x09F,
    CMSG_CHANNEL_UNMODERATOR                        = 0x0A0,
    CMSG_CHANNEL_MUTE                               = 0x0A1,
    CMSG_CHANNEL_UNMUTE                             = 0x0A2,
    CMSG_CHANNEL_INVITE                             = 0x0A3,
    CMSG_CHANNEL_KICK                               = 0x0A4,
    CMSG_CHANNEL_BAN                                = 0x0A5,
    CMSG_CHANNEL_UNBAN                              = 0x0A6,
    CMSG_CHANNEL_ANNOUNCEMENTS                      = 0x0A7,
    CMSG_CHANNEL_MODERATE                           = 0x0A8,
    SMSG_UPDATE_OBJECT                              = 0x0A9,
    SMSG_DESTROY_OBJECT                             = 0x0AA,
    CMSG_USE_ITEM                                   = 0x0AB,
    CMSG_OPEN_ITEM                                  = 0x0AC,
    CMSG_READ_ITEM                                  = 0x0AD,
    SMSG_READ_ITEM_OK                               = 0x0AE,
    SMSG_READ_ITEM_FAILED                           = 0x0AF,
    SMSG_ITEM_COOLDOWN                              = 0x0B0,
    CMSG_GAMEOBJ_USE                                = 0x0B1,
    CMSG_GAMEOBJ_CHAIR_USE_OBSOLETE                 = 0x0B2,
    SMSG_GAMEOBJECT_CUSTOM_ANIM                     = 0x0B3,
    CMSG_AREATRIGGER                                = 0x0B4,
    MSG_MOVE_START_FORWARD                          = 0x0B5,
    MSG_MOVE_START_BACKWARD                         = 0x0B6,
    MSG_MOVE_STOP                                   = 0x0B7,
    MSG_MOVE_START_STRAFE_LEFT                      = 0x0B8,
    MSG_MOVE_START_STRAFE_RIGHT                     = 0x0B9,
    MSG_MOVE_STOP_STRAFE                            = 0x0BA,
    MSG_MOVE_JUMP                                   = 0x0BB,
    MSG_MOVE_START_TURN_LEFT                        = 0x0BC,
    MSG_MOVE_START_TURN_RIGHT                       = 0x0BD,
    MSG_MOVE_STOP_TURN                              = 0x0BE,
    MSG_MOVE_START_PITCH_UP                         = 0x0BF,
    MSG_MOVE_START_PITCH_DOWN                       = 0x0C0,
    MSG_MOVE_STOP_PITCH                             = 0x0C1,
    MSG_MOVE_SET_RUN_MODE                           = 0x0C2,
    MSG_MOVE_SET_WALK_MODE                          = 0x0C3,
    MSG_MOVE_TOGGLE_LOGGING                         = 0x0C4,
    MSG_MOVE_TELEPORT                               = 0x0C5,
    MSG_MOVE_TELEPORT_CHEAT                         = 0x0C6,
    MSG_MOVE_TELEPORT_ACK                           = 0x0C7,
    MSG_MOVE_TOGGLE_FALL_LOGGING                    = 0x0C8,
    MSG_MOVE_FALL_LAND                              = 0x0C9,
    MSG_MOVE_START_SWIM                             = 0x0CA,
    MSG_MOVE_STOP_SWIM                              = 0x0CB,
    MSG_MOVE_SET_RUN_SPEED_CHEAT                    = 0x0CC,
    MSG_MOVE_SET_RUN_SPEED                          = 0x0CD,
    MSG_MOVE_SET_RUN_BACK_SPEED_CHEAT               = 0x0CE,
    MSG_MOVE_SET_RUN_BACK_SPEED                     = 0x0CF,
    MSG_MOVE_SET_WALK_SPEED_CHEAT                   = 0x0D0,
    MSG_MOVE_SET_WALK_SPEED                         = 0x0D1,
    MSG_MOVE_SET_SWIM_SPEED_CHEAT                   = 0x0D2,
    MSG_MOVE_SET_SWIM_SPEED                         = 0x0D3,
    MSG_MOVE_SET_SWIM_BACK_SPEED_CHEAT              = 0x0D4,
    MSG_MOVE_SET_SWIM_BACK_SPEED                    = 0x0D5,
    MSG_MOVE_SET_ALL_SPEED_CHEAT                    = 0x0D6,
    MSG_MOVE_SET_TURN_RATE_CHEAT                    = 0x0D7,
    MSG_MOVE_SET_TURN_RATE                          = 0x0D8,
    MSG_MOVE_TOGGLE_COLLISION_CHEAT                 = 0x0D9,
    MSG_MOVE_SET_FACING                             = 0x0DA,
    MSG_MOVE_SET_PITCH                              = 0x0DB,
    MSG_MOVE_WORLDPORT_ACK                          = 0x0DC,
    SMSG_MONSTER_MOVE                               = 0x0DD,
    SMSG_MOVE_WATER_WALK                            = 0x0DE,
    SMSG_MOVE_LAND_WALK                             = 0x0DF,
    MSG_MOVE_SET_RAW_POSITION_ACK                   = 0x0E0,
    CMSG_MOVE_SET_RAW_POSITION                      = 0x0E1,
    SMSG_FORCE_RUN_SPEED_CHANGE                     = 0x0E2,
    CMSG_FORCE_RUN_SPEED_CHANGE_ACK                 = 0x0E3,
    SMSG_FORCE_RUN_BACK_SPEED_CHANGE                = 0x0E4,
    CMSG_FORCE_RUN_BACK_SPEED_CHANGE_ACK            = 0x0E5,
    SMSG_FORCE_SWIM_SPEED_CHANGE                    = 0x0E6,
    CMSG_FORCE_SWIM_SPEED_CHANGE_ACK                = 0x0E7,
    SMSG_FORCE_MOVE_ROOT                            = 0x0E8,
    CMSG_FORCE_MOVE_ROOT_ACK                        = 0x0E9,
    SMSG_FORCE_MOVE_UNROOT                          = 0x0EA,
    CMSG_FORCE_MOVE_UNROOT_ACK                      = 0x0EB,
    MSG_MOVE_ROOT                                   = 0x0EC,
    MSG_MOVE_UNROOT                                 = 0x0ED,
    MSG_MOVE_HEARTBEAT                              = 0x0EE,
    SMSG_MOVE_KNOCK_BACK                            = 0x0EF,
    CMSG_MOVE_KNOCK_BACK_ACK                        = 0x0F0,
    MSG_MOVE_KNOCK_BACK                             = 0x0F1,
    SMSG_MOVE_FEATHER_FALL                          = 0x0F2,
    SMSG_MOVE_NORMAL_FALL                           = 0x0F3,
    SMSG_MOVE_SET_HOVER                             = 0x0F4,
    SMSG_MOVE_UNSET_HOVER                           = 0x0F5,
    CMSG_MOVE_HOVER_ACK                             = 0x0F6,
    MSG_MOVE_HOVER                                  = 0x0F7,
    CMSG_TRIGGER_CINEMATIC_CHEAT                    = 0x0F8,
    CMSG_OPENING_CINEMATIC                          = 0x0F9,
    SMSG_TRIGGER_CINEMATIC                          = 0x0FA,
    CMSG_NEXT_CINEMATIC_CAMERA                      = 0x0FB,
    CMSG_COMPLETE_CINEMATIC                         = 0x0FC,
    SMSG_TUTORIAL_FLAGS                             = 0x0FD,
    CMSG_TUTORIAL_FLAG                              = 0x0FE,
    CMSG_TUTORIAL_CLEAR                             = 0x0FF,
    CMSG_TUTORIAL_RESET                             = 0x100,
    CMSG_STANDSTATECHANGE                           = 0x101,
    CMSG_EMOTE                                      = 0x102,
    SMSG_EMOTE                                      = 0x103,
    CMSG_TEXT_EMOTE                                 = 0x104,
    SMSG_TEXT_EMOTE                                 = 0x105,
    CMSG_AUTOEQUIP_GROUND_ITEM                      = 0x106,
    CMSG_AUTOSTORE_GROUND_ITEM                      = 0x107,
    CMSG_AUTOSTORE_LOOT_ITEM                        = 0x108,
    CMSG_STORE_LOOT_IN_SLOT                         = 0x109,
    CMSG_AUTOEQUIP_ITEM                             = 0x10A,
    CMSG_AUTOSTORE_BAG_ITEM                         = 0x10B,
    CMSG_SWAP_ITEM                                  = 0x10C,
    CMSG_SWAP_INV_ITEM                              = 0x10D,
    CMSG_SPLIT_ITEM                                 = 0x10E,
    CMSG_AUTOEQUIP_ITEM_SLOT                        = 0x10F,
    OBSOLETE_DROP_ITEM                              = 0x110,
    CMSG_DESTROYITEM                                = 0x111,
    SMSG_INVENTORY_CHANGE_FAILURE                   = 0x112,
    SMSG_OPEN_CONTAINER                             = 0x113,
    CMSG_INSPECT                                    = 0x114,
    SMSG_INSPECT                                    = 0x115,
    CMSG_INITIATE_TRADE                             = 0x116,
    CMSG_BEGIN_TRADE                                = 0x117,
    CMSG_BUSY_TRADE                                 = 0x118,
    CMSG_IGNORE_TRADE                               = 0x119,
    CMSG_ACCEPT_TRADE                               = 0x11A,
    CMSG_UNACCEPT_TRADE                             = 0x11B,
    CMSG_CANCEL_TRADE                               = 0x11C,
    CMSG_SET_TRADE_ITEM                             = 0x11D,
    CMSG_CLEAR_TRADE_ITEM                           = 0x11E,
    CMSG_SET_TRADE_GOLD                             = 0x11F,
    SMSG_TRADE_STATUS                               = 0x120,
    SMSG_TRADE_STATUS_EXTENDED                      = 0x121,
    SMSG_INITIALIZE_FACTIONS                        = 0x122,
    SMSG_SET_FACTION_VISIBLE                        = 0x123,
    SMSG_SET_FACTION_STANDING                       = 0x124,
    CMSG_SET_FACTION_ATWAR                          = 0x125,
    CMSG_SET_FACTION_CHEAT                          = 0x126,
    SMSG_SET_PROFICIENCY                            = 0x127,
    CMSG_SET_ACTION_BUTTON                          = 0x128,
    SMSG_ACTION_BUTTONS                             = 0x129,
    SMSG_INITIAL_SPELLS                             = 0x12A,
    SMSG_LEARNED_SPELL                              = 0x12B,
    SMSG_SUPERCEDED_SPELL                           = 0x12C,
    CMSG_NEW_SPELL_SLOT                             = 0x12D,
    CMSG_CAST_SPELL                                 = 0x12E,
    CMSG_CANCEL_CAST                                = 0x12F,
    SMSG_CAST_FAILED                                = 0x130,
    SMSG_SPELL_START                                = 0x131,
    SMSG_SPELL_GO                                   = 0x132,
    SMSG_SPELL_FAILURE                              = 0x133,
    SMSG_SPELL_COOLDOWN                             = 0x134,
    SMSG_COOLDOWN_EVENT                             = 0x135,
    CMSG_CANCEL_AURA                                = 0x136,
    SMSG_UPDATE_AURA_DURATION                       = 0x137,
    SMSG_PET_CAST_FAILED                            = 0x138,
    MSG_CHANNEL_START                               = 0x139,
    MSG_CHANNEL_UPDATE                              = 0x13A,
    CMSG_CANCEL_CHANNELLING                         = 0x13B,
    SMSG_AI_REACTION                                = 0x13C,
    CMSG_SET_SELECTION                              = 0x13D,
    CMSG_SET_TARGET_OBSOLETE                        = 0x13E,
    CMSG_UNUSED                                     = 0x13F,
    CMSG_UNUSED2                                    = 0x140,
    CMSG_ATTACKSWING                                = 0x141,
    CMSG_ATTACKSTOP                                 = 0x142,
    SMSG_ATTACKSTART                                = 0x143,
    SMSG_ATTACKSTOP                                 = 0x144,
    SMSG_ATTACKSWING_NOTINRANGE                     = 0x145,
    SMSG_ATTACKSWING_BADFACING                      = 0x146,
    SMSG_ATTACKSWING_NOTSTANDING                    = 0x147,
    SMSG_ATTACKSWING_DEADTARGET                     = 0x148,
    SMSG_ATTACKSWING_CANT_ATTACK                    = 0x149,
    SMSG_ATTACKERSTATEUPDATE                        = 0x14A,
    SMSG_VICTIMSTATEUPDATE_OBSOLETE                 = 0x14B,
    SMSG_DAMAGE_DONE_OBSOLETE                       = 0x14C,
    SMSG_DAMAGE_TAKEN_OBSOLETE                      = 0x14D,
    SMSG_CANCEL_COMBAT                              = 0x14E,
    SMSG_PLAYER_COMBAT_XP_GAIN_OBSOLETE             = 0x14F,
    SMSG_SPELLHEALLOG                               = 0x150,
    SMSG_SPELLENERGIZELOG                           = 0x151,
    CMSG_SHEATHE_OBSOLETE                           = 0x152,
    CMSG_SAVE_PLAYER                                = 0x153,
    CMSG_SETDEATHBINDPOINT                          = 0x154,
    SMSG_BINDPOINTUPDATE                            = 0x155,
    CMSG_GETDEATHBINDZONE                           = 0x156,
    SMSG_BINDZONEREPLY                              = 0x157,
    SMSG_PLAYERBOUND                                = 0x158,
    SMSG_CLIENT_CONTROL_UPDATE                      = 0x159,
    CMSG_REPOP_REQUEST                              = 0x15A,
    SMSG_RESURRECT_REQUEST                          = 0x15B,
    CMSG_RESURRECT_RESPONSE                         = 0x15C,
    CMSG_LOOT                                       = 0x15D,
    CMSG_LOOT_MONEY                                 = 0x15E,
    CMSG_LOOT_RELEASE                               = 0x15F,
    SMSG_LOOT_RESPONSE                              = 0x160,
    SMSG_LOOT_RELEASE_RESPONSE                      = 0x161,
    SMSG_LOOT_REMOVED                               = 0x162,
    SMSG_LOOT_MONEY_NOTIFY                          = 0x163,
    SMSG_LOOT_ITEM_NOTIFY                           = 0x164,
    SMSG_LOOT_CLEAR_MONEY                           = 0x165,
    SMSG_ITEM_PUSH_RESULT                           = 0x166,
    SMSG_DUEL_REQUESTED                             = 0x167,
    SMSG_DUEL_OUTOFBOUNDS                           = 0x168,
    SMSG_DUEL_INBOUNDS                              = 0x169,
    SMSG_DUEL_COMPLETE                              = 0x16A,
    SMSG_DUEL_WINNER                                = 0x16B,
    CMSG_DUEL_ACCEPTED                              = 0x16C,
    CMSG_DUEL_CANCELLED                             = 0x16D,
    SMSG_MOUNTRESULT                                = 0x16E,
    SMSG_DISMOUNTRESULT                             = 0x16F,
    SMSG_PUREMOUNT_CANCELLED_OBSOLETE               = 0x170,
    CMSG_MOUNTSPECIAL_ANIM                          = 0x171,
    SMSG_MOUNTSPECIAL_ANIM                          = 0x172,
    SMSG_PET_TAME_FAILURE                           = 0x173,
    CMSG_PET_SET_ACTION                             = 0x174,
    CMSG_PET_ACTION                                 = 0x175,
    CMSG_PET_ABANDON                                = 0x176,
    CMSG_PET_RENAME                                 = 0x177,
    SMSG_PET_NAME_INVALID                           = 0x178,
    SMSG_PET_SPELLS                                 = 0x179,
    SMSG_PET_MODE                                   = 0x17A,
    CMSG_GOSSIP_HELLO                               = 0x17B,
    CMSG_GOSSIP_SELECT_OPTION                       = 0x17C,
    SMSG_GOSSIP_MESSAGE                             = 0x17D,
    SMSG_GOSSIP_COMPLETE                            = 0x17E,
    CMSG_NPC_TEXT_QUERY                             = 0x17F,
    SMSG_NPC_TEXT_UPDATE                            = 0x180,
    SMSG_NPC_WONT_TALK                              = 0x181,
    CMSG_QUESTGIVER_STATUS_QUERY                    = 0x182,
    SMSG_QUESTGIVER_STATUS                          = 0x183,
    CMSG_QUESTGIVER_HELLO                           = 0x184,
    SMSG_QUESTGIVER_QUEST_LIST                      = 0x185,
    CMSG_QUESTGIVER_QUERY_QUEST                     = 0x186,
    CMSG_QUESTGIVER_QUEST_AUTOLAUNCH                = 0x187,
    SMSG_QUESTGIVER_QUEST_DETAILS                   = 0x188,
    CMSG_QUESTGIVER_ACCEPT_QUEST                    = 0x189,
    CMSG_QUESTGIVER_COMPLETE_QUEST                  = 0x18A,
    SMSG_QUESTGIVER_REQUEST_ITEMS                   = 0x18B,
    CMSG_QUESTGIVER_REQUEST_REWARD                  = 0x18C,
    SMSG_QUESTGIVER_OFFER_REWARD                    = 0x18D,
    CMSG_QUESTGIVER_CHOOSE_REWARD                   = 0x18E,
    SMSG_QUESTGIVER_QUEST_INVALID                   = 0x18F,
    CMSG_QUESTGIVER_CANCEL                          = 0x190,
    SMSG_QUESTGIVER_QUEST_COMPLETE                  = 0x191,
    SMSG_QUESTGIVER_QUEST_FAILED                    = 0x192,
    CMSG_QUESTLOG_SWAP_QUEST                        = 0x193,
    CMSG_QUESTLOG_REMOVE_QUEST                      = 0x194,
    SMSG_QUESTLOG_FULL                              = 0x195,
    SMSG_QUESTUPDATE_FAILED                         = 0x196,
    SMSG_QUESTUPDATE_FAILEDTIMER                    = 0x197,
    SMSG_QUESTUPDATE_COMPLETE                       = 0x198,
    SMSG_QUESTUPDATE_ADD_KILL                       = 0x199,
    SMSG_QUESTUPDATE_ADD_ITEM                       = 0x19A,
    CMSG_QUEST_CONFIRM_ACCEPT                       = 0x19B,
    SMSG_QUEST_CONFIRM_ACCEPT                       = 0x19C,
    CMSG_PUSHQUESTTOPARTY                           = 0x19D,
    CMSG_LIST_INVENTORY                             = 0x19E,
    SMSG_LIST_INVENTORY                             = 0x19F,
    CMSG_SELL_ITEM                                  = 0x1A0,
    SMSG_SELL_ITEM                                  = 0x1A1,
    CMSG_BUY_ITEM                                   = 0x1A2,
    CMSG_BUY_ITEM_IN_SLOT                           = 0x1A3,
    SMSG_BUY_ITEM                                   = 0x1A4,
    SMSG_BUY_FAILED                                 = 0x1A5,
    CMSG_TAXICLEARALLNODES                          = 0x1A6,
    CMSG_TAXIENABLEALLNODES                         = 0x1A7,
    CMSG_TAXISHOWNODES                              = 0x1A8,
    SMSG_SHOWTAXINODES                              = 0x1A9,
    CMSG_TAXINODE_STATUS_QUERY                      = 0x1AA,
    SMSG_TAXINODE_STATUS                            = 0x1AB,
    CMSG_TAXIQUERYAVAILABLENODES                    = 0x1AC,
    CMSG_ACTIVATETAXI                               = 0x1AD,
    SMSG_ACTIVATETAXIREPLY                          = 0x1AE,
    SMSG_NEW_TAXI_PATH                              = 0x1AF,
    CMSG_TRAINER_LIST                               = 0x1B0,
    SMSG_TRAINER_LIST                               = 0x1B1,
    CMSG_TRAINER_BUY_SPELL                          = 0x1B2,
    SMSG_TRAINER_BUY_SUCCEEDED                      = 0x1B3,
    SMSG_TRAINER_BUY_FAILED                         = 0x1B4,
    CMSG_BINDER_ACTIVATE                            = 0x1B5,
    SMSG_PLAYERBINDERROR                            = 0x1B6,
    CMSG_BANKER_ACTIVATE                            = 0x1B7,
    SMSG_SHOW_BANK                                  = 0x1B8,
    CMSG_BUY_BANK_SLOT                              = 0x1B9,
    SMSG_BUY_BANK_SLOT_RESULT                       = 0x1BA,
    CMSG_PETITION_SHOWLIST                          = 0x1BB,
    SMSG_PETITION_SHOWLIST                          = 0x1BC,
    CMSG_PETITION_BUY                               = 0x1BD,
    CMSG_PETITION_SHOW_SIGNATURES                   = 0x1BE,
    SMSG_PETITION_SHOW_SIGNATURES                   = 0x1BF,
    CMSG_PETITION_SIGN                              = 0x1C0,
    SMSG_PETITION_SIGN_RESULTS                      = 0x1C1,
    MSG_PETITION_DECLINE                            = 0x1C2,
    CMSG_OFFER_PETITION                             = 0x1C3,
    CMSG_TURN_IN_PETITION                           = 0x1C4,
    SMSG_TURN_IN_PETITION_RESULTS                   = 0x1C5,
    CMSG_PETITION_QUERY                             = 0x1C6,
    SMSG_PETITION_QUERY_RESPONSE                    = 0x1C7,
    SMSG_FISH_NOT_HOOKED                            = 0x1C8,
    SMSG_FISH_ESCAPED                               = 0x1C9,
    CMSG_BUG                                        = 0x1CA,
    SMSG_NOTIFICATION                               = 0x1CB,
    CMSG_PLAYED_TIME                                = 0x1CC,
    SMSG_PLAYED_TIME                                = 0x1CD,
    CMSG_QUERY_TIME                                 = 0x1CE,
    SMSG_QUERY_TIME_RESPONSE                        = 0x1CF,
    SMSG_LOG_XPGAIN                                 = 0x1D0,
    SMSG_AURACASTLOG                                = 0x1D1,
    CMSG_RECLAIM_CORPSE                             = 0x1D2,
    CMSG_WRAP_ITEM                                  = 0x1D3,
    SMSG_LEVELUP_INFO                               = 0x1D4,
    MSG_MINIMAP_PING                                = 0x1D5,
    SMSG_RESISTLOG                                  = 0x1D6,
    SMSG_ENCHANTMENTLOG                             = 0x1D7,
    CMSG_SET_SKILL_CHEAT                            = 0x1D8,
    SMSG_START_MIRROR_TIMER                         = 0x1D9,
    SMSG_PAUSE_MIRROR_TIMER                         = 0x1DA,
    SMSG_STOP_MIRROR_TIMER                          = 0x1DB,
    CMSG_PING                                       = 0x1DC,
    SMSG_PONG                                       = 0x1DD,
    SMSG_CLEAR_COOLDOWN                             = 0x1DE,
    SMSG_GAMEOBJECT_PAGETEXT                        = 0x1DF,
    CMSG_SETSHEATHED                                = 0x1E0,
    SMSG_COOLDOWN_CHEAT                             = 0x1E1,
    SMSG_SPELL_DELAYED                              = 0x1E2,
    CMSG_PLAYER_MACRO_OBSOLETE                      = 0x1E3,
    SMSG_PLAYER_MACRO_OBSOLETE                      = 0x1E4,
    CMSG_GHOST                                      = 0x1E5,
    CMSG_GM_INVIS                                   = 0x1E6,
    SMSG_INVALID_PROMOTION_CODE                     = 0x1E7,
    MSG_GM_BIND_OTHER                               = 0x1E8,
    MSG_GM_SUMMON                                   = 0x1E9,
    SMSG_ITEM_TIME_UPDATE                           = 0x1EA,
    SMSG_ITEM_ENCHANT_TIME_UPDATE                   = 0x1EB,
    SMSG_AUTH_CHALLENGE                             = 0x1EC,
    CMSG_AUTH_SESSION                               = 0x1ED,
    SMSG_AUTH_RESPONSE                              = 0x1EE,
    MSG_GM_SHOWLABEL                                = 0x1EF,
    CMSG_PET_CAST_SPELL                             = 0x1F0,
    MSG_SAVE_GUILD_EMBLEM                           = 0x1F1,
    MSG_TABARDVENDOR_ACTIVATE                       = 0x1F2,
    SMSG_PLAY_SPELL_VISUAL                          = 0x1F3,
    CMSG_ZONEUPDATE                                 = 0x1F4,
    SMSG_PARTYKILLLOG                               = 0x1F5,
    SMSG_COMPRESSED_UPDATE_OBJECT                   = 0x1F6,
    SMSG_PLAY_SPELL_IMPACT                          = 0x1F7,
    SMSG_EXPLORATION_EXPERIENCE                     = 0x1F8,
    CMSG_GM_SET_SECURITY_GROUP                      = 0x1F9,
    CMSG_GM_NUKE                                    = 0x1FA,
    MSG_RANDOM_ROLL                                 = 0x1FB,
    SMSG_ENVIRONMENTALDAMAGELOG                     = 0x1FC,
    CMSG_RWHOIS_OBSOLETE                            = 0x1FD,
    SMSG_RWHOIS                                     = 0x1FE,
    MSG_LOOKING_FOR_GROUP                           = 0x1FF,
    CMSG_SET_LOOKING_FOR_GROUP                      = 0x200,
    CMSG_UNLEARN_SPELL                              = 0x201,
    CMSG_UNLEARN_SKILL                              = 0x202,
    SMSG_REMOVED_SPELL                              = 0x203,
    CMSG_DECHARGE                                   = 0x204,
    CMSG_GMTICKET_CREATE                            = 0x205,
    SMSG_GMTICKET_CREATE                            = 0x206,
    CMSG_GMTICKET_UPDATETEXT                        = 0x207,
    SMSG_GMTICKET_UPDATETEXT                        = 0x208,
    SMSG_ACCOUNT_DATA_TIMES                         = 0x209,
    CMSG_REQUEST_ACCOUNT_DATA                       = 0x20A,
    CMSG_UPDATE_ACCOUNT_DATA                        = 0x20B,
    SMSG_UPDATE_ACCOUNT_DATA                        = 0x20C,
    SMSG_CLEAR_FAR_SIGHT_IMMEDIATE                  = 0x20D,
    SMSG_POWERGAINLOG_OBSOLETE                      = 0x20E,
    CMSG_GM_TEACH                                   = 0x20F,
    CMSG_GM_CREATE_ITEM_TARGET                      = 0x210,
    CMSG_GMTICKET_GETTICKET                         = 0x211,
    SMSG_GMTICKET_GETTICKET                         = 0x212,
    CMSG_UNLEARN_TALENTS                            = 0x213,
    SMSG_GAMEOBJECT_SPAWN_ANIM_OBSOLETE             = 0x214,
    SMSG_GAMEOBJECT_DESPAWN_ANIM                    = 0x215,
    MSG_CORPSE_QUERY                                = 0x216,
    CMSG_GMTICKET_DELETETICKET                      = 0x217,
    SMSG_GMTICKET_DELETETICKET                      = 0x218,
    SMSG_CHAT_WRONG_FACTION                         = 0x219,
    CMSG_GMTICKET_SYSTEMSTATUS                      = 0x21A,
    SMSG_GMTICKET_SYSTEMSTATUS                      = 0x21B,
    CMSG_SPIRIT_HEALER_ACTIVATE                     = 0x21C,
    CMSG_SET_STAT_CHEAT                             = 0x21D,
    SMSG_SET_REST_START                             = 0x21E,
    CMSG_SKILL_BUY_STEP                             = 0x21F,
    CMSG_SKILL_BUY_RANK                             = 0x220,
    CMSG_XP_CHEAT                                   = 0x221,
    SMSG_SPIRIT_HEALER_CONFIRM                      = 0x222,
    CMSG_CHARACTER_POINT_CHEAT                      = 0x223,
    SMSG_GOSSIP_POI                                 = 0x224,
    CMSG_CHAT_IGNORED                               = 0x225,
    CMSG_GM_VISION                                  = 0x226,
    CMSG_SERVER_COMMAND                             = 0x227,
    CMSG_GM_SILENCE                                 = 0x228,
    CMSG_GM_REVEALTO                                = 0x229,
    CMSG_GM_RESURRECT                               = 0x22A,
    CMSG_GM_SUMMONMOB                               = 0x22B,
    CMSG_GM_MOVECORPSE                              = 0x22C,
    CMSG_GM_FREEZE                                  = 0x22D,
    CMSG_GM_UBERINVIS                               = 0x22E,
    CMSG_GM_REQUEST_PLAYER_INFO                     = 0x22F,
    SMSG_GM_PLAYER_INFO                             = 0x230,
    CMSG_GUILD_RANK                                 = 0x231,
    CMSG_GUILD_ADD_RANK                             = 0x232,
    CMSG_GUILD_DEL_RANK                             = 0x233,
    CMSG_GUILD_SET_PUBLIC_NOTE                      = 0x234,
    CMSG_GUILD_SET_OFFICER_NOTE                     = 0x235,
    SMSG_LOGIN_VERIFY_WORLD                         = 0x236,
    CMSG_CLEAR_EXPLORATION                          = 0x237,
    CMSG_SEND_MAIL                                  = 0x238,
    SMSG_SEND_MAIL_RESULT                           = 0x239,
    CMSG_GET_MAIL_LIST                              = 0x23A,
    SMSG_MAIL_LIST_RESULT                           = 0x23B,
    CMSG_BATTLEFIELD_LIST                           = 0x23C,
    SMSG_BATTLEFIELD_LIST                           = 0x23D,
    CMSG_BATTLEFIELD_JOIN                           = 0x23E,
    SMSG_BATTLEFIELD_WIN_OBSOLETE                   = 0x23F,
    SMSG_BATTLEFIELD_LOSE_OBSOLETE                  = 0x240,
    CMSG_TAXICLEARNODE                              = 0x241,
    CMSG_TAXIENABLENODE                             = 0x242,
    CMSG_ITEM_TEXT_QUERY                            = 0x243,
    SMSG_ITEM_TEXT_QUERY_RESPONSE                   = 0x244,
    CMSG_MAIL_TAKE_MONEY                            = 0x245,
    CMSG_MAIL_TAKE_ITEM                             = 0x246,
    CMSG_MAIL_MARK_AS_READ                          = 0x247,
    CMSG_MAIL_RETURN_TO_SENDER                      = 0x248,
    CMSG_MAIL_DELETE                                = 0x249,
    CMSG_MAIL_CREATE_TEXT_ITEM                      = 0x24A,
    SMSG_SPELLLOGMISS                               = 0x24B,
    SMSG_SPELLLOGEXECUTE                            = 0x24C,
    SMSG_DEBUGAURAPROC                              = 0x24D,
    SMSG_PERIODICAURALOG                            = 0x24E,
    SMSG_SPELLDAMAGESHIELD                          = 0x24F,
    SMSG_SPELLNONMELEEDAMAGELOG                     = 0x250,
    CMSG_LEARN_TALENT                               = 0x251,
    SMSG_RESURRECT_FAILED                           = 0x252,
    CMSG_TOGGLE_PVP                                 = 0x253,
    SMSG_ZONE_UNDER_ATTACK                          = 0x254,
    MSG_AUCTION_HELLO                               = 0x255,
    CMSG_AUCTION_SELL_ITEM                          = 0x256,
    CMSG_AUCTION_REMOVE_ITEM                        = 0x257,
    CMSG_AUCTION_LIST_ITEMS                         = 0x258,
    CMSG_AUCTION_LIST_OWNER_ITEMS                   = 0x259,
    CMSG_AUCTION_PLACE_BID                          = 0x25A,
    SMSG_AUCTION_COMMAND_RESULT                     = 0x25B,
    SMSG_AUCTION_LIST_RESULT                        = 0x25C,
    SMSG_AUCTION_OWNER_LIST_RESULT                  = 0x25D,
    SMSG_AUCTION_BIDDER_NOTIFICATION                = 0x25E,
    SMSG_AUCTION_OWNER_NOTIFICATION                 = 0x25F,
    SMSG_PROCRESIST                                 = 0x260,
    SMSG_STANDSTATE_CHANGE_FAILURE_OBSOLETE         = 0x261,
    SMSG_DISPEL_FAILED                              = 0x262,
    SMSG_SPELLORDAMAGE_IMMUNE                       = 0x263,
    CMSG_AUCTION_LIST_BIDDER_ITEMS                  = 0x264,
    SMSG_AUCTION_BIDDER_LIST_RESULT                 = 0x265,
    SMSG_SET_FLAT_SPELL_MODIFIER                    = 0x266,
    SMSG_SET_PCT_SPELL_MODIFIER                     = 0x267,
    CMSG_SET_AMMO                                   = 0x268,
    SMSG_CORPSE_RECLAIM_DELAY                       = 0x269,
    CMSG_SET_ACTIVE_MOVER                           = 0x26A,
    CMSG_PET_CANCEL_AURA                            = 0x26B,
    CMSG_PLAYER_AI_CHEAT                            = 0x26C,
    CMSG_CANCEL_AUTO_REPEAT_SPELL                   = 0x26D,
    MSG_GM_ACCOUNT_ONLINE                           = 0x26E,
    MSG_LIST_STABLED_PETS                           = 0x26F,
    CMSG_STABLE_PET                                 = 0x270,
    CMSG_UNSTABLE_PET                               = 0x271,
    CMSG_BUY_STABLE_SLOT                            = 0x272,
    SMSG_STABLE_RESULT                              = 0x273,
    CMSG_STABLE_REVIVE_PET                          = 0x274,
    CMSG_STABLE_SWAP_PET                            = 0x275,
    MSG_QUEST_PUSH_RESULT                           = 0x276,
    SMSG_PLAY_MUSIC                                 = 0x277,
    SMSG_PLAY_OBJECT_SOUND                          = 0x278,
    CMSG_REQUEST_PET_INFO                           = 0x279,
    CMSG_FAR_SIGHT                                  = 0x27A,
    SMSG_SPELLDISPELLOG                             = 0x27B,
    SMSG_DAMAGE_CALC_LOG                            = 0x27C,
    CMSG_ENABLE_DAMAGE_LOG                          = 0x27D,
    CMSG_GROUP_CHANGE_SUB_GROUP                     = 0x27E,
    CMSG_REQUEST_PARTY_MEMBER_STATS                 = 0x27F,
    CMSG_GROUP_SWAP_SUB_GROUP                       = 0x280,
    CMSG_RESET_FACTION_CHEAT                        = 0x281,
    CMSG_AUTOSTORE_BANK_ITEM                        = 0x282,
    CMSG_AUTOBANK_ITEM                              = 0x283,
    MSG_QUERY_NEXT_MAIL_TIME                        = 0x284,
    SMSG_RECEIVED_MAIL                              = 0x285,
    SMSG_RAID_GROUP_ONLY                            = 0x286,
    CMSG_SET_DURABILITY_CHEAT                       = 0x287,
    CMSG_SET_PVP_RANK_CHEAT                         = 0x288,
    CMSG_ADD_PVP_MEDAL_CHEAT                        = 0x289,
    CMSG_DEL_PVP_MEDAL_CHEAT                        = 0x28A,
    CMSG_SET_PVP_TITLE                              = 0x28B,
    SMSG_PVP_CREDIT                                 = 0x28C,
    SMSG_AUCTION_REMOVED_NOTIFICATION               = 0x28D,
    CMSG_GROUP_RAID_CONVERT                         = 0x28E,
    CMSG_GROUP_ASSISTANT_LEADER                     = 0x28F,
    CMSG_BUYBACK_ITEM                               = 0x290,
    SMSG_SERVER_MESSAGE                             = 0x291,
    CMSG_MEETINGSTONE_JOIN                          = 0x292,
    CMSG_MEETINGSTONE_LEAVE                         = 0x293,
    CMSG_MEETINGSTONE_CHEAT                         = 0x294,
    SMSG_MEETINGSTONE_SETQUEUE                      = 0x295,
    CMSG_MEETINGSTONE_INFO                          = 0x296,
    SMSG_MEETINGSTONE_COMPLETE                      = 0x297,
    SMSG_MEETINGSTONE_IN_PROGRESS                   = 0x298,
    SMSG_MEETINGSTONE_MEMBER_ADDED                  = 0x299,
    CMSG_GMTICKETSYSTEM_TOGGLE                      = 0x29A,
    CMSG_CANCEL_GROWTH_AURA                         = 0x29B,
    SMSG_CANCEL_AUTO_REPEAT                         = 0x29C,
    SMSG_STANDSTATE_UPDATE                          = 0x29D,
    SMSG_LOOT_ALL_PASSED                            = 0x29E,
    SMSG_LOOT_ROLL_WON                              = 0x29F,
    CMSG_LOOT_ROLL                                  = 0x2A0,
    SMSG_LOOT_START_ROLL                            = 0x2A1,
    SMSG_LOOT_ROLL                                  = 0x2A2,
    CMSG_LOOT_MASTER_GIVE                           = 0x2A3,
    SMSG_LOOT_MASTER_LIST                           = 0x2A4,
    SMSG_SET_FORCED_REACTIONS                       = 0x2A5,
    SMSG_SPELL_FAILED_OTHER                         = 0x2A6,
    SMSG_GAMEOBJECT_RESET_STATE                     = 0x2A7,
    CMSG_REPAIR_ITEM                                = 0x2A8,
    SMSG_CHAT_PLAYER_NOT_FOUND                      = 0x2A9,
    MSG_TALENT_WIPE_CONFIRM                         = 0x2AA,
    SMSG_SUMMON_REQUEST                             = 0x2AB,
    CMSG_SUMMON_RESPONSE                            = 0x2AC,
    MSG_MOVE_TOGGLE_GRAVITY_CHEAT                   = 0x2AD,
    SMSG_MONSTER_MOVE_TRANSPORT                     = 0x2AE,
    SMSG_PET_BROKEN                                 = 0x2AF,
    MSG_MOVE_FEATHER_FALL                           = 0x2B0,
    MSG_MOVE_WATER_WALK                             = 0x2B1,
    CMSG_SERVER_BROADCAST                           = 0x2B2,
    CMSG_SELF_RES                                   = 0x2B3,
    SMSG_FEIGN_DEATH_RESISTED                       = 0x2B4,
    CMSG_RUN_SCRIPT                                 = 0x2B5,
    SMSG_SCRIPT_MESSAGE                             = 0x2B6,
    SMSG_DUEL_COUNTDOWN                             = 0x2B7,
    SMSG_AREA_TRIGGER_MESSAGE                       = 0x2B8,
    CMSG_TOGGLE_HELM                                = 0x2B9,
    CMSG_TOGGLE_CLOAK                               = 0x2BA,
    SMSG_MEETINGSTONE_JOINFAILED                    = 0x2BB,
    SMSG_PLAYER_SKINNED                             = 0x2BC,
    SMSG_DURABILITY_DAMAGE_DEATH                    = 0x2BD,
    CMSG_SET_EXPLORATION                            = 0x2BE,
    CMSG_SET_ACTIONBAR_TOGGLES                      = 0x2BF,
    UMSG_DELETE_GUILD_CHARTER                       = 0x2C0,
    MSG_PETITION_RENAME                             = 0x2C1,
    SMSG_INIT_WORLD_STATES                          = 0x2C2,
    SMSG_UPDATE_WORLD_STATE                         = 0x2C3,
    CMSG_ITEM_NAME_QUERY                            = 0x2C4,
    SMSG_ITEM_NAME_QUERY_RESPONSE                   = 0x2C5,
    SMSG_PET_ACTION_FEEDBACK                        = 0x2C6,
    CMSG_CHAR_RENAME                                = 0x2C7,
    SMSG_CHAR_RENAME                                = 0x2C8,
    CMSG_MOVE_SPLINE_DONE                           = 0x2C9,
    CMSG_MOVE_FALL_RESET                            = 0x2CA,
    SMSG_INSTANCE_SAVE_CREATED                      = 0x2CB,
    SMSG_RAID_INSTANCE_INFO                         = 0x2CC,
    CMSG_REQUEST_RAID_INFO                          = 0x2CD,
    CMSG_MOVE_TIME_SKIPPED                          = 0x2CE,
    CMSG_MOVE_FEATHER_FALL_ACK                      = 0x2CF,
    CMSG_MOVE_WATER_WALK_ACK                        = 0x2D0,
    CMSG_MOVE_NOT_ACTIVE_MOVER                      = 0x2D1,
    SMSG_PLAY_SOUND                                 = 0x2D2,
    CMSG_BATTLEFIELD_STATUS                         = 0x2D3,
    SMSG_BATTLEFIELD_STATUS                         = 0x2D4,
    CMSG_BATTLEFIELD_PORT                           = 0x2D5,
    MSG_INSPECT_HONOR_STATS                         = 0x2D6,
    CMSG_BATTLEMASTER_HELLO                         = 0x2D7,
    CMSG_MOVE_START_SWIM_CHEAT                      = 0x2D8,
    CMSG_MOVE_STOP_SWIM_CHEAT                       = 0x2D9,
    SMSG_FORCE_WALK_SPEED_CHANGE                    = 0x2DA,
    CMSG_FORCE_WALK_SPEED_CHANGE_ACK                = 0x2DB,
    SMSG_FORCE_SWIM_BACK_SPEED_CHANGE               = 0x2DC,
    CMSG_FORCE_SWIM_BACK_SPEED_CHANGE_ACK           = 0x2DD,
    SMSG_FORCE_TURN_RATE_CHANGE                     = 0x2DE,
    CMSG_FORCE_TURN_RATE_CHANGE_ACK                 = 0x2DF,
    MSG_PVP_LOG_DATA                                = 0x2E0,
    CMSG_LEAVE_BATTLEFIELD                          = 0x2E1,
    CMSG_AREA_SPIRIT_HEALER_QUERY                   = 0x2E2,
    CMSG_AREA_SPIRIT_HEALER_QUEUE                   = 0x2E3,
    SMSG_AREA_SPIRIT_HEALER_TIME                    = 0x2E4,
    CMSG_GM_UNTEACH                                 = 0x2E5,
    SMSG_WARDEN_DATA                                = 0x2E6,
    CMSG_WARDEN_DATA                                = 0x2E7,
    SMSG_GROUP_JOINED_BATTLEGROUND                  = 0x2E8,
    MSG_BATTLEGROUND_PLAYER_POSITIONS               = 0x2E9,
    CMSG_PET_STOP_ATTACK                            = 0x2EA,
    SMSG_BINDER_CONFIRM                             = 0x2EB,
    SMSG_BATTLEGROUND_PLAYER_JOINED                 = 0x2EC,
    SMSG_BATTLEGROUND_PLAYER_LEFT                   = 0x2ED,
    CMSG_BATTLEMASTER_JOIN                          = 0x2EE,
    SMSG_ADDON_INFO                                 = 0x2EF,
    CMSG_PET_UNLEARN                                = 0x2F0,
    SMSG_PET_UNLEARN_CONFIRM                        = 0x2F1,
    SMSG_PARTY_MEMBER_STATS_FULL                    = 0x2F2,
    CMSG_PET_SPELL_AUTOCAST                         = 0x2F3,
    SMSG_WEATHER                                    = 0x2F4,
    SMSG_PLAY_TIME_WARNING                          = 0x2F5,
    SMSG_MINIGAME_SETUP                             = 0x2F6,
    SMSG_MINIGAME_STATE                             = 0x2F7,
    CMSG_MINIGAME_MOVE                              = 0x2F8,
    SMSG_MINIGAME_MOVE_FAILED                       = 0x2F9,
    SMSG_RAID_INSTANCE_MESSAGE                      = 0x2FA,
    SMSG_COMPRESSED_MOVES                           = 0x2FB,
    CMSG_GUILD_INFO_TEXT                            = 0x2FC,
    SMSG_CHAT_RESTRICTED                            = 0x2FD,
    SMSG_SPLINE_SET_RUN_SPEED                       = 0x2FE,
    SMSG_SPLINE_SET_RUN_BACK_SPEED                  = 0x2FF,
    SMSG_SPLINE_SET_SWIM_SPEED                      = 0x300,
    SMSG_SPLINE_SET_WALK_SPEED                      = 0x301,
    SMSG_SPLINE_SET_SWIM_BACK_SPEED                 = 0x302,
    SMSG_SPLINE_SET_TURN_RATE                       = 0x303,
    SMSG_SPLINE_MOVE_UNROOT                         = 0x304,
    SMSG_SPLINE_MOVE_FEATHER_FALL                   = 0x305,
    SMSG_SPLINE_MOVE_NORMAL_FALL                    = 0x306,
    SMSG_SPLINE_MOVE_SET_HOVER                      = 0x307,
    SMSG_SPLINE_MOVE_UNSET_HOVER                    = 0x308,
    SMSG_SPLINE_MOVE_WATER_WALK                     = 0x309,
    SMSG_SPLINE_MOVE_LAND_WALK                      = 0x30A,
    SMSG_SPLINE_MOVE_START_SWIM                     = 0x30B,
    SMSG_SPLINE_MOVE_STOP_SWIM                      = 0x30C,
    SMSG_SPLINE_MOVE_SET_RUN_MODE                   = 0x30D,
    SMSG_SPLINE_MOVE_SET_WALK_MODE                  = 0x30E,
    CMSG_GM_NUKE_ACCOUNT                            = 0x30F,
    MSG_GM_DESTROY_CORPSE                           = 0x310,
    CMSG_GM_DESTROY_ONLINE_CORPSE                   = 0x311,
    CMSG_ACTIVATETAXIEXPRESS                        = 0x312,
    SMSG_SET_FACTION_ATWAR                          = 0x313,
    SMSG_GAMETIMEBIAS_SET                           = 0x314,
    CMSG_DEBUG_ACTIONS_START                        = 0x315,
    CMSG_DEBUG_ACTIONS_STOP                         = 0x316,
    CMSG_SET_FACTION_INACTIVE                       = 0x317,
    CMSG_SET_WATCHED_FACTION                        = 0x318,
    MSG_MOVE_TIME_SKIPPED                           = 0x319,
    SMSG_SPLINE_MOVE_ROOT                           = 0x31A,
    CMSG_SET_EXPLORATION_ALL                        = 0x31B,
    SMSG_INVALIDATE_PLAYER                          = 0x31C,
    CMSG_RESET_INSTANCES                            = 0x31D,
    SMSG_INSTANCE_RESET                             = 0x31E,
    SMSG_INSTANCE_RESET_FAILED                      = 0x31F,
    SMSG_UPDATE_LAST_INSTANCE                       = 0x320,
    MSG_RAID_TARGET_UPDATE                          = 0x321,
    MSG_RAID_READY_CHECK                            = 0x322,
    CMSG_LUA_USAGE                                  = 0x323,
    SMSG_PET_ACTION_SOUND                           = 0x324,
    SMSG_PET_DISMISS_SOUND                          = 0x325,
    SMSG_GHOSTEE_GONE                               = 0x326,
    CMSG_GM_UPDATE_TICKET_STATUS                    = 0x327,
    SMSG_GM_TICKET_STATUS_UPDATE                    = 0x328,
    MSG_SET_DUNGEON_DIFFICULTY                      = 0x329,
    CMSG_GMSURVEY_SUBMIT                            = 0x32A,
    SMSG_UPDATE_INSTANCE_OWNERSHIP                  = 0x32B,
    CMSG_IGNORE_KNOCKBACK_CHEAT                     = 0x32C,
    SMSG_CHAT_PLAYER_AMBIGUOUS                      = 0x32D,
    MSG_DELAY_GHOST_TELEPORT                        = 0x32E,
    SMSG_SPELLINSTAKILLLOG                          = 0x32F,
    SMSG_SPELL_UPDATE_CHAIN_TARGETS                 = 0x330,
    CMSG_CHAT_FILTERED                              = 0x331,
    SMSG_EXPECTED_SPAM_RECORDS                      = 0x332,
    SMSG_SPELLSTEALLOG                              = 0x333,
    CMSG_LOTTERY_QUERY_OBSOLETE                     = 0x334,
    SMSG_LOTTERY_QUERY_RESULT_OBSOLETE              = 0x335,
    CMSG_BUY_LOTTERY_TICKET_OBSOLETE                = 0x336,
    SMSG_LOTTERY_RESULT_OBSOLETE                    = 0x337,
    SMSG_CHARACTER_PROFILE                          = 0x338,
    SMSG_CHARACTER_PROFILE_REALM_CONNECTED          = 0x339,
    SMSG_DEFENSE_MESSAGE                            = 0x33A,
    SMSG_INSTANCE_DIFFICULTY                        = 0x33B,
    MSG_GM_RESETINSTANCELIMIT                       = 0x33C,
    SMSG_MOTD                                       = 0x33D,
    SMSG_MOVE_SET_FLIGHT_OBSOLETE                   = 0x33E,
    SMSG_MOVE_UNSET_FLIGHT_OBSOLETE                 = 0x33F,
    CMSG_MOVE_FLIGHT_ACK_OBSOLETE                   = 0x340,
    MSG_MOVE_START_SWIM_CHEAT                       = 0x341,
    MSG_MOVE_STOP_SWIM_CHEAT                        = 0x342,
    SMSG_MOVE_SET_CAN_FLY                           = 0x343,
    SMSG_MOVE_UNSET_CAN_FLY                         = 0x344,
    CMSG_MOVE_SET_CAN_FLY_ACK                       = 0x345,
    CMSG_MOVE_SET_FLY                               = 0x346,
    CMSG_SOCKET_GEMS                                = 0x347,
    CMSG_ARENA_TEAM_CREATE                          = 0x348,
    SMSG_ARENA_TEAM_COMMAND_RESULT                  = 0x349,
    UMSG_UPDATE_ARENA_TEAM_OBSOLETE                 = 0x34A,
    CMSG_ARENA_TEAM_QUERY                           = 0x34B,
    SMSG_ARENA_TEAM_QUERY_RESPONSE                  = 0x34C,
    CMSG_ARENA_TEAM_ROSTER                          = 0x34D,
    SMSG_ARENA_TEAM_ROSTER                          = 0x34E,
    CMSG_ARENA_TEAM_INVITE                          = 0x34F,
    SMSG_ARENA_TEAM_INVITE                          = 0x350,
    CMSG_ARENA_TEAM_ACCEPT                          = 0x351,
    CMSG_ARENA_TEAM_DECLINE                         = 0x352,
    CMSG_ARENA_TEAM_LEAVE                           = 0x353,
    CMSG_ARENA_TEAM_REMOVE                          = 0x354,
    CMSG_ARENA_TEAM_DISBAND                         = 0x355,
    CMSG_ARENA_TEAM_LEADER                          = 0x356,
    SMSG_ARENA_TEAM_EVENT                           = 0x357,
    CMSG_BATTLEMASTER_JOIN_ARENA                    = 0x358,
    MSG_MOVE_START_ASCEND                           = 0x359,
    MSG_MOVE_STOP_ASCEND                            = 0x35A,
    SMSG_ARENA_TEAM_STATS                           = 0x35B,
    CMSG_LFG_SET_AUTOJOIN                           = 0x35C,
    CMSG_LFG_CLEAR_AUTOJOIN                         = 0x35D,
    CMSG_LFM_SET_AUTOFILL                           = 0x35E,
    CMSG_LFM_CLEAR_AUTOFILL                         = 0x35F,
    CMSG_ACCEPT_LFG_MATCH                           = 0x360,
    CMSG_DECLINE_LFG_MATCH                          = 0x361,
    CMSG_CANCEL_PENDING_LFG                         = 0x362,
    CMSG_CLEAR_LOOKING_FOR_GROUP                    = 0x363,
    CMSG_CLEAR_LOOKING_FOR_MORE                     = 0x364,
    CMSG_SET_LOOKING_FOR_MORE                       = 0x365,
    CMSG_SET_LFG_COMMENT                            = 0x366,
    SMSG_LFG_TIMEDOUT                               = 0x367,
    SMSG_LFG_OTHER_TIMEDOUT                         = 0x368,
    SMSG_LFG_AUTOJOIN_FAILED                        = 0x369,
    SMSG_LFG_AUTOJOIN_FAILED_NO_PLAYER              = 0x36A,
    SMSG_LFG_LEADER_IS_LFM                          = 0x36B,
    SMSG_LFG_UPDATE                                 = 0x36C,
    SMSG_LFG_UPDATE_LFM                             = 0x36D,
    SMSG_LFG_UPDATE_LFG                             = 0x36E,
    SMSG_LFG_UPDATE_QUEUED                          = 0x36F,
    SMSG_LFG_PENDING_INVITE                         = 0x370,
    SMSG_LFG_PENDING_MATCH                          = 0x371,
    SMSG_LFG_PENDING_MATCH_DONE                     = 0x372,
    SMSG_TITLE_EARNED                               = 0x373,
    CMSG_SET_TITLE                                  = 0x374,
    CMSG_CANCEL_MOUNT_AURA                          = 0x375,
    SMSG_ARENA_ERROR                                = 0x376,
    MSG_INSPECT_ARENA_TEAMS                         = 0x377,
    SMSG_DEATH_RELEASE_LOC                          = 0x378,
    CMSG_CANCEL_TEMP_ENCHANTMENT                    = 0x379,
    SMSG_FORCED_DEATH_UPDATE                        = 0x37A,
    CMSG_CHEAT_SET_HONOR_CURRENCY                   = 0x37B,
    CMSG_CHEAT_SET_ARENA_CURRENCY                   = 0x37C,
    MSG_MOVE_SET_FLIGHT_SPEED_CHEAT                 = 0x37D,
    MSG_MOVE_SET_FLIGHT_SPEED                       = 0x37E,
    MSG_MOVE_SET_FLIGHT_BACK_SPEED_CHEAT            = 0x37F,
    MSG_MOVE_SET_FLIGHT_BACK_SPEED                  = 0x380,
    SMSG_FORCE_FLIGHT_SPEED_CHANGE                  = 0x381,
    CMSG_FORCE_FLIGHT_SPEED_CHANGE_ACK              = 0x382,
    SMSG_FORCE_FLIGHT_BACK_SPEED_CHANGE             = 0x383,
    CMSG_FORCE_FLIGHT_BACK_SPEED_CHANGE_ACK         = 0x384,
    SMSG_SPLINE_SET_FLIGHT_SPEED                    = 0x385,
    SMSG_SPLINE_SET_FLIGHT_BACK_SPEED               = 0x386,
    CMSG_MAELSTROM_INVALIDATE_CACHE                 = 0x387,
    SMSG_FLIGHT_SPLINE_SYNC                         = 0x388,
    CMSG_SET_TAXI_BENCHMARK_MODE                    = 0x389,
    SMSG_JOINED_BATTLEGROUND_QUEUE                  = 0x38A,
    SMSG_REALM_SPLIT                                = 0x38B,
    CMSG_REALM_SPLIT                                = 0x38C,
    CMSG_MOVE_CHNG_TRANSPORT                        = 0x38D,
    MSG_PARTY_ASSIGNMENT                            = 0x38E,
    SMSG_OFFER_PETITION_ERROR                       = 0x38F,
    SMSG_TIME_SYNC_REQ                              = 0x390,
    CMSG_TIME_SYNC_RESP                             = 0x391,
    CMSG_SEND_LOCAL_EVENT                           = 0x392,
    CMSG_SEND_GENERAL_TRIGGER                       = 0x393,
    CMSG_SEND_COMBAT_TRIGGER                        = 0x394,
    CMSG_MAELSTROM_GM_SENT_MAIL                     = 0x395,
    SMSG_RESET_FAILED_NOTIFY                        = 0x396,
    SMSG_REAL_GROUP_UPDATE                          = 0x397,
    SMSG_LFG_DISABLED                               = 0x398,
    CMSG_ACTIVE_PVP_CHEAT                           = 0x399,
    CMSG_CHEAT_DUMP_ITEMS_DEBUG_ONLY                = 0x39A,
    SMSG_CHEAT_DUMP_ITEMS_DEBUG_ONLY_RESPONSE       = 0x39B,
    SMSG_CHEAT_DUMP_ITEMS_DEBUG_ONLY_RESPONSE_WRITE_FILE = 0x39C,
    SMSG_UPDATE_COMBO_POINTS                        = 0x39D,
    SMSG_VOICE_SESSION_ROSTER_UPDATE                = 0x39E,
    SMSG_VOICE_SESSION_LEAVE                        = 0x39F,
    SMSG_VOICE_SESSION_ADJUST_PRIORITY              = 0x3A0,
    CMSG_VOICE_SET_TALKER_MUTED_REQUEST             = 0x3A1,
    SMSG_VOICE_SET_TALKER_MUTED                     = 0x3A2,
    SMSG_INIT_EXTRA_AURA_INFO                       = 0x3A3,
    SMSG_SET_EXTRA_AURA_INFO                        = 0x3A4,
    SMSG_SET_EXTRA_AURA_INFO_NEED_UPDATE            = 0x3A5,
    SMSG_CLEAR_EXTRA_AURA_INFO                      = 0x3A6,
    MSG_MOVE_START_DESCEND                          = 0x3A7,
    CMSG_IGNORE_REQUIREMENTS_CHEAT                  = 0x3A8,
    SMSG_IGNORE_REQUIREMENTS_CHEAT                  = 0x3A9,
    SMSG_SPELL_CHANCE_PROC_LOG                      = 0x3AA,
    CMSG_MOVE_SET_RUN_SPEED                         = 0x3AB,
    SMSG_DISMOUNT                                   = 0x3AC,
    MSG_MOVE_UPDATE_CAN_FLY                         = 0x3AD,
    MSG_RAID_READY_CHECK_CONFIRM                    = 0x3AE,
    CMSG_VOICE_SESSION_ENABLE                       = 0x3AF,
    SMSG_VOICE_PARENTAL_CONTROLS                    = 0x3B0,
    CMSG_GM_WHISPER                                 = 0x3B1,
    SMSG_GM_MESSAGECHAT                             = 0x3B2,
    MSG_GM_GEARRATING                               = 0x3B3,
    CMSG_COMMENTATOR_ENABLE                         = 0x3B4,
    SMSG_COMMENTATOR_STATE_CHANGED                  = 0x3B5,
    CMSG_COMMENTATOR_GET_MAP_INFO                   = 0x3B6,
    SMSG_COMMENTATOR_MAP_INFO                       = 0x3B7,
    CMSG_COMMENTATOR_GET_PLAYER_INFO                = 0x3B8,
    SMSG_COMMENTATOR_GET_PLAYER_INFO                = 0x3B9,
    SMSG_COMMENTATOR_PLAYER_INFO                    = 0x3BA,
    CMSG_COMMENTATOR_ENTER_INSTANCE                 = 0x3BB,
    CMSG_COMMENTATOR_EXIT_INSTANCE                  = 0x3BC,
    CMSG_COMMENTATOR_INSTANCE_COMMAND               = 0x3BD,
    SMSG_CLEAR_TARGET                               = 0x3BE,
    CMSG_BOT_DETECTED                               = 0x3BF,
    SMSG_CROSSED_INEBRIATION_THRESHOLD              = 0x3C0,
    CMSG_CHEAT_PLAYER_LOGIN                         = 0x3C1,
    CMSG_CHEAT_PLAYER_LOOKUP                        = 0x3C2,
    SMSG_CHEAT_PLAYER_LOOKUP                        = 0x3C3,
    SMSG_KICK_REASON                                = 0x3C4,
    MSG_RAID_READY_CHECK_FINISHED                   = 0x3C5,
    CMSG_COMPLAIN                                   = 0x3C6,
    SMSG_COMPLAIN_RESULT                            = 0x3C7,
    SMSG_FEATURE_SYSTEM_STATUS                      = 0x3C8,
    CMSG_GM_SHOW_COMPLAINTS                         = 0x3C9,
    CMSG_GM_UNSQUELCH                               = 0x3CA,
    CMSG_CHANNEL_SILENCE_VOICE                      = 0x3CB,
    CMSG_CHANNEL_SILENCE_ALL                        = 0x3CC,
    CMSG_CHANNEL_UNSILENCE_VOICE                    = 0x3CD,
    CMSG_CHANNEL_UNSILENCE_ALL                      = 0x3CE,
    CMSG_TARGET_CAST                                = 0x3CF,
    CMSG_TARGET_SCRIPT_CAST                         = 0x3D0,
    CMSG_CHANNEL_DISPLAY_LIST                       = 0x3D1,
    CMSG_SET_ACTIVE_VOICE_CHANNEL                   = 0x3D2,
    CMSG_GET_CHANNEL_MEMBER_COUNT                   = 0x3D3,
    SMSG_CHANNEL_MEMBER_COUNT                       = 0x3D4,
    CMSG_CHANNEL_VOICE_ON                           = 0x3D5,
    CMSG_CHANNEL_VOICE_OFF                          = 0x3D6,
    CMSG_DEBUG_LIST_TARGETS                         = 0x3D7,
    SMSG_DEBUG_LIST_TARGETS                         = 0x3D8,
    SMSG_AVAILABLE_VOICE_CHANNEL                    = 0x3D9,
    CMSG_ADD_VOICE_IGNORE                           = 0x3DA,
    CMSG_DEL_VOICE_IGNORE                           = 0x3DB,
    CMSG_PARTY_SILENCE                              = 0x3DC,
    CMSG_PARTY_UNSILENCE                            = 0x3DD,
    MSG_NOTIFY_PARTY_SQUELCH                        = 0x3DE,
    SMSG_COMSAT_RECONNECT_TRY                       = 0x3DF,
    SMSG_COMSAT_DISCONNECT                          = 0x3E0,
    SMSG_COMSAT_CONNECT_FAIL                        = 0x3E1,
    SMSG_VOICE_CHAT_STATUS                          = 0x3E2,
    CMSG_REPORT_PVP_AFK                             = 0x3E3,
    CMSG_REPORT_PVP_AFK_RESULT                      = 0x3E4,
    CMSG_GUILD_BANKER_ACTIVATE                      = 0x3E5,
    CMSG_GUILD_BANK_QUERY_TAB                       = 0x3E6,
    SMSG_GUILD_BANK_LIST                            = 0x3E7,
    CMSG_GUILD_BANK_SWAP_ITEMS                      = 0x3E8,
    CMSG_GUILD_BANK_BUY_TAB                         = 0x3E9,
    CMSG_GUILD_BANK_UPDATE_TAB                      = 0x3EA,
    CMSG_GUILD_BANK_DEPOSIT_MONEY                   = 0x3EB,
    CMSG_GUILD_BANK_WITHDRAW_MONEY                  = 0x3EC,
    MSG_GUILD_BANK_LOG_QUERY                        = 0x3ED,
    CMSG_SET_CHANNEL_WATCH                          = 0x3EE,
    SMSG_USERLIST_ADD                               = 0x3EF,
    SMSG_USERLIST_REMOVE                            = 0x3F0,
    SMSG_USERLIST_UPDATE                            = 0x3F1,
    CMSG_CLEAR_CHANNEL_WATCH                        = 0x3F2,
    SMSG_INSPECT_TALENT                             = 0x3F3,
    SMSG_GOGOGO_OBSOLETE                            = 0x3F4,
    SMSG_ECHO_PARTY_SQUELCH                         = 0x3F5,
    CMSG_SET_TITLE_SUFFIX                           = 0x3F6,
    CMSG_SPELLCLICK                                 = 0x3F7,
    SMSG_LOOT_LIST                                  = 0x3F8,
    CMSG_GM_CHARACTER_RESTORE                       = 0x3F9,
    CMSG_GM_CHARACTER_SAVE                          = 0x3FA,
    SMSG_VOICESESSION_FULL                          = 0x3FB,
    MSG_GUILD_PERMISSIONS                           = 0x3FC,
    MSG_GUILD_BANK_MONEY_WITHDRAWN                  = 0x3FD,
    MSG_GUILD_EVENT_LOG_QUERY                       = 0x3FE,
    CMSG_MAELSTROM_RENAME_GUILD                     = 0x3FF,
    CMSG_GET_MIRRORIMAGE_DATA                       = 0x400,
    SMSG_MIRRORIMAGE_DATA                           = 0x401,
    SMSG_FORCE_DISPLAY_UPDATE                       = 0x402,
    SMSG_SPELL_CHANCE_RESIST_PUSHBACK               = 0x403,
    CMSG_IGNORE_DIMINISHING_RETURNS_CHEAT           = 0x404,
    SMSG_IGNORE_DIMINISHING_RETURNS_CHEAT           = 0x405,
    CMSG_KEEP_ALIVE                                 = 0x406,
    SMSG_RAID_READY_CHECK_ERROR                     = 0x407,
    CMSG_OPT_OUT_OF_LOOT                            = 0x408,
    MSG_QUERY_GUILD_BANK_TEXT                       = 0x409,
    CMSG_SET_GUILD_BANK_TEXT                        = 0x40A,
    CMSG_SET_GRANTABLE_LEVELS                       = 0x40B,
    CMSG_GRANT_LEVEL                                = 0x40C,
    CMSG_REFER_A_FRIEND                             = 0x40D,
    MSG_GM_CHANGE_ARENA_RATING                      = 0x40E,
    CMSG_DECLINE_CHANNEL_INVITE                     = 0x40F,
    CMSG_GROUPACTION_THROTTLED                      = 0x410,
    SMSG_OVERRIDE_LIGHT                             = 0x411,
    SMSG_TOTEM_CREATED                              = 0x412,
    CMSG_TOTEM_DESTROYED                            = 0x413,
    CMSG_EXPIRE_RAID_INSTANCE                       = 0x414,
    CMSG_NO_SPELL_VARIANCE                          = 0x415,
    CMSG_QUESTGIVER_STATUS_MULTIPLE_QUERY           = 0x416,
    SMSG_QUESTGIVER_STATUS_MULTIPLE                 = 0x417,
    CMSG_SET_PLAYER_DECLINED_NAMES                  = 0x418,
    SMSG_SET_PLAYER_DECLINED_NAMES_RESULT           = 0x419,
    CMSG_QUERY_SERVER_BUCK_DATA                     = 0x41A,
    CMSG_CLEAR_SERVER_BUCK_DATA                     = 0x41B,
    SMSG_SERVER_BUCK_DATA                           = 0x41C,
    SMSG_SEND_UNLEARN_SPELLS                        = 0x41D,
    SMSG_PROPOSE_LEVEL_GRANT                        = 0x41E,
    CMSG_ACCEPT_LEVEL_GRANT                         = 0x41F,
    SMSG_REFER_A_FRIEND_FAILURE                     = 0x420,
    SMSG_SPLINE_MOVE_SET_FLYING                     = 0x421,
    SMSG_SPLINE_MOVE_UNSET_FLYING                   = 0x422,
    SMSG_SUMMON_CANCEL                              = 0x423
};
std::string getopcodebycode(unsigned int opcode)
{
  std::string opcodename;
switch (opcode)
  {
  case 0:
    opcodename = "MSG_NULL_ACTION";
    break;
  case 1:
    opcodename = "CMSG_BOOTME";
    break;
  case 2:
    opcodename = "CMSG_DBLOOKUP";
    break;
  case 3:
    opcodename = "SMSG_DBLOOKUP";
    break;
  case 4:
    opcodename = "CMSG_QUERY_OBJECT_POSITION";
    break;
  case 5:
    opcodename = "SMSG_QUERY_OBJECT_POSITION";
    break;
  case 6:
    opcodename = "CMSG_QUERY_OBJECT_ROTATION";
    break;
  case 7:
    opcodename = "SMSG_QUERY_OBJECT_ROTATION";
    break;
  case 8:
    opcodename = "CMSG_WORLD_TELEPORT";
    break;
  case 9:
    opcodename = "CMSG_TELEPORT_TO_UNIT";
    break;
  case 10:
    opcodename = "CMSG_ZONE_MAP";
    break;
  case 11:
    opcodename = "SMSG_ZONE_MAP";
    break;
  case 12:
    opcodename = "CMSG_DEBUG_CHANGECELLZONE";
    break;
  case 13:
    opcodename = "CMSG_EMBLAZON_TABARD_OBSOLETE";
    break;
  case 14:
    opcodename = "CMSG_UNEMBLAZON_TABARD_OBSOLETE";
    break;
  case 15:
    opcodename = "CMSG_RECHARGE";
    break;
  case 16:
    opcodename = "CMSG_LEARN_SPELL";
    break;
  case 17:
    opcodename = "CMSG_CREATEMONSTER";
    break;
  case 18:
    opcodename = "CMSG_DESTROYMONSTER";
    break;
  case 19:
    opcodename = "CMSG_CREATEITEM";
    break;
  case 20:
    opcodename = "CMSG_CREATEGAMEOBJECT";
    break;
  case 21:
    opcodename = "SMSG_CHECK_FOR_BOTS";
    break;
  case 22:
    opcodename = "CMSG_MAKEMONSTERATTACKGUID";
    break;
  case 23:
    opcodename = "CMSG_BOT_DETECTED2";
    break;
  case 24:
    opcodename = "CMSG_FORCEACTION";
    break;
  case 25:
    opcodename = "CMSG_FORCEACTIONONOTHER";
    break;
  case 26:
    opcodename = "CMSG_FORCEACTIONSHOW";
    break;
  case 27:
    opcodename = "SMSG_FORCEACTIONSHOW";
    break;
  case 28:
    opcodename = "CMSG_PETGODMODE";
    break;
  case 29:
    opcodename = "SMSG_PETGODMODE";
    break;
  case 30:
    opcodename = "SMSG_DEBUGINFOSPELLMISS_OBSOLETE";
    break;
  case 31:
    opcodename = "CMSG_WEATHER_SPEED_CHEAT";
    break;
  case 32:
    opcodename = "CMSG_UNDRESSPLAYER";
    break;
  case 33:
    opcodename = "CMSG_BEASTMASTER";
    break;
  case 34:
    opcodename = "CMSG_GODMODE";
    break;
  case 35:
    opcodename = "SMSG_GODMODE";
    break;
  case 36:
    opcodename = "CMSG_CHEAT_SETMONEY";
    break;
  case 37:
    opcodename = "CMSG_LEVEL_CHEAT";
    break;
  case 38:
    opcodename = "CMSG_PET_LEVEL_CHEAT";
    break;
  case 39:
    opcodename = "CMSG_SET_WORLDSTATE";
    break;
  case 40:
    opcodename = "CMSG_COOLDOWN_CHEAT";
    break;
  case 41:
    opcodename = "CMSG_USE_SKILL_CHEAT";
    break;
  case 42:
    opcodename = "CMSG_FLAG_QUEST";
    break;
  case 43:
    opcodename = "CMSG_FLAG_QUEST_FINISH";
    break;
  case 44:
    opcodename = "CMSG_CLEAR_QUEST";
    break;
  case 45:
    opcodename = "CMSG_SEND_EVENT";
    break;
  case 46:
    opcodename = "CMSG_DEBUG_AISTATE";
    break;
  case 47:
    opcodename = "SMSG_DEBUG_AISTATE";
    break;
  case 48:
    opcodename = "CMSG_DISABLE_PVP_CHEAT";
    break;
  case 49:
    opcodename = "CMSG_ADVANCE_SPAWN_TIME";
    break;
  case 50:
    opcodename = "CMSG_PVP_PORT_OBSOLETE";
    break;
  case 51:
    opcodename = "CMSG_AUTH_SRP6_BEGIN";
    break;
  case 52:
    opcodename = "CMSG_AUTH_SRP6_PROOF";
    break;
  case 53:
    opcodename = "CMSG_AUTH_SRP6_RECODE";
    break;
  case 54:
    opcodename = "CMSG_CHAR_CREATE";
    break;
  case 55:
    opcodename = "CMSG_CHAR_ENUM";
    break;
  case 56:
    opcodename = "CMSG_CHAR_DELETE";
    break;
  case 57:
    opcodename = "SMSG_AUTH_SRP6_RESPONSE";
    break;
  case 58:
    opcodename = "SMSG_CHAR_CREATE";
    break;
  case 59:
    opcodename = "SMSG_CHAR_ENUM";
    break;
  case 60:
    opcodename = "SMSG_CHAR_DELETE";
    break;
  case 61:
    opcodename = "CMSG_PLAYER_LOGIN";
    break;
  case 62:
    opcodename = "SMSG_NEW_WORLD";
    break;
  case 63:
    opcodename = "SMSG_TRANSFER_PENDING";
    break;
  case 64:
    opcodename = "SMSG_TRANSFER_ABORTED";
    break;
  case 65:
    opcodename = "SMSG_CHARACTER_LOGIN_FAILED";
    break;
  case 66:
    opcodename = "SMSG_LOGIN_SETTIMESPEED";
    break;
  case 67:
    opcodename = "SMSG_GAMETIME_UPDATE";
    break;
  case 68:
    opcodename = "CMSG_GAMETIME_SET";
    break;
  case 69:
    opcodename = "SMSG_GAMETIME_SET";
    break;
  case 70:
    opcodename = "CMSG_GAMESPEED_SET";
    break;
  case 71:
    opcodename = "SMSG_GAMESPEED_SET";
    break;
  case 72:
    opcodename = "CMSG_SERVERTIME";
    break;
  case 73:
    opcodename = "SMSG_SERVERTIME";
    break;
  case 74:
    opcodename = "CMSG_PLAYER_LOGOUT";
    break;
  case 75:
    opcodename = "CMSG_LOGOUT_REQUEST";
    break;
  case 76:
    opcodename = "SMSG_LOGOUT_RESPONSE";
    break;
  case 77:
    opcodename = "SMSG_LOGOUT_COMPLETE";
    break;
  case 78:
    opcodename = "CMSG_LOGOUT_CANCEL";
    break;
  case 79:
    opcodename = "SMSG_LOGOUT_CANCEL_ACK";
    break;
  case 80:
    opcodename = "CMSG_NAME_QUERY";
    break;
  case 81:
    opcodename = "SMSG_NAME_QUERY_RESPONSE";
    break;
  case 82:
    opcodename = "CMSG_PET_NAME_QUERY";
    break;
  case 83:
    opcodename = "SMSG_PET_NAME_QUERY_RESPONSE";
    break;
  case 84:
    opcodename = "CMSG_GUILD_QUERY";
    break;
  case 85:
    opcodename = "SMSG_GUILD_QUERY_RESPONSE";
    break;
  case 86:
    opcodename = "CMSG_ITEM_QUERY_SINGLE";
    break;
  case 87:
    opcodename = "CMSG_ITEM_QUERY_MULTIPLE";
    break;
  case 88:
    opcodename = "SMSG_ITEM_QUERY_SINGLE_RESPONSE";
    break;
  case 89:
    opcodename = "SMSG_ITEM_QUERY_MULTIPLE_RESPONSE";
    break;
  case 90:
    opcodename = "CMSG_PAGE_TEXT_QUERY";
    break;
  case 91:
    opcodename = "SMSG_PAGE_TEXT_QUERY_RESPONSE";
    break;
  case 92:
    opcodename = "CMSG_QUEST_QUERY";
    break;
  case 93:
    opcodename = "SMSG_QUEST_QUERY_RESPONSE";
    break;
  case 94:
    opcodename = "CMSG_GAMEOBJECT_QUERY";
    break;
  case 95:
    opcodename = "SMSG_GAMEOBJECT_QUERY_RESPONSE";
    break;
  case 96:
    opcodename = "CMSG_CREATURE_QUERY";
    break;
  case 97:
    opcodename = "SMSG_CREATURE_QUERY_RESPONSE";
    break;
  case 98:
    opcodename = "CMSG_WHO";
    break;
  case 99:
    opcodename = "SMSG_WHO";
    break;
  case 100:
    opcodename = "CMSG_WHOIS";
    break;
  case 101:
    opcodename = "SMSG_WHOIS";
    break;
  case 102:
    opcodename = "CMSG_CONTACT_LIST";
    break;
  case 103:
    opcodename = "SMSG_CONTACT_LIST";
    break;
  case 104:
    opcodename = "SMSG_FRIEND_STATUS";
    break;
  case 105:
    opcodename = "CMSG_ADD_FRIEND";
    break;
  case 106:
    opcodename = "CMSG_DEL_FRIEND";
    break;
  case 107:
    opcodename = "CMSG_SET_CONTACT_NOTES";
    break;
  case 108:
    opcodename = "CMSG_ADD_IGNORE";
    break;
  case 109:
    opcodename = "CMSG_DEL_IGNORE";
    break;
  case 110:
    opcodename = "CMSG_GROUP_INVITE";
    break;
  case 111:
    opcodename = "SMSG_GROUP_INVITE";
    break;
  case 112:
    opcodename = "CMSG_GROUP_CANCEL";
    break;
  case 113:
    opcodename = "SMSG_GROUP_CANCEL";
    break;
  case 114:
    opcodename = "CMSG_GROUP_ACCEPT";
    break;
  case 115:
    opcodename = "CMSG_GROUP_DECLINE";
    break;
  case 116:
    opcodename = "SMSG_GROUP_DECLINE";
    break;
  case 117:
    opcodename = "CMSG_GROUP_UNINVITE";
    break;
  case 118:
    opcodename = "CMSG_GROUP_UNINVITE_GUID";
    break;
  case 119:
    opcodename = "SMSG_GROUP_UNINVITE";
    break;
  case 120:
    opcodename = "CMSG_GROUP_SET_LEADER";
    break;
  case 121:
    opcodename = "SMSG_GROUP_SET_LEADER";
    break;
  case 122:
    opcodename = "CMSG_LOOT_METHOD";
    break;
  case 123:
    opcodename = "CMSG_GROUP_DISBAND";
    break;
  case 124:
    opcodename = "SMSG_GROUP_DESTROYED";
    break;
  case 125:
    opcodename = "SMSG_GROUP_LIST";
    break;
  case 126:
    opcodename = "SMSG_PARTY_MEMBER_STATS";
    break;
  case 127:
    opcodename = "SMSG_PARTY_COMMAND_RESULT";
    break;
  case 128:
    opcodename = "UMSG_UPDATE_GROUP_MEMBERS";
    break;
  case 129:
    opcodename = "CMSG_GUILD_CREATE";
    break;
  case 130:
    opcodename = "CMSG_GUILD_INVITE";
    break;
  case 131:
    opcodename = "SMSG_GUILD_INVITE";
    break;
  case 132:
    opcodename = "CMSG_GUILD_ACCEPT";
    break;
  case 133:
    opcodename = "CMSG_GUILD_DECLINE";
    break;
  case 134:
    opcodename = "SMSG_GUILD_DECLINE";
    break;
  case 135:
    opcodename = "CMSG_GUILD_INFO";
    break;
  case 136:
    opcodename = "SMSG_GUILD_INFO";
    break;
  case 137:
    opcodename = "CMSG_GUILD_ROSTER";
    break;
  case 138:
    opcodename = "SMSG_GUILD_ROSTER";
    break;
  case 139:
    opcodename = "CMSG_GUILD_PROMOTE";
    break;
  case 140:
    opcodename = "CMSG_GUILD_DEMOTE";
    break;
  case 141:
    opcodename = "CMSG_GUILD_LEAVE";
    break;
  case 142:
    opcodename = "CMSG_GUILD_REMOVE";
    break;
  case 143:
    opcodename = "CMSG_GUILD_DISBAND";
    break;
  case 144:
    opcodename = "CMSG_GUILD_LEADER";
    break;
  case 145:
    opcodename = "CMSG_GUILD_MOTD";
    break;
  case 146:
    opcodename = "SMSG_GUILD_EVENT";
    break;
  case 147:
    opcodename = "SMSG_GUILD_COMMAND_RESULT";
    break;
  case 148:
    opcodename = "UMSG_UPDATE_GUILD";
    break;
  case 149:
    opcodename = "CMSG_MESSAGECHAT";
    break;
  case 150:
    opcodename = "SMSG_MESSAGECHAT";
    break;
  case 151:
    opcodename = "CMSG_JOIN_CHANNEL";
    break;
  case 152:
    opcodename = "CMSG_LEAVE_CHANNEL";
    break;
  case 153:
    opcodename = "SMSG_CHANNEL_NOTIFY";
    break;
  case 154:
    opcodename = "CMSG_CHANNEL_LIST";
    break;
  case 155:
    opcodename = "SMSG_CHANNEL_LIST";
    break;
  case 156:
    opcodename = "CMSG_CHANNEL_PASSWORD";
    break;
  case 157:
    opcodename = "CMSG_CHANNEL_SET_OWNER";
    break;
  case 158:
    opcodename = "CMSG_CHANNEL_OWNER";
    break;
  case 159:
    opcodename = "CMSG_CHANNEL_MODERATOR";
    break;
  case 160:
    opcodename = "CMSG_CHANNEL_UNMODERATOR";
    break;
  case 161:
    opcodename = "CMSG_CHANNEL_MUTE";
    break;
  case 162:
    opcodename = "CMSG_CHANNEL_UNMUTE";
    break;
  case 163:
    opcodename = "CMSG_CHANNEL_INVITE";
    break;
  case 164:
    opcodename = "CMSG_CHANNEL_KICK";
    break;
  case 165:
    opcodename = "CMSG_CHANNEL_BAN";
    break;
  case 166:
    opcodename = "CMSG_CHANNEL_UNBAN";
    break;
  case 167:
    opcodename = "CMSG_CHANNEL_ANNOUNCEMENTS";
    break;
  case 168:
    opcodename = "CMSG_CHANNEL_MODERATE";
    break;
  case 169:
    opcodename = "SMSG_UPDATE_OBJECT";
    break;
  case 170:
    opcodename = "SMSG_DESTROY_OBJECT";
    break;
  case 171:
    opcodename = "CMSG_USE_ITEM";
    break;
  case 172:
    opcodename = "CMSG_OPEN_ITEM";
    break;
  case 173:
    opcodename = "CMSG_READ_ITEM";
    break;
  case 174:
    opcodename = "SMSG_READ_ITEM_OK";
    break;
  case 175:
    opcodename = "SMSG_READ_ITEM_FAILED";
    break;
  case 176:
    opcodename = "SMSG_ITEM_COOLDOWN";
    break;
  case 177:
    opcodename = "CMSG_GAMEOBJ_USE";
    break;
  case 178:
    opcodename = "CMSG_GAMEOBJ_CHAIR_USE_OBSOLETE";
    break;
  case 179:
    opcodename = "SMSG_GAMEOBJECT_CUSTOM_ANIM";
    break;
  case 180:
    opcodename = "CMSG_AREATRIGGER";
    break;
  case 181:
    opcodename = "MSG_MOVE_START_FORWARD";
    break;
  case 182:
    opcodename = "MSG_MOVE_START_BACKWARD";
    break;
  case 183:
    opcodename = "MSG_MOVE_STOP";
    break;
  case 184:
    opcodename = "MSG_MOVE_START_STRAFE_LEFT";
    break;
  case 185:
    opcodename = "MSG_MOVE_START_STRAFE_RIGHT";
    break;
  case 186:
    opcodename = "MSG_MOVE_STOP_STRAFE";
    break;
  case 187:
    opcodename = "MSG_MOVE_JUMP";
    break;
  case 188:
    opcodename = "MSG_MOVE_START_TURN_LEFT";
    break;
  case 189:
    opcodename = "MSG_MOVE_START_TURN_RIGHT";
    break;
  case 190:
    opcodename = "MSG_MOVE_STOP_TURN";
    break;
  case 191:
    opcodename = "MSG_MOVE_START_PITCH_UP";
    break;
  case 192:
    opcodename = "MSG_MOVE_START_PITCH_DOWN";
    break;
  case 193:
    opcodename = "MSG_MOVE_STOP_PITCH";
    break;
  case 194:
    opcodename = "MSG_MOVE_SET_RUN_MODE";
    break;
  case 195:
    opcodename = "MSG_MOVE_SET_WALK_MODE";
    break;
  case 196:
    opcodename = "MSG_MOVE_TOGGLE_LOGGING";
    break;
  case 197:
    opcodename = "MSG_MOVE_TELEPORT";
    break;
  case 198:
    opcodename = "MSG_MOVE_TELEPORT_CHEAT";
    break;
  case 199:
    opcodename = "MSG_MOVE_TELEPORT_ACK";
    break;
  case 200:
    opcodename = "MSG_MOVE_TOGGLE_FALL_LOGGING";
    break;
  case 201:
    opcodename = "MSG_MOVE_FALL_LAND";
    break;
  case 202:
    opcodename = "MSG_MOVE_START_SWIM";
    break;
  case 203:
    opcodename = "MSG_MOVE_STOP_SWIM";
    break;
  case 204:
    opcodename = "MSG_MOVE_SET_RUN_SPEED_CHEAT";
    break;
  case 205:
    opcodename = "MSG_MOVE_SET_RUN_SPEED";
    break;
  case 206:
    opcodename = "MSG_MOVE_SET_RUN_BACK_SPEED_CHEAT";
    break;
  case 207:
    opcodename = "MSG_MOVE_SET_RUN_BACK_SPEED";
    break;
  case 208:
    opcodename = "MSG_MOVE_SET_WALK_SPEED_CHEAT";
    break;
  case 209:
    opcodename = "MSG_MOVE_SET_WALK_SPEED";
    break;
  case 210:
    opcodename = "MSG_MOVE_SET_SWIM_SPEED_CHEAT";
    break;
  case 211:
    opcodename = "MSG_MOVE_SET_SWIM_SPEED";
    break;
  case 212:
    opcodename = "MSG_MOVE_SET_SWIM_BACK_SPEED_CHEAT";
    break;
  case 213:
    opcodename = "MSG_MOVE_SET_SWIM_BACK_SPEED";
    break;
  case 214:
    opcodename = "MSG_MOVE_SET_ALL_SPEED_CHEAT";
    break;
  case 215:
    opcodename = "MSG_MOVE_SET_TURN_RATE_CHEAT";
    break;
  case 216:
    opcodename = "MSG_MOVE_SET_TURN_RATE";
    break;
  case 217:
    opcodename = "MSG_MOVE_TOGGLE_COLLISION_CHEAT";
    break;
  case 218:
    opcodename = "MSG_MOVE_SET_FACING";
    break;
  case 219:
    opcodename = "MSG_MOVE_SET_PITCH";
    break;
  case 220:
    opcodename = "MSG_MOVE_WORLDPORT_ACK";
    break;
  case 221:
    opcodename = "SMSG_MONSTER_MOVE";
    break;
  case 222:
    opcodename = "SMSG_MOVE_WATER_WALK";
    break;
  case 223:
    opcodename = "SMSG_MOVE_LAND_WALK";
    break;
  case 224:
    opcodename = "MSG_MOVE_SET_RAW_POSITION_ACK";
    break;
  case 225:
    opcodename = "CMSG_MOVE_SET_RAW_POSITION";
    break;
  case 226:
    opcodename = "SMSG_FORCE_RUN_SPEED_CHANGE";
    break;
  case 227:
    opcodename = "CMSG_FORCE_RUN_SPEED_CHANGE_ACK";
    break;
  case 228:
    opcodename = "SMSG_FORCE_RUN_BACK_SPEED_CHANGE";
    break;
  case 229:
    opcodename = "CMSG_FORCE_RUN_BACK_SPEED_CHANGE_ACK";
    break;
  case 230:
    opcodename = "SMSG_FORCE_SWIM_SPEED_CHANGE";
    break;
  case 231:
    opcodename = "CMSG_FORCE_SWIM_SPEED_CHANGE_ACK";
    break;
  case 232:
    opcodename = "SMSG_FORCE_MOVE_ROOT";
    break;
  case 233:
    opcodename = "CMSG_FORCE_MOVE_ROOT_ACK";
    break;
  case 234:
    opcodename = "SMSG_FORCE_MOVE_UNROOT";
    break;
  case 235:
    opcodename = "CMSG_FORCE_MOVE_UNROOT_ACK";
    break;
  case 236:
    opcodename = "MSG_MOVE_ROOT";
    break;
  case 237:
    opcodename = "MSG_MOVE_UNROOT";
    break;
  case 238:
    opcodename = "MSG_MOVE_HEARTBEAT";
    break;
  case 239:
    opcodename = "SMSG_MOVE_KNOCK_BACK";
    break;
  case 240:
    opcodename = "CMSG_MOVE_KNOCK_BACK_ACK";
    break;
  case 241:
    opcodename = "MSG_MOVE_KNOCK_BACK";
    break;
  case 242:
    opcodename = "SMSG_MOVE_FEATHER_FALL";
    break;
  case 243:
    opcodename = "SMSG_MOVE_NORMAL_FALL";
    break;
  case 244:
    opcodename = "SMSG_MOVE_SET_HOVER";
    break;
  case 245:
    opcodename = "SMSG_MOVE_UNSET_HOVER";
    break;
  case 246:
    opcodename = "CMSG_MOVE_HOVER_ACK";
    break;
  case 247:
    opcodename = "MSG_MOVE_HOVER";
    break;
  case 248:
    opcodename = "CMSG_TRIGGER_CINEMATIC_CHEAT";
    break;
  case 249:
    opcodename = "CMSG_OPENING_CINEMATIC";
    break;
  case 250:
    opcodename = "SMSG_TRIGGER_CINEMATIC";
    break;
  case 251:
    opcodename = "CMSG_NEXT_CINEMATIC_CAMERA";
    break;
  case 252:
    opcodename = "CMSG_COMPLETE_CINEMATIC";
    break;
  case 253:
    opcodename = "SMSG_TUTORIAL_FLAGS";
    break;
  case 254:
    opcodename = "CMSG_TUTORIAL_FLAG";
    break;
  case 255:
    opcodename = "CMSG_TUTORIAL_CLEAR";
    break;
  case 256:
    opcodename = "CMSG_TUTORIAL_RESET";
    break;
  case 257:
    opcodename = "CMSG_STANDSTATECHANGE";
    break;
  case 258:
    opcodename = "CMSG_EMOTE";
    break;
  case 259:
    opcodename = "SMSG_EMOTE";
    break;
  case 260:
    opcodename = "CMSG_TEXT_EMOTE";
    break;
  case 261:
    opcodename = "SMSG_TEXT_EMOTE";
    break;
  case 262:
    opcodename = "CMSG_AUTOEQUIP_GROUND_ITEM";
    break;
  case 263:
    opcodename = "CMSG_AUTOSTORE_GROUND_ITEM";
    break;
  case 264:
    opcodename = "CMSG_AUTOSTORE_LOOT_ITEM";
    break;
  case 265:
    opcodename = "CMSG_STORE_LOOT_IN_SLOT";
    break;
  case 266:
    opcodename = "CMSG_AUTOEQUIP_ITEM";
    break;
  case 267:
    opcodename = "CMSG_AUTOSTORE_BAG_ITEM";
    break;
  case 268:
    opcodename = "CMSG_SWAP_ITEM";
    break;
  case 269:
    opcodename = "CMSG_SWAP_INV_ITEM";
    break;
  case 270:
    opcodename = "CMSG_SPLIT_ITEM";
    break;
  case 271:
    opcodename = "CMSG_AUTOEQUIP_ITEM_SLOT";
    break;
  case 273:
    opcodename = "CMSG_DESTROYITEM";
    break;
  case 274:
    opcodename = "SMSG_INVENTORY_CHANGE_FAILURE";
    break;
  case 275:
    opcodename = "SMSG_OPEN_CONTAINER";
    break;
  case 276:
    opcodename = "CMSG_INSPECT";
    break;
  case 277:
    opcodename = "SMSG_INSPECT";
    break;
  case 278:
    opcodename = "CMSG_INITIATE_TRADE";
    break;
  case 279:
    opcodename = "CMSG_BEGIN_TRADE";
    break;
  case 280:
    opcodename = "CMSG_BUSY_TRADE";
    break;
  case 281:
    opcodename = "CMSG_IGNORE_TRADE";
    break;
  case 282:
    opcodename = "CMSG_ACCEPT_TRADE";
    break;
  case 283:
    opcodename = "CMSG_UNACCEPT_TRADE";
    break;
  case 284:
    opcodename = "CMSG_CANCEL_TRADE";
    break;
  case 285:
    opcodename = "CMSG_SET_TRADE_ITEM";
    break;
  case 286:
    opcodename = "CMSG_CLEAR_TRADE_ITEM";
    break;
  case 287:
    opcodename = "CMSG_SET_TRADE_GOLD";
    break;
  case 288:
    opcodename = "SMSG_TRADE_STATUS";
    break;
  case 289:
    opcodename = "SMSG_TRADE_STATUS_EXTENDED";
    break;
  case 290:
    opcodename = "SMSG_INITIALIZE_FACTIONS";
    break;
  case 291:
    opcodename = "SMSG_SET_FACTION_VISIBLE";
    break;
  case 292:
    opcodename = "SMSG_SET_FACTION_STANDING";
    break;
  case 293:
    opcodename = "CMSG_SET_FACTION_ATWAR";
    break;
  case 294:
    opcodename = "CMSG_SET_FACTION_CHEAT";
    break;
  case 295:
    opcodename = "SMSG_SET_PROFICIENCY";
    break;
  case 296:
    opcodename = "CMSG_SET_ACTION_BUTTON";
    break;
  case 297:
    opcodename = "SMSG_ACTION_BUTTONS";
    break;
  case 298:
    opcodename = "SMSG_INITIAL_SPELLS";
    break;
  case 299:
    opcodename = "SMSG_LEARNED_SPELL";
    break;
  case 300:
    opcodename = "SMSG_SUPERCEDED_SPELL";
    break;
  case 301:
    opcodename = "CMSG_NEW_SPELL_SLOT";
    break;
  case 302:
    opcodename = "CMSG_CAST_SPELL";
    break;
  case 303:
    opcodename = "CMSG_CANCEL_CAST";
    break;
  case 304:
    opcodename = "SMSG_CAST_FAILED";
    break;
  case 305:
    opcodename = "SMSG_SPELL_START";
    break;
  case 306:
    opcodename = "SMSG_SPELL_GO";
    break;
  case 307:
    opcodename = "SMSG_SPELL_FAILURE";
    break;
  case 308:
    opcodename = "SMSG_SPELL_COOLDOWN";
    break;
  case 309:
    opcodename = "SMSG_COOLDOWN_EVENT";
    break;
  case 310:
    opcodename = "CMSG_CANCEL_AURA";
    break;
  case 311:
    opcodename = "SMSG_UPDATE_AURA_DURATION";
    break;
  case 312:
    opcodename = "SMSG_PET_CAST_FAILED";
    break;
  case 313:
    opcodename = "MSG_CHANNEL_START";
    break;
  case 314:
    opcodename = "MSG_CHANNEL_UPDATE";
    break;
  case 315:
    opcodename = "CMSG_CANCEL_CHANNELLING";
    break;
  case 316:
    opcodename = "SMSG_AI_REACTION";
    break;
  case 317:
    opcodename = "CMSG_SET_SELECTION";
    break;
  case 318:
    opcodename = "CMSG_SET_TARGET_OBSOLETE";
    break;
  case 319:
    opcodename = "CMSG_UNUSED";
    break;
  case 320:
    opcodename = "CMSG_UNUSED2";
    break;
  case 321:
    opcodename = "CMSG_ATTACKSWING";
    break;
  case 322:
    opcodename = "CMSG_ATTACKSTOP";
    break;
  case 323:
    opcodename = "SMSG_ATTACKSTART";
    break;
  case 324:
    opcodename = "SMSG_ATTACKSTOP";
    break;
  case 325:
    opcodename = "SMSG_ATTACKSWING_NOTINRANGE";
    break;
  case 326:
    opcodename = "SMSG_ATTACKSWING_BADFACING";
    break;
  case 327:
    opcodename = "SMSG_ATTACKSWING_NOTSTANDING";
    break;
  case 328:
    opcodename = "SMSG_ATTACKSWING_DEADTARGET";
    break;
  case 329:
    opcodename = "SMSG_ATTACKSWING_CANT_ATTACK";
    break;
  case 330:
    opcodename = "SMSG_ATTACKERSTATEUPDATE";
    break;
  case 331:
    opcodename = "SMSG_VICTIMSTATEUPDATE_OBSOLETE";
    break;
  case 332:
    opcodename = "SMSG_DAMAGE_DONE_OBSOLETE";
    break;
  case 333:
    opcodename = "SMSG_DAMAGE_TAKEN_OBSOLETE";
    break;
  case 334:
    opcodename = "SMSG_CANCEL_COMBAT";
    break;
  case 335:
    opcodename = "SMSG_PLAYER_COMBAT_XP_GAIN_OBSOLETE";
    break;
  case 336:
    opcodename = "SMSG_SPELLHEALLOG";
    break;
  case 337:
    opcodename = "SMSG_SPELLENERGIZELOG";
    break;
  case 338:
    opcodename = "CMSG_SHEATHE_OBSOLETE";
    break;
  case 339:
    opcodename = "CMSG_SAVE_PLAYER";
    break;
  case 340:
    opcodename = "CMSG_SETDEATHBINDPOINT";
    break;
  case 341:
    opcodename = "SMSG_BINDPOINTUPDATE";
    break;
  case 342:
    opcodename = "CMSG_GETDEATHBINDZONE";
    break;
  case 343:
    opcodename = "SMSG_BINDZONEREPLY";
    break;
  case 344:
    opcodename = "SMSG_PLAYERBOUND";
    break;
  case 345:
    opcodename = "SMSG_CLIENT_CONTROL_UPDATE";
    break;
  case 346:
    opcodename = "CMSG_REPOP_REQUEST";
    break;
  case 347:
    opcodename = "SMSG_RESURRECT_REQUEST";
    break;
  case 348:
    opcodename = "CMSG_RESURRECT_RESPONSE";
    break;
  case 349:
    opcodename = "CMSG_LOOT";
    break;
  case 350:
    opcodename = "CMSG_LOOT_MONEY";
    break;
  case 351:
    opcodename = "CMSG_LOOT_RELEASE";
    break;
  case 352:
    opcodename = "SMSG_LOOT_RESPONSE";
    break;
  case 353:
    opcodename = "SMSG_LOOT_RELEASE_RESPONSE";
    break;
  case 354:
    opcodename = "SMSG_LOOT_REMOVED";
    break;
  case 355:
    opcodename = "SMSG_LOOT_MONEY_NOTIFY";
    break;
  case 356:
    opcodename = "SMSG_LOOT_ITEM_NOTIFY";
    break;
  case 357:
    opcodename = "SMSG_LOOT_CLEAR_MONEY";
    break;
  case 358:
    opcodename = "SMSG_ITEM_PUSH_RESULT";
    break;
  case 359:
    opcodename = "SMSG_DUEL_REQUESTED";
    break;
  case 360:
    opcodename = "SMSG_DUEL_OUTOFBOUNDS";
    break;
  case 361:
    opcodename = "SMSG_DUEL_INBOUNDS";
    break;
  case 362:
    opcodename = "SMSG_DUEL_COMPLETE";
    break;
  case 363:
    opcodename = "SMSG_DUEL_WINNER";
    break;
  case 364:
    opcodename = "CMSG_DUEL_ACCEPTED";
    break;
  case 365:
    opcodename = "CMSG_DUEL_CANCELLED";
    break;
  case 366:
    opcodename = "SMSG_MOUNTRESULT";
    break;
  case 367:
    opcodename = "SMSG_DISMOUNTRESULT";
    break;
  case 368:
    opcodename = "SMSG_PUREMOUNT_CANCELLED_OBSOLETE";
    break;
  case 369:
    opcodename = "CMSG_MOUNTSPECIAL_ANIM";
    break;
  case 370:
    opcodename = "SMSG_MOUNTSPECIAL_ANIM";
    break;
  case 371:
    opcodename = "SMSG_PET_TAME_FAILURE";
    break;
  case 372:
    opcodename = "CMSG_PET_SET_ACTION";
    break;
  case 373:
    opcodename = "CMSG_PET_ACTION";
    break;
  case 374:
    opcodename = "CMSG_PET_ABANDON";
    break;
  case 375:
    opcodename = "CMSG_PET_RENAME";
    break;
  case 376:
    opcodename = "SMSG_PET_NAME_INVALID";
    break;
  case 377:
    opcodename = "SMSG_PET_SPELLS";
    break;
  case 378:
    opcodename = "SMSG_PET_MODE";
    break;
  case 379:
    opcodename = "CMSG_GOSSIP_HELLO";
    break;
  case 380:
    opcodename = "CMSG_GOSSIP_SELECT_OPTION";
    break;
  case 381:
    opcodename = "SMSG_GOSSIP_MESSAGE";
    break;
  case 382:
    opcodename = "SMSG_GOSSIP_COMPLETE";
    break;
  case 383:
    opcodename = "CMSG_NPC_TEXT_QUERY";
    break;
  case 384:
    opcodename = "SMSG_NPC_TEXT_UPDATE";
    break;
  case 385:
    opcodename = "SMSG_NPC_WONT_TALK";
    break;
  case 386:
    opcodename = "CMSG_QUESTGIVER_STATUS_QUERY";
    break;
  case 387:
    opcodename = "SMSG_QUESTGIVER_STATUS";
    break;
  case 388:
    opcodename = "CMSG_QUESTGIVER_HELLO";
    break;
  case 389:
    opcodename = "SMSG_QUESTGIVER_QUEST_LIST";
    break;
  case 390:
    opcodename = "CMSG_QUESTGIVER_QUERY_QUEST";
    break;
  case 391:
    opcodename = "CMSG_QUESTGIVER_QUEST_AUTOLAUNCH";
    break;
  case 392:
    opcodename = "SMSG_QUESTGIVER_QUEST_DETAILS";
    break;
  case 393:
    opcodename = "CMSG_QUESTGIVER_ACCEPT_QUEST";
    break;
  case 394:
    opcodename = "CMSG_QUESTGIVER_COMPLETE_QUEST";
    break;
  case 395:
    opcodename = "SMSG_QUESTGIVER_REQUEST_ITEMS";
    break;
  case 396:
    opcodename = "CMSG_QUESTGIVER_REQUEST_REWARD";
    break;
  case 397:
    opcodename = "SMSG_QUESTGIVER_OFFER_REWARD";
    break;
  case 398:
    opcodename = "CMSG_QUESTGIVER_CHOOSE_REWARD";
    break;
  case 399:
    opcodename = "SMSG_QUESTGIVER_QUEST_INVALID";
    break;
  case 400:
    opcodename = "CMSG_QUESTGIVER_CANCEL";
    break;
  case 401:
    opcodename = "SMSG_QUESTGIVER_QUEST_COMPLETE";
    break;
  case 402:
    opcodename = "SMSG_QUESTGIVER_QUEST_FAILED";
    break;
  case 403:
    opcodename = "CMSG_QUESTLOG_SWAP_QUEST";
    break;
  case 404:
    opcodename = "CMSG_QUESTLOG_REMOVE_QUEST";
    break;
  case 405:
    opcodename = "SMSG_QUESTLOG_FULL";
    break;
  case 406:
    opcodename = "SMSG_QUESTUPDATE_FAILED";
    break;
  case 407:
    opcodename = "SMSG_QUESTUPDATE_FAILEDTIMER";
    break;
  case 408:
    opcodename = "SMSG_QUESTUPDATE_COMPLETE";
    break;
  case 409:
    opcodename = "SMSG_QUESTUPDATE_ADD_KILL";
    break;
  case 410:
    opcodename = "SMSG_QUESTUPDATE_ADD_ITEM";
    break;
  case 411:
    opcodename = "CMSG_QUEST_CONFIRM_ACCEPT";
    break;
  case 412:
    opcodename = "SMSG_QUEST_CONFIRM_ACCEPT";
    break;
  case 413:
    opcodename = "CMSG_PUSHQUESTTOPARTY";
    break;
  case 414:
    opcodename = "CMSG_LIST_INVENTORY";
    break;
  case 415:
    opcodename = "SMSG_LIST_INVENTORY";
    break;
  case 416:
    opcodename = "CMSG_SELL_ITEM";
    break;
  case 417:
    opcodename = "SMSG_SELL_ITEM";
    break;
  case 418:
    opcodename = "CMSG_BUY_ITEM";
    break;
  case 419:
    opcodename = "CMSG_BUY_ITEM_IN_SLOT";
    break;
  case 420:
    opcodename = "SMSG_BUY_ITEM";
    break;
  case 421:
    opcodename = "SMSG_BUY_FAILED";
    break;
  case 422:
    opcodename = "CMSG_TAXICLEARALLNODES";
    break;
  case 423:
    opcodename = "CMSG_TAXIENABLEALLNODES";
    break;
  case 424:
    opcodename = "CMSG_TAXISHOWNODES";
    break;
  case 425:
    opcodename = "SMSG_SHOWTAXINODES";
    break;
  case 426:
    opcodename = "CMSG_TAXINODE_STATUS_QUERY";
    break;
  case 427:
    opcodename = "SMSG_TAXINODE_STATUS";
    break;
  case 428:
    opcodename = "CMSG_TAXIQUERYAVAILABLENODES";
    break;
  case 429:
    opcodename = "CMSG_ACTIVATETAXI";
    break;
  case 430:
    opcodename = "SMSG_ACTIVATETAXIREPLY";
    break;
  case 431:
    opcodename = "SMSG_NEW_TAXI_PATH";
    break;
  case 432:
    opcodename = "CMSG_TRAINER_LIST";
    break;
  case 433:
    opcodename = "SMSG_TRAINER_LIST";
    break;
  case 434:
    opcodename = "CMSG_TRAINER_BUY_SPELL";
    break;
  case 435:
    opcodename = "SMSG_TRAINER_BUY_SUCCEEDED";
    break;
  case 436:
    opcodename = "SMSG_TRAINER_BUY_FAILED";
    break;
  case 437:
    opcodename = "CMSG_BINDER_ACTIVATE";
    break;
  case 438:
    opcodename = "SMSG_PLAYERBINDERROR";
    break;
  case 439:
    opcodename = "CMSG_BANKER_ACTIVATE";
    break;
  case 440:
    opcodename = "SMSG_SHOW_BANK";
    break;
  case 441:
    opcodename = "CMSG_BUY_BANK_SLOT";
    break;
  case 442:
    opcodename = "SMSG_BUY_BANK_SLOT_RESULT";
    break;
  case 443:
    opcodename = "CMSG_PETITION_SHOWLIST";
    break;
  case 444:
    opcodename = "SMSG_PETITION_SHOWLIST";
    break;
  case 445:
    opcodename = "CMSG_PETITION_BUY";
    break;
  case 446:
    opcodename = "CMSG_PETITION_SHOW_SIGNATURES";
    break;
  case 447:
    opcodename = "SMSG_PETITION_SHOW_SIGNATURES";
    break;
  case 448:
    opcodename = "CMSG_PETITION_SIGN";
    break;
  case 449:
    opcodename = "SMSG_PETITION_SIGN_RESULTS";
    break;
  case 450:
    opcodename = "MSG_PETITION_DECLINE";
    break;
  case 451:
    opcodename = "CMSG_OFFER_PETITION";
    break;
  case 452:
    opcodename = "CMSG_TURN_IN_PETITION";
    break;
  case 453:
    opcodename = "SMSG_TURN_IN_PETITION_RESULTS";
    break;
  case 454:
    opcodename = "CMSG_PETITION_QUERY";
    break;
  case 455:
    opcodename = "SMSG_PETITION_QUERY_RESPONSE";
    break;
  case 456:
    opcodename = "SMSG_FISH_NOT_HOOKED";
    break;
  case 457:
    opcodename = "SMSG_FISH_ESCAPED";
    break;
  case 458:
    opcodename = "CMSG_BUG";
    break;
  case 459:
    opcodename = "SMSG_NOTIFICATION";
    break;
  case 460:
    opcodename = "CMSG_PLAYED_TIME";
    break;
  case 461:
    opcodename = "SMSG_PLAYED_TIME";
    break;
  case 462:
    opcodename = "CMSG_QUERY_TIME";
    break;
  case 463:
    opcodename = "SMSG_QUERY_TIME_RESPONSE";
    break;
  case 464:
    opcodename = "SMSG_LOG_XPGAIN";
    break;
  case 465:
    opcodename = "SMSG_AURACASTLOG";
    break;
  case 466:
    opcodename = "CMSG_RECLAIM_CORPSE";
    break;
  case 467:
    opcodename = "CMSG_WRAP_ITEM";
    break;
  case 468:
    opcodename = "SMSG_LEVELUP_INFO";
    break;
  case 469:
    opcodename = "MSG_MINIMAP_PING";
    break;
  case 470:
    opcodename = "SMSG_RESISTLOG";
    break;
  case 471:
    opcodename = "SMSG_ENCHANTMENTLOG";
    break;
  case 472:
    opcodename = "CMSG_SET_SKILL_CHEAT";
    break;
  case 473:
    opcodename = "SMSG_START_MIRROR_TIMER";
    break;
  case 474:
    opcodename = "SMSG_PAUSE_MIRROR_TIMER";
    break;
  case 475:
    opcodename = "SMSG_STOP_MIRROR_TIMER";
    break;
  case 476:
    opcodename = "CMSG_PING";
    break;
  case 477:
    opcodename = "SMSG_PONG";
    break;
  case 478:
    opcodename = "SMSG_CLEAR_COOLDOWN";
    break;
  case 479:
    opcodename = "SMSG_GAMEOBJECT_PAGETEXT";
    break;
  case 480:
    opcodename = "CMSG_SETSHEATHED";
    break;
  case 481:
    opcodename = "SMSG_COOLDOWN_CHEAT";
    break;
  case 482:
    opcodename = "SMSG_SPELL_DELAYED";
    break;
  case 483:
    opcodename = "CMSG_PLAYER_MACRO_OBSOLETE";
    break;
  case 484:
    opcodename = "SMSG_PLAYER_MACRO_OBSOLETE";
    break;
  case 485:
    opcodename = "CMSG_GHOST";
    break;
  case 486:
    opcodename = "CMSG_GM_INVIS";
    break;
  case 487:
    opcodename = "SMSG_INVALID_PROMOTION_CODE";
    break;
  case 488:
    opcodename = "MSG_GM_BIND_OTHER";
    break;
  case 489:
    opcodename = "MSG_GM_SUMMON";
    break;
  case 490:
    opcodename = "SMSG_ITEM_TIME_UPDATE";
    break;
  case 491:
    opcodename = "SMSG_ITEM_ENCHANT_TIME_UPDATE";
    break;
  case 492:
    opcodename = "SMSG_AUTH_CHALLENGE";
    break;
  case 493:
    opcodename = "CMSG_AUTH_SESSION";
    break;
  case 494:
    opcodename = "SMSG_AUTH_RESPONSE";
    break;
  case 495:
    opcodename = "MSG_GM_SHOWLABEL";
    break;
  case 496:
    opcodename = "CMSG_PET_CAST_SPELL";
    break;
  case 497:
    opcodename = "MSG_SAVE_GUILD_EMBLEM";
    break;
  case 498:
    opcodename = "MSG_TABARDVENDOR_ACTIVATE";
    break;
  case 499:
    opcodename = "SMSG_PLAY_SPELL_VISUAL";
    break;
  case 500:
    opcodename = "CMSG_ZONEUPDATE";
    break;
  case 501:
    opcodename = "SMSG_PARTYKILLLOG";
    break;
  case 502:
    opcodename = "SMSG_COMPRESSED_UPDATE_OBJECT";
    break;
  case 503:
    opcodename = "SMSG_PLAY_SPELL_IMPACT";
    break;
  case 504:
    opcodename = "SMSG_EXPLORATION_EXPERIENCE";
    break;
  case 505:
    opcodename = "CMSG_GM_SET_SECURITY_GROUP";
    break;
  case 506:
    opcodename = "CMSG_GM_NUKE";
    break;
  case 507:
    opcodename = "MSG_RANDOM_ROLL";
    break;
  case 508:
    opcodename = "SMSG_ENVIRONMENTALDAMAGELOG";
    break;
  case 509:
    opcodename = "CMSG_RWHOIS_OBSOLETE";
    break;
  case 510:
    opcodename = "SMSG_RWHOIS";
    break;
  case 511:
    opcodename = "MSG_LOOKING_FOR_GROUP";
    break;
  case 512:
    opcodename = "CMSG_SET_LOOKING_FOR_GROUP";
    break;
  case 513:
    opcodename = "CMSG_UNLEARN_SPELL";
    break;
  case 514:
    opcodename = "CMSG_UNLEARN_SKILL";
    break;
  case 515:
    opcodename = "SMSG_REMOVED_SPELL";
    break;
  case 516:
    opcodename = "CMSG_DECHARGE";
    break;
  case 517:
    opcodename = "CMSG_GMTICKET_CREATE";
    break;
  case 518:
    opcodename = "SMSG_GMTICKET_CREATE";
    break;
  case 519:
    opcodename = "CMSG_GMTICKET_UPDATETEXT";
    break;
  case 520:
    opcodename = "SMSG_GMTICKET_UPDATETEXT";
    break;
  case 521:
    opcodename = "SMSG_ACCOUNT_DATA_TIMES";
    break;
  case 522:
    opcodename = "CMSG_REQUEST_ACCOUNT_DATA";
    break;
  case 523:
    opcodename = "CMSG_UPDATE_ACCOUNT_DATA";
    break;
  case 524:
    opcodename = "SMSG_UPDATE_ACCOUNT_DATA";
    break;
  case 525:
    opcodename = "SMSG_CLEAR_FAR_SIGHT_IMMEDIATE";
    break;
  case 526:
    opcodename = "SMSG_POWERGAINLOG_OBSOLETE";
    break;
  case 527:
    opcodename = "CMSG_GM_TEACH";
    break;
  case 528:
    opcodename = "CMSG_GM_CREATE_ITEM_TARGET";
    break;
  case 529:
    opcodename = "CMSG_GMTICKET_GETTICKET";
    break;
  case 530:
    opcodename = "SMSG_GMTICKET_GETTICKET";
    break;
  case 531:
    opcodename = "CMSG_UNLEARN_TALENTS";
    break;
  case 532:
    opcodename = "SMSG_GAMEOBJECT_SPAWN_ANIM_OBSOLETE";
    break;
  case 533:
    opcodename = "SMSG_GAMEOBJECT_DESPAWN_ANIM";
    break;
  case 534:
    opcodename = "MSG_CORPSE_QUERY";
    break;
  case 535:
    opcodename = "CMSG_GMTICKET_DELETETICKET";
    break;
  case 536:
    opcodename = "SMSG_GMTICKET_DELETETICKET";
    break;
  case 537:
    opcodename = "SMSG_CHAT_WRONG_FACTION";
    break;
  case 538:
    opcodename = "CMSG_GMTICKET_SYSTEMSTATUS";
    break;
  case 539:
    opcodename = "SMSG_GMTICKET_SYSTEMSTATUS";
    break;
  case 540:
    opcodename = "CMSG_SPIRIT_HEALER_ACTIVATE";
    break;
  case 541:
    opcodename = "CMSG_SET_STAT_CHEAT";
    break;
  case 542:
    opcodename = "SMSG_SET_REST_START";
    break;
  case 543:
    opcodename = "CMSG_SKILL_BUY_STEP";
    break;
  case 544:
    opcodename = "CMSG_SKILL_BUY_RANK";
    break;
  case 545:
    opcodename = "CMSG_XP_CHEAT";
    break;
  case 546:
    opcodename = "SMSG_SPIRIT_HEALER_CONFIRM";
    break;
  case 547:
    opcodename = "CMSG_CHARACTER_POINT_CHEAT";
    break;
  case 548:
    opcodename = "SMSG_GOSSIP_POI";
    break;
  case 549:
    opcodename = "CMSG_CHAT_IGNORED";
    break;
  case 550:
    opcodename = "CMSG_GM_VISION";
    break;
  case 551:
    opcodename = "CMSG_SERVER_COMMAND";
    break;
  case 552:
    opcodename = "CMSG_GM_SILENCE";
    break;
  case 553:
    opcodename = "CMSG_GM_REVEALTO";
    break;
  case 554:
    opcodename = "CMSG_GM_RESURRECT";
    break;
  case 555:
    opcodename = "CMSG_GM_SUMMONMOB";
    break;
  case 556:
    opcodename = "CMSG_GM_MOVECORPSE";
    break;
  case 557:
    opcodename = "CMSG_GM_FREEZE";
    break;
  case 558:
    opcodename = "CMSG_GM_UBERINVIS";
    break;
  case 559:
    opcodename = "CMSG_GM_REQUEST_PLAYER_INFO";
    break;
  case 560:
    opcodename = "SMSG_GM_PLAYER_INFO";
    break;
  case 561:
    opcodename = "CMSG_GUILD_RANK";
    break;
  case 562:
    opcodename = "CMSG_GUILD_ADD_RANK";
    break;
  case 563:
    opcodename = "CMSG_GUILD_DEL_RANK";
    break;
  case 564:
    opcodename = "CMSG_GUILD_SET_PUBLIC_NOTE";
    break;
  case 565:
    opcodename = "CMSG_GUILD_SET_OFFICER_NOTE";
    break;
  case 566:
    opcodename = "SMSG_LOGIN_VERIFY_WORLD";
    break;
  case 567:
    opcodename = "CMSG_CLEAR_EXPLORATION";
    break;
  case 568:
    opcodename = "CMSG_SEND_MAIL";
    break;
  case 569:
    opcodename = "SMSG_SEND_MAIL_RESULT";
    break;
  case 570:
    opcodename = "CMSG_GET_MAIL_LIST";
    break;
  case 571:
    opcodename = "SMSG_MAIL_LIST_RESULT";
    break;
  case 572:
    opcodename = "CMSG_BATTLEFIELD_LIST";
    break;
  case 573:
    opcodename = "SMSG_BATTLEFIELD_LIST";
    break;
  case 574:
    opcodename = "CMSG_BATTLEFIELD_JOIN";
    break;
  case 575:
    opcodename = "SMSG_BATTLEFIELD_WIN_OBSOLETE";
    break;
  case 576:
    opcodename = "SMSG_BATTLEFIELD_LOSE_OBSOLETE";
    break;
  case 577:
    opcodename = "CMSG_TAXICLEARNODE";
    break;
  case 578:
    opcodename = "CMSG_TAXIENABLENODE";
    break;
  case 579:
    opcodename = "CMSG_ITEM_TEXT_QUERY";
    break;
  case 580:
    opcodename = "SMSG_ITEM_TEXT_QUERY_RESPONSE";
    break;
  case 581:
    opcodename = "CMSG_MAIL_TAKE_MONEY";
    break;
  case 582:
    opcodename = "CMSG_MAIL_TAKE_ITEM";
    break;
  case 583:
    opcodename = "CMSG_MAIL_MARK_AS_READ";
    break;
  case 584:
    opcodename = "CMSG_MAIL_RETURN_TO_SENDER";
    break;
  case 585:
    opcodename = "CMSG_MAIL_DELETE";
    break;
  case 586:
    opcodename = "CMSG_MAIL_CREATE_TEXT_ITEM";
    break;
  case 587:
    opcodename = "SMSG_SPELLLOGMISS";
    break;
  case 588:
    opcodename = "SMSG_SPELLLOGEXECUTE";
    break;
  case 589:
    opcodename = "SMSG_DEBUGAURAPROC";
    break;
  case 590:
    opcodename = "SMSG_PERIODICAURALOG";
    break;
  case 591:
    opcodename = "SMSG_SPELLDAMAGESHIELD";
    break;
  case 592:
    opcodename = "SMSG_SPELLNONMELEEDAMAGELOG";
    break;
  case 593:
    opcodename = "CMSG_LEARN_TALENT";
    break;
  case 594:
    opcodename = "SMSG_RESURRECT_FAILED";
    break;
  case 595:
    opcodename = "CMSG_TOGGLE_PVP";
    break;
  case 596:
    opcodename = "SMSG_ZONE_UNDER_ATTACK";
    break;
  case 597:
    opcodename = "MSG_AUCTION_HELLO";
    break;
  case 598:
    opcodename = "CMSG_AUCTION_SELL_ITEM";
    break;
  case 599:
    opcodename = "CMSG_AUCTION_REMOVE_ITEM";
    break;
  case 600:
    opcodename = "CMSG_AUCTION_LIST_ITEMS";
    break;
  case 601:
    opcodename = "CMSG_AUCTION_LIST_OWNER_ITEMS";
    break;
  case 602:
    opcodename = "CMSG_AUCTION_PLACE_BID";
    break;
  case 603:
    opcodename = "SMSG_AUCTION_COMMAND_RESULT";
    break;
  case 604:
    opcodename = "SMSG_AUCTION_LIST_RESULT";
    break;
  case 605:
    opcodename = "SMSG_AUCTION_OWNER_LIST_RESULT";
    break;
  case 606:
    opcodename = "SMSG_AUCTION_BIDDER_NOTIFICATION";
    break;
  case 607:
    opcodename = "SMSG_AUCTION_OWNER_NOTIFICATION";
    break;
  case 608:
    opcodename = "SMSG_PROCRESIST";
    break;
  case 609:
    opcodename = "SMSG_STANDSTATE_CHANGE_FAILURE_OBSOLETE";
    break;
  case 610:
    opcodename = "SMSG_DISPEL_FAILED";
    break;
  case 611:
    opcodename = "SMSG_SPELLORDAMAGE_IMMUNE";
    break;
  case 612:
    opcodename = "CMSG_AUCTION_LIST_BIDDER_ITEMS";
    break;
  case 613:
    opcodename = "SMSG_AUCTION_BIDDER_LIST_RESULT";
    break;
  case 614:
    opcodename = "SMSG_SET_FLAT_SPELL_MODIFIER";
    break;
  case 615:
    opcodename = "SMSG_SET_PCT_SPELL_MODIFIER";
    break;
  case 616:
    opcodename = "CMSG_SET_AMMO";
    break;
  case 617:
    opcodename = "SMSG_CORPSE_RECLAIM_DELAY";
    break;
  case 618:
    opcodename = "CMSG_SET_ACTIVE_MOVER";
    break;
  case 619:
    opcodename = "CMSG_PET_CANCEL_AURA";
    break;
  case 620:
    opcodename = "CMSG_PLAYER_AI_CHEAT";
    break;
  case 621:
    opcodename = "CMSG_CANCEL_AUTO_REPEAT_SPELL";
    break;
  case 622:
    opcodename = "MSG_GM_ACCOUNT_ONLINE";
    break;
  case 623:
    opcodename = "MSG_LIST_STABLED_PETS";
    break;
  case 624:
    opcodename = "CMSG_STABLE_PET";
    break;
  case 625:
    opcodename = "CMSG_UNSTABLE_PET";
    break;
  case 626:
    opcodename = "CMSG_BUY_STABLE_SLOT";
    break;
  case 627:
    opcodename = "SMSG_STABLE_RESULT";
    break;
  case 628:
    opcodename = "CMSG_STABLE_REVIVE_PET";
    break;
  case 629:
    opcodename = "CMSG_STABLE_SWAP_PET";
    break;
  case 630:
    opcodename = "MSG_QUEST_PUSH_RESULT";
    break;
  case 631:
    opcodename = "SMSG_PLAY_MUSIC";
    break;
  case 632:
    opcodename = "SMSG_PLAY_OBJECT_SOUND";
    break;
  case 633:
    opcodename = "CMSG_REQUEST_PET_INFO";
    break;
  case 634:
    opcodename = "CMSG_FAR_SIGHT";
    break;
  case 635:
    opcodename = "SMSG_SPELLDISPELLOG";
    break;
  case 636:
    opcodename = "SMSG_DAMAGE_CALC_LOG";
    break;
  case 637:
    opcodename = "CMSG_ENABLE_DAMAGE_LOG";
    break;
  case 638:
    opcodename = "CMSG_GROUP_CHANGE_SUB_GROUP";
    break;
  case 639:
    opcodename = "CMSG_REQUEST_PARTY_MEMBER_STATS";
    break;
  case 640:
    opcodename = "CMSG_GROUP_SWAP_SUB_GROUP";
    break;
  case 641:
    opcodename = "CMSG_RESET_FACTION_CHEAT";
    break;
  case 642:
    opcodename = "CMSG_AUTOSTORE_BANK_ITEM";
    break;
  case 643:
    opcodename = "CMSG_AUTOBANK_ITEM";
    break;
  case 644:
    opcodename = "MSG_QUERY_NEXT_MAIL_TIME";
    break;
  case 645:
    opcodename = "SMSG_RECEIVED_MAIL";
    break;
  case 646:
    opcodename = "SMSG_RAID_GROUP_ONLY";
    break;
  case 647:
    opcodename = "CMSG_SET_DURABILITY_CHEAT";
    break;
  case 648:
    opcodename = "CMSG_SET_PVP_RANK_CHEAT";
    break;
  case 649:
    opcodename = "CMSG_ADD_PVP_MEDAL_CHEAT";
    break;
  case 650:
    opcodename = "CMSG_DEL_PVP_MEDAL_CHEAT";
    break;
  case 651:
    opcodename = "CMSG_SET_PVP_TITLE";
    break;
  case 652:
    opcodename = "SMSG_PVP_CREDIT";
    break;
  case 653:
    opcodename = "SMSG_AUCTION_REMOVED_NOTIFICATION";
    break;
  case 654:
    opcodename = "CMSG_GROUP_RAID_CONVERT";
    break;
  case 655:
    opcodename = "CMSG_GROUP_ASSISTANT_LEADER";
    break;
  case 656:
    opcodename = "CMSG_BUYBACK_ITEM";
    break;
  case 657:
    opcodename = "SMSG_SERVER_MESSAGE";
    break;
  case 658:
    opcodename = "CMSG_MEETINGSTONE_JOIN";
    break;
  case 659:
    opcodename = "CMSG_MEETINGSTONE_LEAVE";
    break;
  case 660:
    opcodename = "CMSG_MEETINGSTONE_CHEAT";
    break;
  case 661:
    opcodename = "SMSG_MEETINGSTONE_SETQUEUE";
    break;
  case 662:
    opcodename = "CMSG_MEETINGSTONE_INFO";
    break;
  case 663:
    opcodename = "SMSG_MEETINGSTONE_COMPLETE";
    break;
  case 664:
    opcodename = "SMSG_MEETINGSTONE_IN_PROGRESS";
    break;
  case 665:
    opcodename = "SMSG_MEETINGSTONE_MEMBER_ADDED";
    break;
  case 666:
    opcodename = "CMSG_GMTICKETSYSTEM_TOGGLE";
    break;
  case 667:
    opcodename = "CMSG_CANCEL_GROWTH_AURA";
    break;
  case 668:
    opcodename = "SMSG_CANCEL_AUTO_REPEAT";
    break;
  case 669:
    opcodename = "SMSG_STANDSTATE_UPDATE";
    break;
  case 670:
    opcodename = "SMSG_LOOT_ALL_PASSED";
    break;
  case 671:
    opcodename = "SMSG_LOOT_ROLL_WON";
    break;
  case 672:
    opcodename = "CMSG_LOOT_ROLL";
    break;
  case 673:
    opcodename = "SMSG_LOOT_START_ROLL";
    break;
  case 674:
    opcodename = "SMSG_LOOT_ROLL";
    break;
  case 675:
    opcodename = "CMSG_LOOT_MASTER_GIVE";
    break;
  case 676:
    opcodename = "SMSG_LOOT_MASTER_LIST";
    break;
  case 677:
    opcodename = "SMSG_SET_FORCED_REACTIONS";
    break;
  case 678:
    opcodename = "SMSG_SPELL_FAILED_OTHER";
    break;
  case 679:
    opcodename = "SMSG_GAMEOBJECT_RESET_STATE";
    break;
  case 680:
    opcodename = "CMSG_REPAIR_ITEM";
    break;
  case 681:
    opcodename = "SMSG_CHAT_PLAYER_NOT_FOUND";
    break;
  case 682:
    opcodename = "MSG_TALENT_WIPE_CONFIRM";
    break;
  case 683:
    opcodename = "SMSG_SUMMON_REQUEST";
    break;
  case 684:
    opcodename = "CMSG_SUMMON_RESPONSE";
    break;
  case 685:
    opcodename = "MSG_MOVE_TOGGLE_GRAVITY_CHEAT";
    break;
  case 686:
    opcodename = "SMSG_MONSTER_MOVE_TRANSPORT";
    break;
  case 687:
    opcodename = "SMSG_PET_BROKEN";
    break;
  case 688:
    opcodename = "MSG_MOVE_FEATHER_FALL";
    break;
  case 689:
    opcodename = "MSG_MOVE_WATER_WALK";
    break;
  case 690:
    opcodename = "CMSG_SERVER_BROADCAST";
    break;
  case 691:
    opcodename = "CMSG_SELF_RES";
    break;
  case 692:
    opcodename = "SMSG_FEIGN_DEATH_RESISTED";
    break;
  case 693:
    opcodename = "CMSG_RUN_SCRIPT";
    break;
  case 694:
    opcodename = "SMSG_SCRIPT_MESSAGE";
    break;
  case 695:
    opcodename = "SMSG_DUEL_COUNTDOWN";
    break;
  case 696:
    opcodename = "SMSG_AREA_TRIGGER_MESSAGE";
    break;
  case 697:
    opcodename = "CMSG_TOGGLE_HELM";
    break;
  case 698:
    opcodename = "CMSG_TOGGLE_CLOAK";
    break;
  case 699:
    opcodename = "SMSG_MEETINGSTONE_JOINFAILED";
    break;
  case 700:
    opcodename = "SMSG_PLAYER_SKINNED";
    break;
  case 701:
    opcodename = "SMSG_DURABILITY_DAMAGE_DEATH";
    break;
  case 702:
    opcodename = "CMSG_SET_EXPLORATION";
    break;
  case 703:
    opcodename = "CMSG_SET_ACTIONBAR_TOGGLES";
    break;
  case 704:
    opcodename = "UMSG_DELETE_GUILD_CHARTER";
    break;
  case 705:
    opcodename = "MSG_PETITION_RENAME";
    break;
  case 706:
    opcodename = "SMSG_INIT_WORLD_STATES";
    break;
  case 707:
    opcodename = "SMSG_UPDATE_WORLD_STATE";
    break;
  case 708:
    opcodename = "CMSG_ITEM_NAME_QUERY";
    break;
  case 709:
    opcodename = "SMSG_ITEM_NAME_QUERY_RESPONSE";
    break;
  case 710:
    opcodename = "SMSG_PET_ACTION_FEEDBACK";
    break;
  case 711:
    opcodename = "CMSG_CHAR_RENAME";
    break;
  case 712:
    opcodename = "SMSG_CHAR_RENAME";
    break;
  case 713:
    opcodename = "CMSG_MOVE_SPLINE_DONE";
    break;
  case 714:
    opcodename = "CMSG_MOVE_FALL_RESET";
    break;
  case 715:
    opcodename = "SMSG_INSTANCE_SAVE_CREATED";
    break;
  case 716:
    opcodename = "SMSG_RAID_INSTANCE_INFO";
    break;
  case 717:
    opcodename = "CMSG_REQUEST_RAID_INFO";
    break;
  case 718:
    opcodename = "CMSG_MOVE_TIME_SKIPPED";
    break;
  case 719:
    opcodename = "CMSG_MOVE_FEATHER_FALL_ACK";
    break;
  case 720:
    opcodename = "CMSG_MOVE_WATER_WALK_ACK";
    break;
  case 721:
    opcodename = "CMSG_MOVE_NOT_ACTIVE_MOVER";
    break;
  case 722:
    opcodename = "SMSG_PLAY_SOUND";
    break;
  case 723:
    opcodename = "CMSG_BATTLEFIELD_STATUS";
    break;
  case 724:
    opcodename = "SMSG_BATTLEFIELD_STATUS";
    break;
  case 725:
    opcodename = "CMSG_BATTLEFIELD_PORT";
    break;
  case 726:
    opcodename = "MSG_INSPECT_HONOR_STATS";
    break;
  case 727:
    opcodename = "CMSG_BATTLEMASTER_HELLO";
    break;
  case 728:
    opcodename = "CMSG_MOVE_START_SWIM_CHEAT";
    break;
  case 729:
    opcodename = "CMSG_MOVE_STOP_SWIM_CHEAT";
    break;
  case 730:
    opcodename = "SMSG_FORCE_WALK_SPEED_CHANGE";
    break;
  case 731:
    opcodename = "CMSG_FORCE_WALK_SPEED_CHANGE_ACK";
    break;
  case 732:
    opcodename = "SMSG_FORCE_SWIM_BACK_SPEED_CHANGE";
    break;
  case 733:
    opcodename = "CMSG_FORCE_SWIM_BACK_SPEED_CHANGE_ACK";
    break;
  case 734:
    opcodename = "SMSG_FORCE_TURN_RATE_CHANGE";
    break;
  case 735:
    opcodename = "CMSG_FORCE_TURN_RATE_CHANGE_ACK";
    break;
  case 736:
    opcodename = "MSG_PVP_LOG_DATA";
    break;
  case 737:
    opcodename = "CMSG_LEAVE_BATTLEFIELD";
    break;
  case 738:
    opcodename = "CMSG_AREA_SPIRIT_HEALER_QUERY";
    break;
  case 739:
    opcodename = "CMSG_AREA_SPIRIT_HEALER_QUEUE";
    break;
  case 740:
    opcodename = "SMSG_AREA_SPIRIT_HEALER_TIME";
    break;
  case 741:
    opcodename = "CMSG_GM_UNTEACH";
    break;
  case 742:
    opcodename = "SMSG_WARDEN_DATA";
    break;
  case 743:
    opcodename = "CMSG_WARDEN_DATA";
    break;
  case 744:
    opcodename = "SMSG_GROUP_JOINED_BATTLEGROUND";
    break;
  case 745:
    opcodename = "MSG_BATTLEGROUND_PLAYER_POSITIONS";
    break;
  case 746:
    opcodename = "CMSG_PET_STOP_ATTACK";
    break;
  case 747:
    opcodename = "SMSG_BINDER_CONFIRM";
    break;
  case 748:
    opcodename = "SMSG_BATTLEGROUND_PLAYER_JOINED";
    break;
  case 749:
    opcodename = "SMSG_BATTLEGROUND_PLAYER_LEFT";
    break;
  case 750:
    opcodename = "CMSG_BATTLEMASTER_JOIN";
    break;
  case 751:
    opcodename = "SMSG_ADDON_INFO";
    break;
  case 752:
    opcodename = "CMSG_PET_UNLEARN";
    break;
  case 753:
    opcodename = "SMSG_PET_UNLEARN_CONFIRM";
    break;
  case 754:
    opcodename = "SMSG_PARTY_MEMBER_STATS_FULL";
    break;
  case 755:
    opcodename = "CMSG_PET_SPELL_AUTOCAST";
    break;
  case 756:
    opcodename = "SMSG_WEATHER";
    break;
  case 757:
    opcodename = "SMSG_PLAY_TIME_WARNING";
    break;
  case 758:
    opcodename = "SMSG_MINIGAME_SETUP";
    break;
  case 759:
    opcodename = "SMSG_MINIGAME_STATE";
    break;
  case 760:
    opcodename = "CMSG_MINIGAME_MOVE";
    break;
  case 761:
    opcodename = "SMSG_MINIGAME_MOVE_FAILED";
    break;
  case 762:
    opcodename = "SMSG_RAID_INSTANCE_MESSAGE";
    break;
  case 763:
    opcodename = "SMSG_COMPRESSED_MOVES";
    break;
  case 764:
    opcodename = "CMSG_GUILD_INFO_TEXT";
    break;
  case 765:
    opcodename = "SMSG_CHAT_RESTRICTED";
    break;
  case 766:
    opcodename = "SMSG_SPLINE_SET_RUN_SPEED";
    break;
  case 767:
    opcodename = "SMSG_SPLINE_SET_RUN_BACK_SPEED";
    break;
  case 768:
    opcodename = "SMSG_SPLINE_SET_SWIM_SPEED";
    break;
  case 769:
    opcodename = "SMSG_SPLINE_SET_WALK_SPEED";
    break;
  case 770:
    opcodename = "SMSG_SPLINE_SET_SWIM_BACK_SPEED";
    break;
  case 771:
    opcodename = "SMSG_SPLINE_SET_TURN_RATE";
    break;
  case 772:
    opcodename = "SMSG_SPLINE_MOVE_UNROOT";
    break;
  case 773:
    opcodename = "SMSG_SPLINE_MOVE_FEATHER_FALL";
    break;
  case 774:
    opcodename = "SMSG_SPLINE_MOVE_NORMAL_FALL";
    break;
  case 775:
    opcodename = "SMSG_SPLINE_MOVE_SET_HOVER";
    break;
  case 776:
    opcodename = "SMSG_SPLINE_MOVE_UNSET_HOVER";
    break;
  case 777:
    opcodename = "SMSG_SPLINE_MOVE_WATER_WALK";
    break;
  case 778:
    opcodename = "SMSG_SPLINE_MOVE_LAND_WALK";
    break;
  case 779:
    opcodename = "SMSG_SPLINE_MOVE_START_SWIM";
    break;
  case 780:
    opcodename = "SMSG_SPLINE_MOVE_STOP_SWIM";
    break;
  case 781:
    opcodename = "SMSG_SPLINE_MOVE_SET_RUN_MODE";
    break;
  case 782:
    opcodename = "SMSG_SPLINE_MOVE_SET_WALK_MODE";
    break;
  case 783:
    opcodename = "CMSG_GM_NUKE_ACCOUNT";
    break;
  case 784:
    opcodename = "MSG_GM_DESTROY_CORPSE";
    break;
  case 785:
    opcodename = "CMSG_GM_DESTROY_ONLINE_CORPSE";
    break;
  case 786:
    opcodename = "CMSG_ACTIVATETAXIEXPRESS";
    break;
  case 787:
    opcodename = "SMSG_SET_FACTION_ATWAR";
    break;
  case 788:
    opcodename = "SMSG_GAMETIMEBIAS_SET";
    break;
  case 789:
    opcodename = "CMSG_DEBUG_ACTIONS_START";
    break;
  case 790:
    opcodename = "CMSG_DEBUG_ACTIONS_STOP";
    break;
  case 791:
    opcodename = "CMSG_SET_FACTION_INACTIVE";
    break;
  case 792:
    opcodename = "CMSG_SET_WATCHED_FACTION";
    break;
  case 793:
    opcodename = "MSG_MOVE_TIME_SKIPPED";
    break;
  case 794:
    opcodename = "SMSG_SPLINE_MOVE_ROOT";
    break;
  case 795:
    opcodename = "CMSG_SET_EXPLORATION_ALL";
    break;
  case 796:
    opcodename = "SMSG_INVALIDATE_PLAYER";
    break;
  case 797:
    opcodename = "CMSG_RESET_INSTANCES";
    break;
  case 798:
    opcodename = "SMSG_INSTANCE_RESET";
    break;
  case 799:
    opcodename = "SMSG_INSTANCE_RESET_FAILED";
    break;
  case 800:
    opcodename = "SMSG_UPDATE_LAST_INSTANCE";
    break;
  case 801:
    opcodename = "MSG_RAID_TARGET_UPDATE";
    break;
  case 802:
    opcodename = "MSG_RAID_READY_CHECK";
    break;
  case 803:
    opcodename = "CMSG_LUA_USAGE";
    break;
  case 804:
    opcodename = "SMSG_PET_ACTION_SOUND";
    break;
  case 805:
    opcodename = "SMSG_PET_DISMISS_SOUND";
    break;
  case 806:
    opcodename = "SMSG_GHOSTEE_GONE";
    break;
  case 807:
    opcodename = "CMSG_GM_UPDATE_TICKET_STATUS";
    break;
  case 808:
    opcodename = "SMSG_GM_TICKET_STATUS_UPDATE";
    break;
  case 809:
    opcodename = "MSG_SET_DUNGEON_DIFFICULTY";
    break;
  case 810:
    opcodename = "CMSG_GMSURVEY_SUBMIT";
    break;
  case 811:
    opcodename = "SMSG_UPDATE_INSTANCE_OWNERSHIP";
    break;
  case 812:
    opcodename = "CMSG_IGNORE_KNOCKBACK_CHEAT";
    break;
  case 813:
    opcodename = "SMSG_CHAT_PLAYER_AMBIGUOUS";
    break;
  case 814:
    opcodename = "MSG_DELAY_GHOST_TELEPORT";
    break;
  case 815:
    opcodename = "SMSG_SPELLINSTAKILLLOG";
    break;
  case 816:
    opcodename = "SMSG_SPELL_UPDATE_CHAIN_TARGETS";
    break;
  case 817:
    opcodename = "CMSG_CHAT_FILTERED";
    break;
  case 818:
    opcodename = "SMSG_EXPECTED_SPAM_RECORDS";
    break;
  case 819:
    opcodename = "SMSG_SPELLSTEALLOG";
    break;
  case 820:
    opcodename = "CMSG_LOTTERY_QUERY_OBSOLETE";
    break;
  case 821:
    opcodename = "SMSG_LOTTERY_QUERY_RESULT_OBSOLETE";
    break;
  case 822:
    opcodename = "CMSG_BUY_LOTTERY_TICKET_OBSOLETE";
    break;
  case 823:
    opcodename = "SMSG_LOTTERY_RESULT_OBSOLETE";
    break;
  case 824:
    opcodename = "SMSG_CHARACTER_PROFILE";
    break;
  case 825:
    opcodename = "SMSG_CHARACTER_PROFILE_REALM_CONNECTED";
    break;
  case 826:
    opcodename = "SMSG_DEFENSE_MESSAGE";
    break;
  case 827:
    opcodename = "SMSG_INSTANCE_DIFFICULTY";
    break;
  case 828:
    opcodename = "MSG_GM_RESETINSTANCELIMIT";
    break;
  case 829:
    opcodename = "SMSG_MOTD";
    break;
  case 830:
    opcodename = "SMSG_MOVE_SET_FLIGHT_OBSOLETE";
    break;
  case 831:
    opcodename = "SMSG_MOVE_UNSET_FLIGHT_OBSOLETE";
    break;
  case 832:
    opcodename = "CMSG_MOVE_FLIGHT_ACK_OBSOLETE";
    break;
  case 833:
    opcodename = "MSG_MOVE_START_SWIM_CHEAT";
    break;
  case 834:
    opcodename = "MSG_MOVE_STOP_SWIM_CHEAT";
    break;
  case 835:
    opcodename = "SMSG_MOVE_SET_CAN_FLY";
    break;
  case 836:
    opcodename = "SMSG_MOVE_UNSET_CAN_FLY";
    break;
  case 837:
    opcodename = "CMSG_MOVE_SET_CAN_FLY_ACK";
    break;
  case 838:
    opcodename = "CMSG_MOVE_SET_FLY";
    break;
  case 839:
    opcodename = "CMSG_SOCKET_GEMS";
    break;
  case 840:
    opcodename = "CMSG_ARENA_TEAM_CREATE";
    break;
  case 841:
    opcodename = "SMSG_ARENA_TEAM_COMMAND_RESULT";
    break;
  case 842:
    opcodename = "UMSG_UPDATE_ARENA_TEAM_OBSOLETE";
    break;
  case 843:
    opcodename = "CMSG_ARENA_TEAM_QUERY";
    break;
  case 844:
    opcodename = "SMSG_ARENA_TEAM_QUERY_RESPONSE";
    break;
  case 845:
    opcodename = "CMSG_ARENA_TEAM_ROSTER";
    break;
  case 846:
    opcodename = "SMSG_ARENA_TEAM_ROSTER";
    break;
  case 847:
    opcodename = "CMSG_ARENA_TEAM_INVITE";
    break;
  case 848:
    opcodename = "SMSG_ARENA_TEAM_INVITE";
    break;
  case 849:
    opcodename = "CMSG_ARENA_TEAM_ACCEPT";
    break;
  case 850:
    opcodename = "CMSG_ARENA_TEAM_DECLINE";
    break;
  case 851:
    opcodename = "CMSG_ARENA_TEAM_LEAVE";
    break;
  case 852:
    opcodename = "CMSG_ARENA_TEAM_REMOVE";
    break;
  case 853:
    opcodename = "CMSG_ARENA_TEAM_DISBAND";
    break;
  case 854:
    opcodename = "CMSG_ARENA_TEAM_LEADER";
    break;
  case 855:
    opcodename = "SMSG_ARENA_TEAM_EVENT";
    break;
  case 856:
    opcodename = "CMSG_BATTLEMASTER_JOIN_ARENA";
    break;
  case 857:
    opcodename = "MSG_MOVE_START_ASCEND";
    break;
  case 858:
    opcodename = "MSG_MOVE_STOP_ASCEND";
    break;
  case 859:
    opcodename = "SMSG_ARENA_TEAM_STATS";
    break;
  case 860:
    opcodename = "CMSG_LFG_SET_AUTOJOIN";
    break;
  case 861:
    opcodename = "CMSG_LFG_CLEAR_AUTOJOIN";
    break;
  case 862:
    opcodename = "CMSG_LFM_SET_AUTOFILL";
    break;
  case 863:
    opcodename = "CMSG_LFM_CLEAR_AUTOFILL";
    break;
  case 864:
    opcodename = "CMSG_ACCEPT_LFG_MATCH";
    break;
  case 865:
    opcodename = "CMSG_DECLINE_LFG_MATCH";
    break;
  case 866:
    opcodename = "CMSG_CANCEL_PENDING_LFG";
    break;
  case 867:
    opcodename = "CMSG_CLEAR_LOOKING_FOR_GROUP";
    break;
  case 868:
    opcodename = "CMSG_CLEAR_LOOKING_FOR_MORE";
    break;
  case 869:
    opcodename = "CMSG_SET_LOOKING_FOR_MORE";
    break;
  case 870:
    opcodename = "CMSG_SET_LFG_COMMENT";
    break;
  case 871:
    opcodename = "SMSG_LFG_TIMEDOUT";
    break;
  case 872:
    opcodename = "SMSG_LFG_OTHER_TIMEDOUT";
    break;
  case 873:
    opcodename = "SMSG_LFG_AUTOJOIN_FAILED";
    break;
  case 874:
    opcodename = "SMSG_LFG_AUTOJOIN_FAILED_NO_PLAYER";
    break;
  case 875:
    opcodename = "SMSG_LFG_LEADER_IS_LFM";
    break;
  case 876:
    opcodename = "SMSG_LFG_UPDATE";
    break;
  case 877:
    opcodename = "SMSG_LFG_UPDATE_LFM";
    break;
  case 878:
    opcodename = "SMSG_LFG_UPDATE_LFG";
    break;
  case 879:
    opcodename = "SMSG_LFG_UPDATE_QUEUED";
    break;
  case 880:
    opcodename = "SMSG_LFG_PENDING_INVITE";
    break;
  case 881:
    opcodename = "SMSG_LFG_PENDING_MATCH";
    break;
  case 882:
    opcodename = "SMSG_LFG_PENDING_MATCH_DONE";
    break;
  case 883:
    opcodename = "SMSG_TITLE_EARNED";
    break;
  case 884:
    opcodename = "CMSG_SET_TITLE";
    break;
  case 885:
    opcodename = "CMSG_CANCEL_MOUNT_AURA";
    break;
  case 886:
    opcodename = "SMSG_ARENA_ERROR";
    break;
  case 887:
    opcodename = "MSG_INSPECT_ARENA_TEAMS";
    break;
  case 888:
    opcodename = "SMSG_DEATH_RELEASE_LOC";
    break;
  case 889:
    opcodename = "CMSG_CANCEL_TEMP_ENCHANTMENT";
    break;
  case 890:
    opcodename = "SMSG_FORCED_DEATH_UPDATE";
    break;
  case 891:
    opcodename = "CMSG_CHEAT_SET_HONOR_CURRENCY";
    break;
  case 892:
    opcodename = "CMSG_CHEAT_SET_ARENA_CURRENCY";
    break;
  case 893:
    opcodename = "MSG_MOVE_SET_FLIGHT_SPEED_CHEAT";
    break;
  case 894:
    opcodename = "MSG_MOVE_SET_FLIGHT_SPEED";
    break;
  case 895:
    opcodename = "MSG_MOVE_SET_FLIGHT_BACK_SPEED_CHEAT";
    break;
  case 896:
    opcodename = "MSG_MOVE_SET_FLIGHT_BACK_SPEED";
    break;
  case 897:
    opcodename = "SMSG_FORCE_FLIGHT_SPEED_CHANGE";
    break;
  case 898:
    opcodename = "CMSG_FORCE_FLIGHT_SPEED_CHANGE_ACK";
    break;
  case 899:
    opcodename = "SMSG_FORCE_FLIGHT_BACK_SPEED_CHANGE";
    break;
  case 900:
    opcodename = "CMSG_FORCE_FLIGHT_BACK_SPEED_CHANGE_ACK";
    break;
  case 901:
    opcodename = "SMSG_SPLINE_SET_FLIGHT_SPEED";
    break;
  case 902:
    opcodename = "SMSG_SPLINE_SET_FLIGHT_BACK_SPEED";
    break;
  case 903:
    opcodename = "CMSG_MAELSTROM_INVALIDATE_CACHE";
    break;
  case 904:
    opcodename = "SMSG_FLIGHT_SPLINE_SYNC";
    break;
  case 905:
    opcodename = "CMSG_SET_TAXI_BENCHMARK_MODE";
    break;
  case 906:
    opcodename = "SMSG_JOINED_BATTLEGROUND_QUEUE";
    break;
  case 907:
    opcodename = "SMSG_REALM_SPLIT";
    break;
  case 908:
    opcodename = "CMSG_REALM_SPLIT";
    break;
  case 909:
    opcodename = "CMSG_MOVE_CHNG_TRANSPORT";
    break;
  case 910:
    opcodename = "MSG_PARTY_ASSIGNMENT";
    break;
  case 911:
    opcodename = "SMSG_OFFER_PETITION_ERROR";
    break;
  case 912:
    opcodename = "SMSG_TIME_SYNC_REQ";
    break;
  case 913:
    opcodename = "CMSG_TIME_SYNC_RESP";
    break;
  case 914:
    opcodename = "CMSG_SEND_LOCAL_EVENT";
    break;
  case 915:
    opcodename = "CMSG_SEND_GENERAL_TRIGGER";
    break;
  case 916:
    opcodename = "CMSG_SEND_COMBAT_TRIGGER";
    break;
  case 917:
    opcodename = "CMSG_MAELSTROM_GM_SENT_MAIL";
    break;
  case 918:
    opcodename = "SMSG_RESET_FAILED_NOTIFY";
    break;
  case 919:
    opcodename = "SMSG_REAL_GROUP_UPDATE";
    break;
  case 920:
    opcodename = "SMSG_LFG_DISABLED";
    break;
  case 921:
    opcodename = "CMSG_ACTIVE_PVP_CHEAT";
    break;
  case 922:
    opcodename = "CMSG_CHEAT_DUMP_ITEMS_DEBUG_ONLY";
    break;
  case 923:
    opcodename = "SMSG_CHEAT_DUMP_ITEMS_DEBUG_ONLY_RESPONSE";
    break;
  case 924:
    opcodename = "SMSG_CHEAT_DUMP_ITEMS_DEBUG_ONLY_RESPONSE_WRITE_FILE";
    break;
  case 925:
    opcodename = "SMSG_UPDATE_COMBO_POINTS";
    break;
  case 926:
    opcodename = "SMSG_VOICE_SESSION_ROSTER_UPDATE";
    break;
  case 927:
    opcodename = "SMSG_VOICE_SESSION_LEAVE";
    break;
  case 928:
    opcodename = "SMSG_VOICE_SESSION_ADJUST_PRIORITY";
    break;
  case 929:
    opcodename = "CMSG_VOICE_SET_TALKER_MUTED_REQUEST";
    break;
  case 930:
    opcodename = "SMSG_VOICE_SET_TALKER_MUTED";
    break;
  case 931:
    opcodename = "SMSG_INIT_EXTRA_AURA_INFO";
    break;
  case 932:
    opcodename = "SMSG_SET_EXTRA_AURA_INFO";
    break;
  case 933:
    opcodename = "SMSG_SET_EXTRA_AURA_INFO_NEED_UPDATE";
    break;
  case 934:
    opcodename = "SMSG_CLEAR_EXTRA_AURA_INFO";
    break;
  case 935:
    opcodename = "MSG_MOVE_START_DESCEND";
    break;
  case 936:
    opcodename = "CMSG_IGNORE_REQUIREMENTS_CHEAT";
    break;
  case 937:
    opcodename = "SMSG_IGNORE_REQUIREMENTS_CHEAT";
    break;
  case 938:
    opcodename = "SMSG_SPELL_CHANCE_PROC_LOG";
    break;
  case 939:
    opcodename = "CMSG_MOVE_SET_RUN_SPEED";
    break;
  case 940:
    opcodename = "SMSG_DISMOUNT";
    break;
  case 941:
    opcodename = "MSG_MOVE_UPDATE_CAN_FLY";
    break;
  case 942:
    opcodename = "MSG_RAID_READY_CHECK_CONFIRM";
    break;
  case 943:
    opcodename = "CMSG_VOICE_SESSION_ENABLE";
    break;
  case 944:
    opcodename = "SMSG_VOICE_PARENTAL_CONTROLS";
    break;
  case 945:
    opcodename = "CMSG_GM_WHISPER";
    break;
  case 946:
    opcodename = "SMSG_GM_MESSAGECHAT";
    break;
  case 947:
    opcodename = "MSG_GM_GEARRATING";
    break;
  case 948:
    opcodename = "CMSG_COMMENTATOR_ENABLE";
    break;
  case 949:
    opcodename = "SMSG_COMMENTATOR_STATE_CHANGED";
    break;
  case 950:
    opcodename = "CMSG_COMMENTATOR_GET_MAP_INFO";
    break;
  case 951:
    opcodename = "SMSG_COMMENTATOR_MAP_INFO";
    break;
  case 952:
    opcodename = "CMSG_COMMENTATOR_GET_PLAYER_INFO";
    break;
  case 953:
    opcodename = "SMSG_COMMENTATOR_GET_PLAYER_INFO";
    break;
  case 954:
    opcodename = "SMSG_COMMENTATOR_PLAYER_INFO";
    break;
  case 955:
    opcodename = "CMSG_COMMENTATOR_ENTER_INSTANCE";
    break;
  case 956:
    opcodename = "CMSG_COMMENTATOR_EXIT_INSTANCE";
    break;
  case 957:
    opcodename = "CMSG_COMMENTATOR_INSTANCE_COMMAND";
    break;
  case 958:
    opcodename = "SMSG_CLEAR_TARGET";
    break;
  case 959:
    opcodename = "CMSG_BOT_DETECTED";
    break;
  case 960:
    opcodename = "SMSG_CROSSED_INEBRIATION_THRESHOLD";
    break;
  case 961:
    opcodename = "CMSG_CHEAT_PLAYER_LOGIN";
    break;
  case 962:
    opcodename = "CMSG_CHEAT_PLAYER_LOOKUP";
    break;
  case 963:
    opcodename = "SMSG_CHEAT_PLAYER_LOOKUP";
    break;
  case 964:
    opcodename = "SMSG_KICK_REASON";
    break;
  case 965:
    opcodename = "MSG_RAID_READY_CHECK_FINISHED";
    break;
  case 966:
    opcodename = "CMSG_COMPLAIN";
    break;
  case 967:
    opcodename = "SMSG_COMPLAIN_RESULT";
    break;
  case 968:
    opcodename = "SMSG_FEATURE_SYSTEM_STATUS";
    break;
  case 969:
    opcodename = "CMSG_GM_SHOW_COMPLAINTS";
    break;
  case 970:
    opcodename = "CMSG_GM_UNSQUELCH";
    break;
  case 971:
    opcodename = "CMSG_CHANNEL_SILENCE_VOICE";
    break;
  case 972:
    opcodename = "CMSG_CHANNEL_SILENCE_ALL";
    break;
  case 973:
    opcodename = "CMSG_CHANNEL_UNSILENCE_VOICE";
    break;
  case 974:
    opcodename = "CMSG_CHANNEL_UNSILENCE_ALL";
    break;
  case 975:
    opcodename = "CMSG_TARGET_CAST";
    break;
  case 976:
    opcodename = "CMSG_TARGET_SCRIPT_CAST";
    break;
  case 977:
    opcodename = "CMSG_CHANNEL_DISPLAY_LIST";
    break;
  case 978:
    opcodename = "CMSG_SET_ACTIVE_VOICE_CHANNEL";
    break;
  case 979:
    opcodename = "CMSG_GET_CHANNEL_MEMBER_COUNT";
    break;
  case 980:
    opcodename = "SMSG_CHANNEL_MEMBER_COUNT";
    break;
  case 981:
    opcodename = "CMSG_CHANNEL_VOICE_ON";
    break;
  case 982:
    opcodename = "CMSG_CHANNEL_VOICE_OFF";
    break;
  case 983:
    opcodename = "CMSG_DEBUG_LIST_TARGETS";
    break;
  case 984:
    opcodename = "SMSG_DEBUG_LIST_TARGETS";
    break;
  case 985:
    opcodename = "SMSG_AVAILABLE_VOICE_CHANNEL";
    break;
  case 986:
    opcodename = "CMSG_ADD_VOICE_IGNORE";
    break;
  case 987:
    opcodename = "CMSG_DEL_VOICE_IGNORE";
    break;
  case 988:
    opcodename = "CMSG_PARTY_SILENCE";
    break;
  case 989:
    opcodename = "CMSG_PARTY_UNSILENCE";
    break;
  case 990:
    opcodename = "MSG_NOTIFY_PARTY_SQUELCH";
    break;
  case 991:
    opcodename = "SMSG_COMSAT_RECONNECT_TRY";
    break;
  case 992:
    opcodename = "SMSG_COMSAT_DISCONNECT";
    break;
  case 993:
    opcodename = "SMSG_COMSAT_CONNECT_FAIL";
    break;
  case 994:
    opcodename = "SMSG_VOICE_CHAT_STATUS";
    break;
  case 995:
    opcodename = "CMSG_REPORT_PVP_AFK";
    break;
  case 996:
    opcodename = "CMSG_REPORT_PVP_AFK_RESULT";
    break;
  case 997:
    opcodename = "CMSG_GUILD_BANKER_ACTIVATE";
    break;
  case 998:
    opcodename = "CMSG_GUILD_BANK_QUERY_TAB";
    break;
  case 999:
    opcodename = "SMSG_GUILD_BANK_LIST";
    break;
  case 1000:
    opcodename = "CMSG_GUILD_BANK_SWAP_ITEMS";
    break;
  case 1001:
    opcodename = "CMSG_GUILD_BANK_BUY_TAB";
    break;
  case 1002:
    opcodename = "CMSG_GUILD_BANK_UPDATE_TAB";
    break;
  case 1003:
    opcodename = "CMSG_GUILD_BANK_DEPOSIT_MONEY";
    break;
  case 1004:
    opcodename = "CMSG_GUILD_BANK_WITHDRAW_MONEY";
    break;
  case 1005:
    opcodename = "MSG_GUILD_BANK_LOG_QUERY";
    break;
  case 1006:
    opcodename = "CMSG_SET_CHANNEL_WATCH";
    break;
  case 1007:
    opcodename = "SMSG_USERLIST_ADD";
    break;
  case 1008:
    opcodename = "SMSG_USERLIST_REMOVE";
    break;
  case 1009:
    opcodename = "SMSG_USERLIST_UPDATE";
    break;
  case 1010:
    opcodename = "CMSG_CLEAR_CHANNEL_WATCH";
    break;
  case 1011:
    opcodename = "SMSG_INSPECT_TALENT";
    break;
  case 1012:
    opcodename = "SMSG_GOGOGO_OBSOLETE";
    break;
  case 1013:
    opcodename = "SMSG_ECHO_PARTY_SQUELCH";
    break;
  case 1014:
    opcodename = "CMSG_SET_TITLE_SUFFIX";
    break;
  case 1015:
    opcodename = "CMSG_SPELLCLICK";
    break;
  case 1016:
    opcodename = "SMSG_LOOT_LIST";
    break;
  case 1017:
    opcodename = "CMSG_GM_CHARACTER_RESTORE";
    break;
  case 1018:
    opcodename = "CMSG_GM_CHARACTER_SAVE";
    break;
  case 1019:
    opcodename = "SMSG_VOICESESSION_FULL";
    break;
  case 1020:
    opcodename = "MSG_GUILD_PERMISSIONS";
    break;
  case 1021:
    opcodename = "MSG_GUILD_BANK_MONEY_WITHDRAWN";
    break;
  case 1022:
    opcodename = "MSG_GUILD_EVENT_LOG_QUERY";
    break;
  case 1023:
    opcodename = "CMSG_MAELSTROM_RENAME_GUILD";
    break;
  case 1024:
    opcodename = "CMSG_GET_MIRRORIMAGE_DATA";
    break;
  case 1025:
    opcodename = "SMSG_MIRRORIMAGE_DATA";
    break;
  case 1026:
    opcodename = "SMSG_FORCE_DISPLAY_UPDATE";
    break;
  case 1027:
    opcodename = "SMSG_SPELL_CHANCE_RESIST_PUSHBACK";
    break;
  case 1028:
    opcodename = "CMSG_IGNORE_DIMINISHING_RETURNS_CHEAT";
    break;
  case 1029:
    opcodename = "SMSG_IGNORE_DIMINISHING_RETURNS_CHEAT";
    break;
  case 1030:
    opcodename = "CMSG_KEEP_ALIVE";
    break;
  case 1031:
    opcodename = "SMSG_RAID_READY_CHECK_ERROR";
    break;
  case 1032:
    opcodename = "CMSG_OPT_OUT_OF_LOOT";
    break;
  case 1033:
    opcodename = "MSG_QUERY_GUILD_BANK_TEXT";
    break;
  case 1034:
    opcodename = "CMSG_SET_GUILD_BANK_TEXT";
    break;
  case 1035:
    opcodename = "CMSG_SET_GRANTABLE_LEVELS";
    break;
  case 1036:
    opcodename = "CMSG_GRANT_LEVEL";
    break;
  case 1037:
    opcodename = "CMSG_REFER_A_FRIEND";
    break;
  case 1038:
    opcodename = "MSG_GM_CHANGE_ARENA_RATING";
    break;
  case 1039:
    opcodename = "CMSG_DECLINE_CHANNEL_INVITE";
    break;
  case 1040:
    opcodename = "CMSG_GROUPACTION_THROTTLED";
    break;
  case 1041:
    opcodename = "SMSG_OVERRIDE_LIGHT";
    break;
  case 1042:
    opcodename = "SMSG_TOTEM_CREATED";
    break;
  case 1043:
    opcodename = "CMSG_TOTEM_DESTROYED";
    break;
  case 1044:
    opcodename = "CMSG_EXPIRE_RAID_INSTANCE";
    break;
  case 1045:
    opcodename = "CMSG_NO_SPELL_VARIANCE";
    break;
  case 1046:
    opcodename = "CMSG_QUESTGIVER_STATUS_MULTIPLE_QUERY";
    break;
  case 1047:
    opcodename = "SMSG_QUESTGIVER_STATUS_MULTIPLE";
    break;
  case 1048:
    opcodename = "CMSG_SET_PLAYER_DECLINED_NAMES";
    break;
  case 1049:
    opcodename = "SMSG_SET_PLAYER_DECLINED_NAMES_RESULT";
    break;
  case 1050:
    opcodename = "CMSG_QUERY_SERVER_BUCK_DATA";
    break;
  case 1051:
    opcodename = "CMSG_CLEAR_SERVER_BUCK_DATA";
    break;
  case 1052:
    opcodename = "SMSG_SERVER_BUCK_DATA";
    break;
  case 1053:
    opcodename = "SMSG_SEND_UNLEARN_SPELLS";
    break;
  case 1054:
    opcodename = "SMSG_PROPOSE_LEVEL_GRANT";
    break;
  case 1055:
    opcodename = "CMSG_ACCEPT_LEVEL_GRANT";
    break;
  case 1056:
    opcodename = "SMSG_REFER_A_FRIEND_FAILURE";
    break;
  case 1057:
    opcodename = "SMSG_SPLINE_MOVE_SET_FLYING";
    break;
  case 1058:
    opcodename = "SMSG_SPLINE_MOVE_UNSET_FLYING";
    break;
  case 1059:
    opcodename = "SMSG_SUMMON_CANCEL";
    break;
  case 4294967295:
    opcodename = "CHAT_MSG_ADDON";
    break;
  }
return opcodename;
}
#endif