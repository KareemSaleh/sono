#ifndef SPRITE_H
#define SPRITE_H

#include <iostream>
#include <string>
#include <SDL.h>
#include <SDL_image.h>
#include "error.h"

class Sprite {

private:
  int x, y, w, h;

public:
  Sprite(SDL_Texture *tex);
  ~Sprite();

};

#endif
