//
//  ClassSDL.hpp
//  ClassesSDL
//
//  Created by Ichko  on 22/06/17.
//  Copyright © 2017 IliyaStark. All rights reserved.
//

#ifndef ClassSDL_hpp
#define ClassSDL_hpp

#include <iostream>

#include <SDL2/SDL.h>

#include <SDL2_image/SDL_image.h>

#include <SDL2_ttf/SDL_ttf.h>

using namespace std;

class Frames
{
private:
    
    const int w = 320;
    
    const int h = 480;
    
public:
    
    SDL_Window *windowPtr = NULL;
    
    SDL_Renderer *rendererPtr = NULL;
    
    SDL_Texture *textureBackground = NULL;
    
    SDL_Texture *textureBall = NULL;
    
    Frames();
    
    int getW();
    
    int getH();
    
    void loadVideo();
    
    SDL_Texture *loadImage(string path);
    
    void closeProgram();
    
    
    
};

#endif /* ClassSDL_hpp */
