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
