//
//  main.cpp
//  SDL_MovingFrames
//
//  Created by Ichko  on 15/06/17.
//  Copyright © 2017 IliyaStark. All rights reserved.
//

#include <iostream>

#include <SDL2/SDL.h>

#include <SDL2_image/SDL_image.h>

#include <string>

using namespace std;

SDL_Window *windowPtr = NULL;

SDL_Renderer *renderPtr = NULL;

SDL_Texture *texturePtr = NULL;

SDL_Texture *background = NULL;

SDL_Texture *background2 = NULL;

void loadMedia()
{
    windowPtr = SDL_CreateWindow("Window", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_SHOWN);
    
    if(windowPtr == NULL)
    {
        cerr << "Problem to create window" << endl;
    }
    else
    {
        renderPtr = SDL_CreateRenderer(windowPtr, -1, SDL_RENDERER_SOFTWARE);
    }
}

SDL_Texture *loadImage(string path)
{
    SDL_Texture *textureReturn = NULL;
    
    textureReturn = IMG_LoadTexture(renderPtr, path.c_str());
    
    if(textureReturn == NULL)
    {
        cerr << "Problem to load texture" << endl;
    
    
    }
    
    return textureReturn;
}

int main(int argc, const char * argv[]) {
    
    SDL_Event ev;
    
    loadMedia();
    
    texturePtr = loadImage("frame1.png");
    
    background = loadImage("bg.png");
    
    background2 = loadImage("bg.png");
    
    if(background == NULL)
    {
        cerr << "Problem to load Background" << endl;
    }
    
    SDL_Rect rectImage;
    
    rectImage.x = 0;
    
    rectImage.y = 200;
    
    rectImage.w = 100;
    
    rectImage.h = 250;
    
    SDL_Rect rectBack;
    
    rectBack.x = 0;
    
    rectBack.y = 0;
    
    rectBack.w = 800;
    
    rectBack.h = 600;
    
    int counterX = 0;
    
    int counterB = 0;
    
    bool exit = true;
    
    while(exit == true)
    {
        while(SDL_PollEvent(&ev) != 0)
        {
            if(ev.type == SDL_QUIT)
            {
                exit = false;
            }
            
            SDL_RenderCopy(renderPtr, background2, NULL, NULL);
            
            SDL_RenderCopy(renderPtr, background, NULL, &rectBack);
            
            SDL_RenderCopy(renderPtr, texturePtr, NULL, &rectImage);
            
            //SDL_RenderPresent(renderPtr);
            
            if(ev.type == SDL_MOUSEBUTTONDOWN || ev.type == SDL_MOUSEBUTTONUP)
            {
                counterX++;
                
                counterB++;
                
                rectImage.x = rectImage.x + counterX;
                
                rectBack.x = counterB;
                
                cout << rectBack.x << endl;
                
                SDL_RenderClear(renderPtr);
                
                string counteS = to_string(counterX);
                
                if(counterX >= 12)
                {
                    counterX = 0;
                }
                
                if(rectImage.x >= 800)
                {
                    rectImage.x = 0;
                }
                
                if(rectBack.x >= 800)
                {
                    rectBack.x = 0;
                    
                    counterB = 0;
                }
                
                texturePtr = loadImage("frame" + counteS + ".png");
                
                SDL_RenderCopy(renderPtr, background2, NULL, NULL);
                
                SDL_RenderCopy(renderPtr, background, NULL, &rectBack);
                
                SDL_RenderCopy(renderPtr, texturePtr, NULL, &rectImage);
            }
            
            SDL_RenderPresent(renderPtr);
        }
    }
    
    
    return 0;
}
