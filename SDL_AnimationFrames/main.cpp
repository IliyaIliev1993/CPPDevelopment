//
//  main.cpp
//  SDL_AnimationFrames
//
//  Created by Ichko  on 06/06/17.
//  Copyright © 2017 IliyaStark. All rights reserved.
//

#include <iostream>

#include <SDL2/SDL.h>

#include <SDL2_image/SDL_image.h>

#include <vector>

#include <string>

using namespace std;

SDL_Window *windowPtr = NULL;

SDL_Surface *surfacePtr = NULL;

SDL_Renderer *rendererPtr = NULL;

SDL_Surface *png1 = NULL;

SDL_Surface *png2 = NULL;

SDL_Surface *png3 = NULL;

SDL_Surface *png4 = NULL;

SDL_Surface *png5 = NULL;

SDL_Surface *png6 = NULL;

SDL_Surface *png7 = NULL;

SDL_Surface *png8 = NULL;

SDL_Surface *png9 = NULL;

SDL_Surface *png10 = NULL;

SDL_Surface *png11 = NULL;

SDL_Surface *png12 = NULL;

SDL_Surface *png13 = NULL;


vector<SDL_Surface*>myVector;

// Inizialize VIDEO

bool initVideo()
{
    bool verify = true;
    
    if(SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        cout << "Problem to INIZIALIZE VIDEO" << endl;
        
        verify = false;
    }
    else
    {
        windowPtr = SDL_CreateWindow("ANIMATION", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 280, 480, SDL_WINDOW_SHOWN);
        
        if(windowPtr == NULL)
        {
            cout << "Problem to CREATE WINDOW" << endl;
            
            verify = false;
        }
        else
        {
        
            int pngConvertor = IMG_INIT_PNG;
            
            if(!(IMG_Init(pngConvertor) &pngConvertor))
            {
                cout << "ERROR TO INIZIALIZE PNG" << endl;
            }
            else
            {
                surfacePtr = SDL_GetWindowSurface(windowPtr);
            }
        
            rendererPtr = SDL_CreateRenderer(windowPtr, -1, 0);
        
            SDL_SetRenderDrawColor(rendererPtr, 255, 255, 255, 0);
        
            SDL_RenderClear(rendererPtr);
        
            SDL_RenderPresent(rendererPtr);
        }
        
    }
    
    return verify;
}

// Path to load images

SDL_Surface *loadImage(string path)
{
    SDL_Surface *imageToBeReturned = NULL;
    
    SDL_Surface *pathPtr = IMG_Load(path.c_str());
    
    if(pathPtr == NULL)
    {
        cout << "Proble to LOAD IMAGES" << endl;
    }
    else
    {
        imageToBeReturned = SDL_ConvertSurface(pathPtr, surfacePtr->format, NULL);
        
        if(imageToBeReturned == NULL)
        {
            cout << "Problem to LOAD ImageToBeReturned" << endl;
        }
        else
        {
            SDL_FreeSurface(pathPtr);
        }
    }
    
    return imageToBeReturned;
}

int main(int argc, const char * argv[]) {
    
    
    initVideo();
    
    // load Images from Path
    
    png1 = loadImage("frame1.png");
    
    if(png1 == NULL)
    {
        cout << "Problem to load PNG1" << endl;
    }
    
    png2 = loadImage("frame2.png");
    
    png3 = loadImage("frame3.png");
    
    png4 = loadImage("frame4.png");
    
    png5 = loadImage("frame5.png");
    
    png6 = loadImage("frame6.png");
    
    png7 = loadImage("frame7.png");
    
    png8 = loadImage("frame8.png");
    
    png9 = loadImage("frame9.png");
    
    png10 = loadImage("frame10.png");
    
    png11 = loadImage("frame11.png");
    
    png12 = loadImage("frame12.png");
    
    png13 = loadImage("frame13.png");
    
    
    
    // pushing surfaces in vector;
    
    myVector.push_back(png1);
    
    myVector.push_back(png2);
    
    myVector.push_back(png3);
    
    myVector.push_back(png4);
    
    myVector.push_back(png5);
    
    myVector.push_back(png6);
    
    myVector.push_back(png7);
    
    myVector.push_back(png8);
    
    myVector.push_back(png9);
    
    myVector.push_back(png10);
    
    myVector.push_back(png11);
    
    myVector.push_back(png12);
    
    for(int i = 0; i < myVector.size(); i++)
    {
        SDL_BlitSurface(myVector[i], NULL, surfacePtr, NULL);
        
        SDL_UpdateWindowSurface(windowPtr);
        
        SDL_FreeSurface(surfacePtr);
        
        SDL_UpdateWindowSurface(windowPtr);
        
        SDL_Delay(100);
        
        
        
        if(i + 1 == myVector.size())
        {
            i = 0;
        }
    }
    
   
    

    
    return 0;
}
