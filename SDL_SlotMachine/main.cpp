//
//  main.cpp
//  SDL_SlotMachine
//
//  Created by Ichko  on 12/06/17.
//  Copyright © 2017 IliyaStark. All rights reserved.
//

#include <iostream>

#include <SDL2/SDL.h>

#include <SDL2_image/SDL_image.h>

#include <SDL2_ttf/SDL_ttf.h>

#include <vector>

using namespace std;

SDL_Window *windowPtr = NULL;

SDL_Renderer *rendererPtr = NULL;

SDL_Texture *textureBackground = NULL;

SDL_Texture *textureSlot = NULL;

SDL_Texture *textureButton = NULL;

SDL_Texture *textureButtonPushed = NULL;

SDL_Texture *textureCardRight = NULL;

SDL_Texture *textureCardMiddle = NULL;

SDL_Texture *textureCardLeft = NULL;

SDL_Texture *texturePNGRandom = NULL;

const int w = 1280;

const int h = 768;


void loadMedia()
{
    
    if(SDL_Init(SDL_INIT_EVERYTHING) < 0)
    {
        cerr << "Problem to INIZIALIZE EVERITHGYNG" << endl;
    }
    
    windowPtr = SDL_CreateWindow("SlotMachine", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, w, h, SDL_WINDOW_SHOWN);
    
    if(windowPtr == NULL)
    {
        cerr << "Problem to load WINDOW" << endl;
    }
    else
    {
        rendererPtr = SDL_CreateRenderer(windowPtr, -1, SDL_RENDERER_ACCELERATED);
        
        if(rendererPtr == NULL)
        {
            cerr << "Problem to create RENDERER" << endl;
        }
        
    }
}

//

void loadTexture()
{
    textureBackground = IMG_LoadTexture(rendererPtr, "wallpaper.png");
    
    if(textureBackground == NULL)
    {
        cerr << "Problem to Load WALLPAPER" << endl;
    }
    
    textureSlot = IMG_LoadTexture(rendererPtr, "slot.png");
    
    if(textureSlot == NULL)
    {
        cerr << "Problem to Load SLOT" << endl;
    }
    
    textureButton = IMG_LoadTexture(rendererPtr, "button.png");
    
    if(textureButton == NULL)
    {
        cerr << "Problem to load BUTTON" << endl;
    }
    
    textureButtonPushed = IMG_LoadTexture(rendererPtr, "buttonPushed.png");
    
    if(textureButtonPushed == NULL)
    {
        cerr << "Problem to load BUTTON PUSHED" << endl;
    }
    
    textureCardRight = IMG_LoadTexture(rendererPtr, "apple.png");
    
    if(textureCardRight == NULL)
    {
        cerr << "Problem to load CARD RIGHT" << endl;
    }
    
    textureCardMiddle = IMG_LoadTexture(rendererPtr, "apple.png");
    
    if(textureCardMiddle == NULL)
    {
        cerr << "Problem to load CARD MIDDLE" << endl;
    }
    
    textureCardLeft = IMG_LoadTexture(rendererPtr, "apple.png");
    
    if(textureCardLeft == NULL)
    {
        cerr << "Problem to load CARD LEFT" << endl;
    }
}

//

void closeProgram()
{
    SDL_DestroyTexture(textureBackground);
    
    SDL_DestroyTexture(textureSlot);
    
    SDL_DestroyTexture(textureButton);
    
    SDL_DestroyTexture(textureButtonPushed);
    
    SDL_DestroyTexture(textureCardRight);
    
    SDL_DestroyTexture(textureCardMiddle);
    
    SDL_DestroyTexture(textureCardLeft);
    
    textureBackground = NULL;
    
    textureSlot = NULL;
    
    textureButton = NULL;
    
    textureButtonPushed = NULL;
    
    textureCardRight = NULL;
    
    textureCardMiddle = NULL;
    
    textureCardLeft = NULL;
    
    //
    
    SDL_DestroyRenderer(rendererPtr);
    
    rendererPtr = NULL;
    
    //
    
    SDL_DestroyWindow(windowPtr);
    
    windowPtr = NULL;
    
    //
    
    IMG_Quit();
    
    SDL_Quit();
    
}

vector<string>vectorImagesRight = {"apple.png","banana.png","bar.png","cherry.png","grape.png","lemon.png","orange.png","watermelon.png","apple.png","banana.png","bar.png","cherry.png","grape.png","lemon.png","orange.png","watermelon.png","apple.png","banana.png","bar.png","cherry.png","grape.png","lemon.png","orange.png","watermelon.png"};

vector<string>vectorImagesMiddle = {"apple.png","banana.png","bar.png","cherry.png","grape.png","lemon.png","orange.png","watermelon.png","apple.png","banana.png","bar.png","cherry.png","grape.png","lemon.png","orange.png","watermelon.png"};


int main(int argc, const char * argv[]) {
    
    loadMedia();
    
    loadTexture();
    
    // Rects
    
    SDL_Rect rectSlot;
    
    rectSlot.x = 315;
    
    rectSlot.y = 100;
    
    rectSlot.h = 480;
    
    rectSlot.w = 640;
    
    
    SDL_Rect rectButton;
    
    rectButton.x = 293;
    
    rectButton.y = 581;
    
    rectButton.h = 120;
    
    rectButton.w = 680;
    
    SDL_Rect rectCardRight;
    
    rectCardRight.x = 730;
    
    rectCardRight.y = 265;
    
    rectCardRight.h = 213;
    
    rectCardRight.w = 166;
    
    SDL_Rect rectCardMiddle;
    
    rectCardMiddle.x = 555;
    
    rectCardMiddle.y = 266;
    
    rectCardMiddle.h = 213;
    
    rectCardMiddle.w = 166;
    
    SDL_Rect rectCardLeft;
    
    rectCardLeft.x = 379;
    
    rectCardLeft.y = 265;
    
    rectCardLeft.h = 213;
    
    rectCardLeft.w = 166;
    
    
    //
    
    bool quit = true;
    
    SDL_Event ev;
    
    while(quit == true)
    {
        while (SDL_PollEvent(&ev) != 0)
        {
            if(ev.type == SDL_QUIT)
            {
                quit = false;
            }
            
            int x = 0;
            
            int y = 0;
            
            SDL_GetMouseState(&x, &y);
            
            cout << "x-> " << x << " y-> " << y << endl;
            
            SDL_RenderClear(rendererPtr);
            
            SDL_RenderCopy(rendererPtr, textureBackground, NULL, NULL);
            
            SDL_RenderCopy(rendererPtr, textureSlot, NULL, &rectSlot);
            
            SDL_RenderCopy(rendererPtr, textureButton, NULL, &rectButton);
            
            SDL_RenderCopy(rendererPtr, textureCardRight, NULL, &rectCardRight);
            
            SDL_RenderCopy(rendererPtr, textureCardMiddle, NULL, &rectCardMiddle);
            
            SDL_RenderCopy(rendererPtr, textureCardLeft, NULL, &rectCardLeft);
            
            if(ev.type == SDL_MOUSEBUTTONDOWN)
            {
                if(x >= rectButton.x && x <= 973 && y >= rectButton.y && y <= 701)
                {
                    
                    SDL_RenderCopy(rendererPtr, textureButtonPushed, NULL, &rectButton);
                    
                    SDL_RenderPresent(rendererPtr);
                    
                    SDL_Delay(300);
                    
                }
            
                
            }
            
            else if(ev.type == SDL_MOUSEBUTTONUP)
            {
                int numRandom = rand() % 7;
                
                int numRandomMiddle = rand() % 7;
                
                int numRandomLeft = rand() % 7;
                
                SDL_RenderCopy(rendererPtr, textureButton, NULL, &rectButton);
                
                SDL_RenderPresent(rendererPtr);
                
                for(int i = 0; i < vectorImagesRight.size(); i++)
                {
                    texturePNGRandom = IMG_LoadTexture(rendererPtr, vectorImagesRight[i].c_str());
                    
                    SDL_RenderCopy(rendererPtr, texturePNGRandom, NULL, &rectCardRight);
                    
                    SDL_RenderCopy(rendererPtr, texturePNGRandom, NULL, &rectCardMiddle);
                    
                    SDL_RenderCopy(rendererPtr, texturePNGRandom, NULL, &rectCardLeft);
                    
                    SDL_RenderPresent(rendererPtr);
                    
                    SDL_Delay(100);
                    
                    
                }
                
//                SDL_RenderCopy(rendererPtr, textureCardLeft, NULL, &rectCardLeft);
//                
//                //SDL_RenderPresent(rendererPtr);
//                
//                for(int i = 0; i < 14; i++)
//                {
//                    texturePNGRandom = IMG_LoadTexture(rendererPtr, vectorImagesRight[i].c_str());
//                    
//                    SDL_RenderCopy(rendererPtr, texturePNGRandom, NULL, &rectCardRight);
//                    
//                    SDL_RenderCopy(rendererPtr, texturePNGRandom, NULL, &rectCardMiddle);
//                    
//                    SDL_RenderPresent(rendererPtr);
//                    
//                    SDL_Delay(100);
//                }
                
                textureCardRight = IMG_LoadTexture(rendererPtr, vectorImagesRight[numRandom].c_str());
                
                SDL_RenderCopy(rendererPtr, textureCardRight, NULL, &rectCardRight);
                
                textureCardMiddle = IMG_LoadTexture(rendererPtr, vectorImagesRight[numRandomMiddle].c_str());
                
                SDL_RenderCopy(rendererPtr,textureCardMiddle,NULL,&rectCardMiddle);
                
                textureCardLeft = IMG_LoadTexture(rendererPtr, vectorImagesRight[numRandomLeft].c_str());
                
                SDL_RenderCopy(rendererPtr, textureCardLeft, NULL, &rectCardLeft);
            }
            
            SDL_RenderPresent(rendererPtr);
        }
    }
    
    closeProgram();
    
    return 0;
}
