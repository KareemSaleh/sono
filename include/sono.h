#ifndef SONO_H
#define SONO_H

#include <iostream>
#include <string>
#include <SDL.h>
#include <SDL_image.h>

class Sono {

private:
  void logSDLError(std::ostream &os, const std::string &msg);
  SDL_Texture* loadTexture(const std::string &file, SDL_Renderer *ren);
  void renderTexture(SDL_Texture *tex, SDL_Renderer *ren, SDL_Rect dst, SDL_Rect *clip);
  void renderTexture(SDL_Texture *tex, SDL_Renderer *ren, int x, int y, SDL_Rect *clip);

public:
  Sono();

};

#endif
