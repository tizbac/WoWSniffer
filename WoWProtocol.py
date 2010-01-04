# -*- coding: utf-8 -*-
from OpCodes import *
from struct import *
import pygame
f = """................................ !"#$%&\'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[.]^_`abcdefghijklmnopqrstuvwxyz{|}~................................................................................................................................."""
print "WoW Protocol module init"
font = pygame.font.Font(None, 36)
npc = font.render("NPC", 1, (100, 100, 100))
player = font.render("P", 1, (200, 200, 0))
class NPC:
  def __init__(self,x,y,z,guid=0):
    self.x = float(x)
    self.y = float(y)
    self.z = float(z)
    self.guid = 0
  def render(self):
    try:
      screen = pygame.display.get_surface()
      xx = int(self.x/100.0)+400
      yy = int(self.y/100.0)+300
      xx = max(0,min(800,xx))
      yy = max(0,min(600,yy))
      screen.blit(npc,(xx,yy))
    except:
      pass
  def update(self,x,y,z):
    self.x = float(x)
    self.y = float(y)
    self.z = float(z)
class Player:
  def __init__(self,x,y,z,guid=0):
    self.x = float(x)
    self.y = float(y)
    self.z = float(z)
    self.guid = 0
  def render(self):
    try:
      screen = pygame.display.get_surface()
      xx = int(self.x/100.0)+400
      yy = int(self.y/100.0)+300
      xx = max(0,min(800,xx))
      yy = max(0,min(600,yy))
      screen.blit(player,(xx,yy))
    except:
      pass
  def update(self,x,y,z):
    self.x = float(x)
    self.y = float(y)
    self.z = float(z)
def processpacket(opcode,data,globaldata):
  if opcode == SMSG_MESSAGECHAT:
    typ = ord(data[0])
    fields = unpack("ILIL",data[1:33])
    
    language = fields[0]
    tguid = fields[1]
    message = data[14:]
    print "ChatMessage[Type:%i,Language:%i,TargetGuid:%i] %s"%(typ,language,tguid,message.translate(f))
  if opcode == SMSG_MONSTER_MOVE:
    print len(data)
    guid = data[:7]
    fields = unpack("fffIBIII",data[7:calcsize("fffIBIII")+7])
    print "Monster_Move",fields
    if not guid in globaldata.npcs:
      globaldata.npcs[guid] = NPC(fields[0],fields[1],fields[2],guid)
  if opcode == MSG_MOVE_STOP or opcode == MSG_MOVE_HEARTBEAT:                                                                                                                                                  
    guid = data[:7]
    fields1 = unpack("I",data[7:11])
    #print len(data[5:])
    fields2 = unpack("Iffff",data[11:31])
    if not guid in globaldata.players:
      globaldata.players[guid] = Player(fields2[1],fields2[2],fields2[3],guid)
    else:
      globaldata.players[guid].update(fields2[1],fields2[2],fields2[3])
    print guid,fields1,fields2
