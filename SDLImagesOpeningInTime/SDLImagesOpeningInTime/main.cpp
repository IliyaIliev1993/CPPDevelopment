//
//  main.cpp
//  SDLImagesOpeningInTime
//
//  Created by Ichko  on 01/06/17.
//  Copyright © 2017 IliyaStark. All rights reserved.
//

#include <iostream>

#include <SDL2/SDL.h>

#include <SDL2_image/SDL_image.h>

#include <vector>

#include <string>

using namespace std;

vector<SDL_Surface*>myVector;

SDL_Window *windowPtr = NULL;

SDL_Surface *surfacePtr = NULL;

SDL_Surface *png1 = NULL;

SDL_Surface *png2 = NULL;

SDL_Surface *png3 = NULL;

SDL_Surface *png4 = NULL;

SDL_Surface *png5 = NULL;

bool initSDL()
{
    bool verifyInit = true;
    
    if(SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        cout << "Enable to INITIALIZE VIDEO" << endl;
        
        verifyInit = false;
    }
    else
    {
        windowPtr = SDL_CreateWindow("TrySDL", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 200, 320, SDL_WINDOW_SHOWN);
        
        int imgFlag = IMG_INIT_PNG;
        
        if(!(IMG_Init(imgFlag) &imgFlag))
        {
            cout << "Problem to initialize PNG" << endl;
        }
        else
        {
            surfacePtr = SDL_GetWindowSurface(windowPtr);
        }
    }
    
    return verifyInit;
}

SDL_Surface *loadImages(std::string path)
{
    SDL_Surface *finalImage = NULL;
    
    SDL_Surface *pathPtr = IMG_Load(path.c_str());
    
    if(pathPtr == NULL)
    {
        cout << "Can not load images" << endl;
    }
    else
    {
        finalImage = SDL_ConvertSurface(pathPtr, surfacePtr->format, NULL);
        
        if(finalImage == NULL)
        {
            cout << "Unable to convert image" << endl;
        }
        else
        {
            SDL_FreeSurface(pathPtr);
        }
    }
    
    return finalImage;
}

bool loadImages()
{
    
    bool verify = true;
    
    png1 = loadImages("water1.png");
    
    if(png1 == NULL)
    {
        cout << "Can not open water1" << endl;
        
        verify = false;
    }
    
    png2 = loadImages("water2.png");
    
    png3 = loadImages("water3.png");
    
    png4 = loadImages("water4.png");
    
    png5 = loadImages("water5.png");
    
    myVector.push_back(png1);
    
    myVector.push_back(png2);
    
    myVector.push_back(png3);
    
    myVector.push_back(png4);
    
    myVector.push_back(png5);
    
    return verify;
    
}

void closeProgram()
{
    SDL_FreeSurface(png1);
    png1 = NULL;
    
    SDL_FreeSurface(png2);
    png2 = NULL;
    
    SDL_FreeSurface(png3);
    png3 = NULL;
    
    SDL_FreeSurface(png4);
    png4 = NULL;
    
    SDL_FreeSurface(png5);
    png5 = NULL;
    
    SDL_DestroyWindow(windowPtr);
    
    windowPtr = NULL;
    
    IMG_Quit();
    
    SDL_Quit();
    
}




int main(int argc, const char * argv[]) {
    
    initSDL();
    
    loadImages();
    
    SDL_BlitSurface(myVector[0],NULL,surfacePtr,NULL);
    
    SDL_UpdateWindowSurface(windowPtr);
    
    SDL_Delay(200);
    
    SDL_BlitSurface(myVector[1],NULL,surfacePtr,NULL);
    
    SDL_UpdateWindowSurface(windowPtr);
    
    SDL_Delay(200);
    
    SDL_BlitSurface(myVector[2],NULL,surfacePtr,NULL);
    
    SDL_UpdateWindowSurface(windowPtr);
    
    SDL_Delay(200);
    
    SDL_BlitSurface(myVector[3],NULL,surfacePtr,NULL);
    
    SDL_UpdateWindowSurface(windowPtr);
    
    SDL_Delay(200);
    
    SDL_BlitSurface(myVector[4],NULL,surfacePtr,NULL);
    
    SDL_UpdateWindowSurface(windowPtr);
    
    SDL_Delay(200);
    
    SDL_BlitSurface(myVector[0],NULL,surfacePtr,NULL);
    
    SDL_UpdateWindowSurface(windowPtr);
    
    SDL_Delay(200);
    
    SDL_BlitSurface(myVector[1],NULL,surfacePtr,NULL);
    
    SDL_UpdateWindowSurface(windowPtr);
    
    SDL_Delay(200);
    
    SDL_BlitSurface(myVector[2],NULL,surfacePtr,NULL);
    
    SDL_UpdateWindowSurface(windowPtr);
    
    SDL_Delay(200);
    
    SDL_BlitSurface(myVector[3],NULL,surfacePtr,NULL);
    
    SDL_UpdateWindowSurface(windowPtr);
    
    SDL_Delay(200);
    
    SDL_BlitSurface(myVector[4],NULL,surfacePtr,NULL);
    
    SDL_UpdateWindowSurface(windowPtr);
    
    SDL_Delay(200);
    
    SDL_BlitSurface(myVector[0],NULL,surfacePtr,NULL);
    
    SDL_UpdateWindowSurface(windowPtr);
    
    SDL_Delay(200);
    
    SDL_BlitSurface(myVector[1],NULL,surfacePtr,NULL);
    
    SDL_UpdateWindowSurface(windowPtr);
    
    SDL_Delay(200);
    
    SDL_BlitSurface(myVector[2],NULL,surfacePtr,NULL);
    
    SDL_UpdateWindowSurface(windowPtr);
    
    SDL_Delay(200);
    
    SDL_BlitSurface(myVector[3],NULL,surfacePtr,NULL);
    
    SDL_UpdateWindowSurface(windowPtr);
    
    SDL_Delay(200);
    
    SDL_BlitSurface(myVector[4],NULL,surfacePtr,NULL);
    
    SDL_UpdateWindowSurface(windowPtr);
    
    SDL_Delay(200);
    
    SDL_BlitSurface(myVector[0],NULL,surfacePtr,NULL);
    
    SDL_UpdateWindowSurface(windowPtr);
    
    SDL_Delay(200);
    
    SDL_BlitSurface(myVector[1],NULL,surfacePtr,NULL);
    
    SDL_UpdateWindowSurface(windowPtr);
    
    SDL_Delay(200);
    
    SDL_BlitSurface(myVector[2],NULL,surfacePtr,NULL);
    
    SDL_UpdateWindowSurface(windowPtr);
    
    SDL_Delay(200);
    
    SDL_BlitSurface(myVector[3],NULL,surfacePtr,NULL);
    
    SDL_UpdateWindowSurface(windowPtr);
    
    SDL_Delay(200);
    
    SDL_BlitSurface(myVector[4],NULL,surfacePtr,NULL);
    
    SDL_UpdateWindowSurface(windowPtr);
    
    SDL_Delay(200);
    
    SDL_BlitSurface(myVector[0],NULL,surfacePtr,NULL);
    
    SDL_UpdateWindowSurface(windowPtr);
    
    SDL_Delay(200);
    
    SDL_BlitSurface(myVector[1],NULL,surfacePtr,NULL);
    
    SDL_UpdateWindowSurface(windowPtr);
    
    SDL_Delay(200);
    
    SDL_BlitSurface(myVector[2],NULL,surfacePtr,NULL);
    
    SDL_UpdateWindowSurface(windowPtr);
    
    SDL_Delay(200);
    
    SDL_BlitSurface(myVector[3],NULL,surfacePtr,NULL);
    
    SDL_UpdateWindowSurface(windowPtr);
    
    SDL_Delay(200);
    
    SDL_BlitSurface(myVector[4],NULL,surfacePtr,NULL);
    
    SDL_UpdateWindowSurface(windowPtr);
    
    SDL_Delay(200);
    
    
    closeProgram();
    
    
    
    return 0;
}
