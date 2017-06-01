//
//  main.cpp
//  SDLExample
//
//  Created by Ichko  on 01/06/17.
//  Copyright © 2017 IliyaStark. All rights reserved.
//

#include <iostream>

#include <SDL2/SDL.h>

using namespace std;

SDL_Window *windowPtr = NULL;

//Screen surface ->

SDL_Surface *surfacePtr = NULL;

// Image surface ->

SDL_Surface *imagePtr = NULL;

// Inid SDL to prepare the window ->

bool initSDL()
{
    bool verify = true;
    
    if(SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        cout << "Impossible to inizialize the SDL" << endl;
        
        verify = false;
    }
    else
    {
        windowPtr = SDL_CreateWindow("Iliya Example", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 480, 480, SDL_WINDOW_SHOWN);
        
        if(windowPtr == NULL)
        {
            cout << "Can not open the windows" << endl;
        }
        else
        {
            surfacePtr = SDL_GetWindowSurface(windowPtr);
        }
    }
    
    return verify;
}

// Load Image ->

bool loadImage()
{
    bool verify = true;
    
    imagePtr = SDL_LoadBMP("Baboon.bmp");
    
    if(imagePtr == NULL)
    {
        cout << "Unable to load the image Baboon.bmp" << endl;
        
        verify = false;
    }
    
    return verify;
}

// Close Program ->

void closeProgram()
{
    SDL_FreeSurface(imagePtr);
    imagePtr = NULL;
    
    SDL_DestroyWindow(windowPtr);
    windowPtr = NULL;
    
    SDL_Quit();
}


int main(int argc, const char * argv[]) {
    
    initSDL();
    
    if(loadImage() == false)
    {
        cout << "Enable to start the Function" << endl;
    }
    else
    {
        // Apply the image ->
        
        SDL_BlitSurface(imagePtr, NULL, surfacePtr, NULL);
        
        SDL_UpdateWindowSurface(windowPtr);
        
        SDL_Delay(5000);
    }
    
    closeProgram();
    
    return 0;
}
