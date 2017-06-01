#ifndef SPRITE_H
#define SPRITE_H

#include <iostream>
#include <string>
#include <SDL.h>
#include <SDL_image.h>
#include "error.h"

class Sprite {

public:
  std::string Type;
  int Id;

  Sprite(SDL_Texture *tex);
  ~Sprite();
  void Move(int x, int y = 0, int z = 0);

private:
  int x, y, w, h;
};

#endif
