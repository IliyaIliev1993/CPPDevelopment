//
//  main.cpp
//  SDL-Tris
//
//  Created by Ichko  on 09/06/17.
//  Copyright © 2017 IliyaStark. All rights reserved.
//

#include <iostream>

#include <SDL2/SDL.h>

#include <SDL2_image/SDL_image.h>

SDL_Window *windowPtr = NULL;

SDL_Texture *texturePtr = NULL;

SDL_Texture *textureX = NULL;

SDL_Texture *texture0 = NULL;

SDL_Renderer *rendererPtr = NULL;

using namespace std;

bool initVideo()
{
    bool verify = true;
    
    if(SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        cout << "Problem to Inizialize Video" << endl;
        
        verify = false;
    }
    else
    {
        if(!(SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "1")))
        {
            cout << "Filtering Not Enabled !" << endl;
        }
        
        windowPtr = SDL_CreateWindow("Tris", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 600, SDL_WINDOW_SHOWN);
        
        if(windowPtr == NULL)
        {
            cout << "Problem to create WINDOW" << endl;
            
            verify = false;
        }
        else
        {
            rendererPtr = SDL_CreateRenderer(windowPtr, 0, SDL_RENDERER_SOFTWARE);
            
            int imgPng = IMG_INIT_PNG;
            
            if(!(IMG_Init(imgPng) &imgPng))
            {
                cout << "Problem to Convert IMG" << endl;
            }
        }
    }
    
    return verify;
}

//

bool loadMediaBackground()
{
    bool verify = true;
    
    texturePtr = IMG_LoadTexture(rendererPtr, "background.png");
    
    if(texturePtr == NULL)
    {
        cout << "Problem to load Texture" << endl;
        
        verify = false;
    }
    
    textureX = IMG_LoadTexture(rendererPtr, "Imagex.png");
    
    if(textureX == NULL)
    {
        cout << "Problem to create texturex" << endl;
    }
    
    texture0 = IMG_LoadTexture(rendererPtr, "image0.png");
    
    if(texture0 == NULL)
    {
        cout << "Problem to create texture0" << endl;
    }
    
    return verify;
    
}

//

/*SDL_Texture *loadTexture(string path)
{
    SDL_Texture *imageToReturn = NULL;
    
    SDL_Surface *imageLoad = IMG_Load(path.c_str());
    
    if(imageLoad == NULL)
    {
        cout << "Problem to IMageLoad" << endl;
    }
    else
    {
        imageToReturn = SDL_CreateTextureFromSurface(rendererPtr, imageLoad);
        
        if(imageToReturn == NULL)
        {
            cout << "Problem to Convert Surface to Texture" << endl;
        }
        
        SDL_FreeSurface(imageLoad);
    }
    
    return imageToReturn;
}*/




int main(int argc, const char * argv[]) {
   
    initVideo();
    
    loadMediaBackground();
    
    // rect1
    
    SDL_Rect rect1;
    
    rect1.x = 0;
    
    rect1.y = 0;
    
    rect1.w = 182;
    
    rect1.h = 182;
    
    SDL_Rect rect2;
    
    rect2.x = 210;
    
    rect2.y = 0;
    
    rect2.w = 182;
    
    rect2.h = 182;
    
    SDL_Rect rect3;
    
    rect3.x = 418;
    
    rect3.y = 0;
    
    rect3.w = 182;
    
    rect3.h = 182;
    
    SDL_Rect rect4;
    
    rect4.x = 0;
    
    rect4.y = 210;
    
    rect4.w = 182;
    
    rect4.h = 182;
    
    SDL_Rect rect5;
    
    rect5.x = 206;
    
    rect5.y = 210;
    
    rect5.w = 182;
    
    rect5.h = 182;
    
    SDL_Rect rect6;
    
    rect6.x = 418;
    
    rect6.y = 210;
    
    rect6.w = 182;
    
    rect6.h = 182;
    
    SDL_Rect rect7;
    
    rect7.x = 0;
    
    rect7.y = 418;
    
    rect7.w = 182;
    
    rect7.h = 182;
    
    SDL_Rect rect8;
    
    rect8.x = 210;
    
    rect8.y = 418;
    
    rect8.w = 182;
    
    rect8.h = 182;
    
    SDL_Rect rect9;
    
    rect9.x = 420;
    
    rect9.y = 420;
    
    rect9.w = 182;
    
    rect9.h = 182;
    
    
    
    
    int counter = 0;
    
    int mX;
    
    int mY;
    
    bool verify = false;
    
    bool verify2 = false;
    
    bool verify3 = false;
    
    bool verify4 = false;
    
    bool verify5 = false;
    
    bool verify6 = false;
    
    bool verify7 = false;
    
    bool verify8 = false;
    
    bool verify9 = false;
    
    SDL_Event ev;

    
    
        while(SDL_PollEvent(&ev) != SDL_QUIT)
        {
            if(ev.type == SDL_QUIT)
            {
                break;
            }
            
            SDL_RenderClear(rendererPtr);
            
            SDL_RenderCopy(rendererPtr, texturePtr, NULL, NULL);
            
            SDL_RenderPresent(rendererPtr);
            
            
            if(ev.type == SDL_MOUSEBUTTONDOWN || ev.type == SDL_MOUSEBUTTONUP)
            {
                SDL_GetMouseState(&mX, &mY);
                
                const int x = mX;
                
                const int y = mY;
                
                if(x >= 0 && x <= 182 && y >= 0 && y <= 182)
                {
                    verify = true;
                    
                    counter++;
                    
                    SDL_RenderClear(rendererPtr);
                    
                    SDL_RenderCopy(rendererPtr, texturePtr, NULL, NULL);
                    
                    SDL_RenderCopy(rendererPtr, textureX, NULL, &rect1);
                
                    SDL_RenderPresent(rendererPtr);
                }
                
                if(x >= 206 && x <= 394 && y >= 0 && y <= 182)
                {
                    verify2 = true;
                
                    SDL_RenderClear(rendererPtr);
                        
                    SDL_RenderCopy(rendererPtr, texturePtr, NULL, NULL);
                        
                    SDL_RenderCopy(rendererPtr, texture0, NULL, &rect2);
                        
                    SDL_RenderPresent(rendererPtr);
                    
                }
                
                if(x >= rect3.x && x <= 600 && y >= rect3.y && y <= 182)
                {
                    verify3 = true;
                    
                    SDL_RenderClear(rendererPtr);
                    
                    SDL_RenderCopy(rendererPtr, texturePtr, NULL, NULL);
                    
                    SDL_RenderCopy(rendererPtr, textureX, NULL, &rect3);
                    
                    SDL_RenderPresent(rendererPtr);
                }
                
                if(x >= rect4.x && x <= 182 && y >= rect4.y && y <= 394)
                {
                    verify4 = true;
                
                    SDL_RenderClear(rendererPtr);
                    
                    SDL_RenderCopy(rendererPtr, texturePtr, NULL, NULL);
                    
                    SDL_RenderCopy(rendererPtr, texture0, NULL, &rect4);
                    
                    SDL_RenderPresent(rendererPtr);
                }
                
                if(x >= rect5.x && x <= 394 && y >= rect5.y && y <= 394)
                {
                    verify5 = true;
                    
                    SDL_RenderClear(rendererPtr);
                    
                    SDL_RenderCopy(rendererPtr, texturePtr, NULL, NULL);
                    
                    SDL_RenderCopy(rendererPtr, textureX, NULL, &rect5);
                    
                    SDL_RenderPresent(rendererPtr);
                }
                
                if(x >= rect6.x && x <= 600 && y >= rect6.y && y <= 394)
                {
                    verify6 = true;
                    
                    SDL_RenderClear(rendererPtr);
                    
                    SDL_RenderCopy(rendererPtr, texturePtr, NULL, NULL);
                    
                    SDL_RenderCopy(rendererPtr, texture0, NULL, &rect6);
                    
                    SDL_RenderPresent(rendererPtr);
                }
                
                if(x >= rect7.x && x <= 182 && y >= rect7.y && y <= 600)
                {
                    verify7 = true;
                    
                    SDL_RenderClear(rendererPtr);
                    
                    SDL_RenderCopy(rendererPtr, texturePtr, NULL, NULL);
                    
                    SDL_RenderCopy(rendererPtr, textureX, NULL, &rect7);
                    
                    SDL_RenderPresent(rendererPtr);
                }
                
                if(x >= rect8.x && x <= 394 && y >= rect8.y && y <= 600)
                {
                    verify8 = true;
                    
                    SDL_RenderClear(rendererPtr);
                    
                    SDL_RenderCopy(rendererPtr, texturePtr, NULL, NULL);
                    
                    SDL_RenderCopy(rendererPtr, texture0, NULL, &rect8);
                    
                    SDL_RenderPresent(rendererPtr);
                }
                
                if(x >= rect9.x && x <= 600 && y >= rect9.y && y <= 600)
                {
                    
                    verify9 = true;
                    
                    SDL_RenderClear(rendererPtr);
                    
                    SDL_RenderCopy(rendererPtr, texturePtr, NULL, NULL);
                    
                    SDL_RenderCopy(rendererPtr, textureX, NULL, &rect9);
                    
                    SDL_RenderPresent(rendererPtr);
                }
            }
            
           // SDL_RenderPresent(rendererPtr);
            
            if(verify == true)
            {
                SDL_RenderClear(rendererPtr);
                
                SDL_RenderCopy(rendererPtr, texturePtr, NULL, NULL);
                
                SDL_RenderCopy(rendererPtr, textureX, NULL, &rect1);
                
                SDL_RenderPresent(rendererPtr);
                
            }
            
            if(verify2 == true)
            {
                SDL_RenderClear(rendererPtr);
                
                SDL_RenderCopy(rendererPtr, texturePtr, NULL, NULL);
                
                SDL_RenderCopy(rendererPtr, texture0, NULL, &rect2);
                
                SDL_RenderPresent(rendererPtr);
                
            }
            if(verify3 == true)
            {
                SDL_RenderClear(rendererPtr);
                
                SDL_RenderCopy(rendererPtr, texturePtr, NULL, NULL);
                
                SDL_RenderCopy(rendererPtr, textureX, NULL, &rect3);
                
                SDL_RenderPresent(rendererPtr);
            }
            
            if(verify4 == true)
            {
                SDL_RenderClear(rendererPtr);
                
                SDL_RenderCopy(rendererPtr, texturePtr, NULL, NULL);
                
                SDL_RenderCopy(rendererPtr, texture0, NULL, &rect4);
                
                SDL_RenderPresent(rendererPtr);
            }
            
            if(verify5 == true)
            {
                
                SDL_RenderClear(rendererPtr);
                
                SDL_RenderCopy(rendererPtr, texturePtr, NULL, NULL);
                
                SDL_RenderCopy(rendererPtr, textureX, NULL, &rect5);
                
                SDL_RenderPresent(rendererPtr);
            }
    
            if(verify6 == true)
            {
                SDL_RenderClear(rendererPtr);
                
                SDL_RenderCopy(rendererPtr, texturePtr, NULL, NULL);
                
                SDL_RenderCopy(rendererPtr, texture0, NULL, &rect6);
                
                SDL_RenderPresent(rendererPtr);
            }
            
            if(verify7 == true)
            {
                SDL_RenderClear(rendererPtr);
                
                SDL_RenderCopy(rendererPtr, texturePtr, NULL, NULL);
                
                SDL_RenderCopy(rendererPtr, textureX, NULL, &rect7);
                
                SDL_RenderPresent(rendererPtr);
            }
            
            if(verify8 == true)
            {
                
                SDL_RenderClear(rendererPtr);
                
                SDL_RenderCopy(rendererPtr, texturePtr, NULL, NULL);
                
                SDL_RenderCopy(rendererPtr, texture0, NULL, &rect8);
                
                SDL_RenderPresent(rendererPtr);
            }
            
            if(verify9 == true)
            {
                
                SDL_RenderClear(rendererPtr);
                
                SDL_RenderCopy(rendererPtr, texturePtr, NULL, NULL);
                
                SDL_RenderCopy(rendererPtr, textureX, NULL, &rect9);
                
                SDL_RenderPresent(rendererPtr);
            }
            

        }
    
    
    
    
    return 0;
}
