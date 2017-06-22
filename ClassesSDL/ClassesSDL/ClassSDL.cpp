//
//  ClassSDL.cpp
//  ClassesSDL
//
//  Created by Ichko  on 22/06/17.
//  Copyright © 2017 IliyaStark. All rights reserved.
//

#include "ClassSDL.hpp"

Frames::Frames()
{
    
}

//

int Frames::getW()
{
    return this->w;;
}

int Frames::getH()
{
    return this->h;
}

//

void Frames::loadVideo()
{
    if(SDL_Init(SDL_INIT_EVERYTHING) < 0)
    {
        cerr << "Problem to INITIALIZE EVERYTHING" << endl;
    }
    else
    {
        windowPtr = SDL_CreateWindow("Frames", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, getW(), getH(), SDL_WINDOW_SHOWN);
        
        if(windowPtr == NULL)
        {
            cerr << "Problem to create WINDOW" << endl;
        }
        else
        {
            rendererPtr = SDL_CreateRenderer(windowPtr, -1, SDL_RENDERER_SOFTWARE);
            
            if(rendererPtr == NULL)
            {
                cerr << "Problem to create RENDERER" << endl;
            }
        }
    }
}

//

SDL_Texture* Frames:: loadImage(string path)
{
    SDL_Texture *imageReturn = NULL;
    
    imageReturn = IMG_LoadTexture(rendererPtr, path.c_str());
    
    if(imageReturn == NULL)
    {
        cerr << "Problem to load Image" << endl;
    }
    
    return imageReturn;
}

//

void Frames:: closeProgram()
{
    SDL_DestroyTexture(textureBackground);
    
    textureBackground = NULL;
    
    SDL_DestroyRenderer(rendererPtr);
    
    textureBackground = NULL;
    
    SDL_DestroyWindow(windowPtr);
    
    windowPtr = NULL;
}






