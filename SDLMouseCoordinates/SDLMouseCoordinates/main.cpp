//
//  main.cpp
//  SDLMouseCoordinates
//
//  Created by Ichko  on 02/06/17.
//  Copyright © 2017 IliyaStark. All rights reserved.
//

#include <iostream>

#include <SDL2/SDL.h>



using namespace std;

SDL_MouseButtonEvent *mousePtr = NULL;

SDL_Window *windowPtr = NULL;

SDL_Surface *surfacePtr = NULL;

bool initVideo()
{
    bool verify = true;
    
    if(SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        cout << "Problem to initalize VIDEO" << endl;
        
        verify = false;
    }
    else
    {
        windowPtr = SDL_CreateWindow("SDL Test", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, SDL_WINDOW_SHOWN);
        
        if(windowPtr == NULL)
        {
            cout << "Problem to create the WINDOW" << endl;
            
            verify = false;
        }
        else
        {
            surfacePtr = SDL_GetWindowSurface(windowPtr);
        }
    }
    
    return verify;
}

int main(int argc, const char * argv[]) {
    
    int counter = 0;
   
    initVideo();
    
    SDL_Event e;
    
    bool quit = true;
    
    while(quit == true)
    {
        while(SDL_PollEvent(&e) != 0)
        {
            if(e.type == SDL_QUIT)
            {
                quit = false;
            }
            
            else if(e.type == SDL_MOUSEBUTTONDOWN)
            {
                cout << "MOUSE PRESSED: ";
                
                counter++;
                
                int x;
                
                int y;
                
                SDL_GetMouseState(&x,&y);
                
                cout << counter << " Times " << endl;
                
                cout << "POSITION X -> " << x << endl;
                
                cout << "POSITION Y -> " << y << endl;
            }
        }
        
    }
    
    
    
    return 0;
}
