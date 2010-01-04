/*
    <one line to give the program's name and a brief idea of what it does.>
    Copyright (C) <year>  <name of author>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

*/

#include "positiondrawer.h"
#include "crypt.hpp"
#include "consts.h"
#include <math.h>
playerinfo * getplayerbyguid(unsigned long long int guid);
Uint16 CreateHicolorPixel(SDL_PixelFormat *fmt,
			  Uint8 red, Uint8
					  green, Uint8 blue)
{
	Uint16 value;
	value = ((red >> fmt->Rloss) << fmt->Rshift) +
			((green >> fmt->Gloss) << fmt->Gshift) +
			((blue >> fmt->Bloss) << fmt->Bshift);
	return value;
}
void drawarrow(float x, float y,float o)
{
  glPushMatrix();
  glTranslatef(float(x),float(y),0.0);
  glRotatef(o,0,0,1.0);
  glBegin(GL_LINES);
  glVertex3f(0,0,0);
  glVertex3f(0,10,0);
  glVertex3f(-3,6,0);
  glVertex3f(3,6,0);
  glEnd();
  glPopMatrix();
  
}
PositionDrawer::PositionDrawer(int x = 300, int y = 300)
{
  width = x;
  height = y;
  initialized = false;
  
  
  
}

void PositionDrawer::UpdatePlayer(unsigned long long int guid,float x, float y, float z, float orientation)
{
  if ( positions.find(guid) == positions.end())
  {
    positions[guid] = new playerpos[1];
  }
  playerpos * cp;
  cp = positions[guid];
  cp->lastupdate = getcurrenttime();
  cp->orientation = orientation;
  cp->x = x;
  cp->y = y;
  cp->z = z;
  Redraw(true);
  
  
}
void PositionDrawer::SetMyPosition(float x,float y,float z,float orientation)
{
  myposx = x;
  myposy = y;
  myposz = z;
  myorientation = orientation;
  Redraw(true);
  
}
void PositionDrawer::RemovePlayer(unsigned long long int guid)
{
  if ( positions.find(guid) == positions.end())
    return;
  delete positions[guid];
  positions.erase(guid);
  
  
}
void PositionDrawer::DrawDot(int x,int y,int radius,bool filled,float r,float g,float b,bool threadsafe)
{
  /*for ( int yy = y-radius; yy < y+radius; yy++)
  {
    for ( int xx = x-radius; xx < x+radius; xx++)
    {
      //float dist = 0.0;
      float dist = sqrt((x-xx)*(x-xx)+(y-yy)*(y-yy));
      if ( dist <= radius)
	DrawPixel(xx,yy,r,g,b);
 
    }
  }*/
  if (filled)
  {
    glPolygonMode(GL_FRONT_AND_BACK,GL_FILL);
  }else
  {
    glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
  }
  glPushMatrix();
  glTranslatef(float(x),float(y),0.0);
  glColor4f(r,g,b,1);
  glBegin(GL_POLYGON);
  
  for ( int i = 0; i < 8;i++)
  {
    float radangle = float(i)/8.0*2.0*3.141592653;
    
    glVertex3i(cos(radangle)*radius,sin(radangle)*radius,0.0);
    
  }
  
  
  glEnd();
  glPopMatrix();
  //gdk_draw_arc(backbuffer,area->style->fg_gc[GTK_WIDGET_STATE (area)],filled,x-radius/2,y-radius/2,radius,radius,0, 64 * 360);
  
}
void PositionDrawer::DrawPixel(int x,int y,char r, char g , char b)
{
  if (x < 0 || x > width || y < 0 || y > height)
    return;
  Uint16 *raw_pixels;
  raw_pixels = (Uint16 *)screen->pixels;
  Uint16 pixel_color;
  int offset;
  
  
  pixel_color =
		  CreateHicolorPixel(screen->format,
		  r,g,b);
  offset = (screen->pitch/2 * y + x);
  raw_pixels[offset] = pixel_color;
  
  
}
void PositionDrawer::Redraw(bool threadsafe)
{
  if ( not initialized )
  {
    SDL_Init(SDL_INIT_VIDEO);
  
    screen = SDL_SetVideoMode(width,height,16,SDL_OPENGL );
    
    if ( ! screen )
      error("Initializing SDL: %s",SDL_GetError());
    //glewInit();
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER,1);
    
    
    glViewport(0,0,width,height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0,width,height,0.0,0,1.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glDisable(GL_LIGHTING);
    glDisable(GL_DEPTH_TEST);
    //glDisable(GL_COLOR_MATERIAL);
    glEnable(GL_SMOOTH);
    //glEnable(GL_COLOR_MATERIAL);
    initialized = true;
  }
  glClearColor(0.2,0.2,0.2,0.0);
  glClear(GL_COLOR_BUFFER_BIT );
  debug("Redraw, ThreadSafe=%d",(int)threadsafe);
  //SDL_LockSurface(screen);
  /*for ( int y = 0; y < height;y++)
  {
    for ( int x = 0; x < width;x++)
    {
      DrawPixel(x,y,0,0,0);
    }
  }*/
  glLoadIdentity();
  glTranslatef(width/2,height/2,0.0);
  DrawDot(0.0,0.0,5,true,1.0,1.0,1.0,threadsafe);
  glRotatef(myorientation/(3.141592653*2.0)*360.0+90.0-180.0,0,0,1.0);
  
  std::map<unsigned long long int,playerpos*>::iterator it;
  for ( it = positions.begin();it != positions.end();it++)
  {
    if ( getcurrenttime() - (*it).second->lastupdate > 30.0 )
    {
      RemovePlayer((*it).first);
      continue;
    }
    bool alliance;
    int race = getplayerbyguid((*it).first)->race;
    if ( race == RACE_HUMAN or race == RACE_DRAENEI or race == RACE_DWARF or race == RACE_GNOME or race == RACE_NIGHTELF)
      alliance = true;
    else
      alliance = false;
    
    float diffx = myposx - (*it).second->x;
    float diffy = myposy - (*it).second->y;
    float diffz = myposz - (*it).second->z;
    if (alliance)
      DrawDot(-diffx,diffy,4,true,0,0,1.0,threadsafe);
    else
      DrawDot(-diffx,diffy,4,true,1.0,0,0,threadsafe);
    if ( selected == (*it).first )
      DrawDot(-diffx,diffy,8,false,0,1.0,1.0,false);
    
    drawarrow(-diffx,diffy,((*it).second->orientation)/(3.141592653*2.0)*360.0-90.0);

  }
  //DrawDot((width/2+5*cos(myorientation)),(height/2+5*sin(myorientation)),4,true,255,255,0,threadsafe);
  
  SDL_GL_SwapBuffers();
  //SDL_UnlockSurface(screen);
  //SDL_UpdateRect(screen,0,0,0,0);


  
}
