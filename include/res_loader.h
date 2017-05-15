#ifndef RES_LOADER_H
#define RES_LOADER_H

#include <SDL.h>
#include <SDL_image.h>
#include "error.h"
#include "res_path.h"
#include "cleanup.h"

/*
 * Loads an image into a texture on the rendering device
 * @param file The image file to load
 * @param ren The renderer to load the texture onto
 * @return the loaded texture, or nullptr if something went wrong.
 */
SDL_Texture* LoadTexture(const std::string &file, SDL_Renderer *ren){
	SDL_Texture *texture = IMG_LoadTexture(ren, file.c_str());
	if (texture == nullptr){
		logSDLError(std::cout, "LoadTexture");
	}
	return texture;
}
/**
 * Ensures a resource path is loaded before we load the texture.
 * @param  path of the image file to load
 * @param  name of the file
 * @param  the intended renderer to load on to.
 * @return loaded texture if successful. 
 */
SDL_Texture* LoadResource(const std::string relative_path, const std::string file_name, SDL_Renderer *renderer) {
  const std::string resPath = getResourcePath(relative_path);
  SDL_Texture *image = LoadTexture(resPath + file_name, renderer);
  if (image == nullptr){
    cleanup(image);
    logSDLError(std::cout, "LoadResource");
  }
  return image;
}

#endif
