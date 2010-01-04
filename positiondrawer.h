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
#include <gtk/gtk.h>
#include <string>
#include <map>
#include <vector>
#include <GL/glew.h>
#include <SDL/SDL.h>
#include "Utility.h"
#ifndef POSITIONDRAWER_H
#define POSITIONDRAWER_H
typedef struct playerposition{
  float x;
  float y;
  float z;
  float orientation;
  double lastupdate;
} playerpos;
class PositionDrawer
{
  private:
    void DrawDot(int x, int y, int radius, bool filled, float r, float g, float b, bool threadsafe = true);
    void DrawPixel(int x,int y,char r, char g , char b);
    std::map<unsigned long long int,playerpos*> positions;
    float myposx;
    float myposy;
    float myposz;
    float myorientation;
    SDL_Surface *screen;
    SDL_Surface *image;
    bool initialized;
  public:
    unsigned long long int selected;
    int width;
    int height;
    PositionDrawer(int x , int y);
    void SetMyPosition(float x,float y,float z,float orientation);
    void UpdatePlayer(unsigned long long int guid,float x, float y, float z, float orientation);
    void RemovePlayer(unsigned long long int guid);
    void Redraw(bool threadsafe = true);
};

#endif // POSITIONDRAWER_H
