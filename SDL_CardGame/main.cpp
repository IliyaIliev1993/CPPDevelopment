//
//  main.cpp
//  SDL_CardGame
//
//  Created by Ichko  on 11/06/17.
//  Copyright © 2017 IliyaStark. All rights reserved.
//

#include <iostream>

#include <string>

#include <SDL2/SDL.h>

#include <SDL2_ttf/SDL_ttf.h>

#include <SDL2_image/SDL_image.h>

#include <vector>

using namespace std;

SDL_Window *windowPtr = NULL;

SDL_Surface *backGroundInWindow = NULL;

SDL_Surface *backgroundImage = NULL;

SDL_Surface *cardLeft = NULL;

SDL_Surface *cardRight = NULL;

SDL_Surface *playButton = NULL;

SDL_Surface *playButtonRounded = NULL;

TTF_Font *sans = NULL;

SDL_Color white = {255,255,255,0};

string text = "Game Developed by Iliya Iliev...";

string textScoreString = ":SCORES:";

SDL_Surface *textMessage = NULL;

SDL_Surface *textScore = NULL;

SDL_Surface *counterLeftSurface = NULL;

SDL_Surface *counterRightSurface = NULL;




void initVideo()
{
    if(SDL_Init(SDL_INIT_VIDEO < 0))
    {
        cout << "Problem to init video" << endl;
    }
    else
    {
        windowPtr = SDL_CreateWindow("CardGame", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_SHOWN);
        
        if(windowPtr == NULL)
        {
            cout << "Problem to create window" << endl;
        }
        else
        {
            int imgPng = IMG_INIT_PNG;
            
            if(TTF_Init() == -1)
            {
                cout << "Problem to Inizialize TTF" << endl;
            }
            
            if(!(IMG_Init(imgPng) &imgPng))
            {
                cout << "Problem to inizialize PNG" << endl;
            }
            else
            {
                backGroundInWindow = SDL_GetWindowSurface(windowPtr);
            }
        }
    }
}

//

SDL_Surface *loadImage(string path)
{
    SDL_Surface *imageReturned = NULL;
    
    SDL_Surface *pathToImage = IMG_Load(path.c_str());
    
    if(pathToImage == NULL)
    {
        cout << "Problem to load Image" << endl;
    }
    else
    {
        imageReturned = SDL_ConvertSurface(pathToImage, backGroundInWindow->format, NULL);
        
        if(imageReturned == NULL)
        {
            cout << "Problem to Convert background->format" << endl;
        }
        else
        {
            SDL_FreeSurface(pathToImage);
        }
    }
    
    return imageReturned;
}
//

void closeProgram()
{
    SDL_DestroyWindow(windowPtr);
    
    windowPtr = NULL;
    
    SDL_FreeSurface(backGroundInWindow);
    
    backGroundInWindow = NULL;
    
    SDL_FreeSurface(backgroundImage);
    
    backgroundImage = NULL;
    
    SDL_FreeSurface(cardLeft);
    
    cardLeft = NULL;
    
    SDL_FreeSurface(cardRight);
    
    cardRight = NULL;
    
    SDL_FreeSurface(playButton);
    
    playButton = NULL;
    
    SDL_FreeSurface(playButtonRounded);
    
    playButtonRounded = NULL;
    
    SDL_FreeSurface(textMessage);
    
    textMessage = NULL;
    
    SDL_FreeSurface(textScore);
    
    textScore = NULL;
    
    SDL_FreeSurface(counterLeftSurface);
    
    counterLeftSurface = NULL;
    
    SDL_FreeSurface(counterRightSurface);
    
    counterRightSurface = NULL;
    
    IMG_Quit();
    
    TTF_Quit();
    
    SDL_Quit();
    
}

//

int main(int argc, const char * argv[]) {
    
    SDL_Event ev;
    
    SDL_Rect rectCardLeft;
    
    rectCardLeft.x = 70;
    
    rectCardLeft.y = 350;
    
    rectCardLeft.w = 50;
    
    rectCardLeft.h = 150;
    
    SDL_Rect rectCardRight;
    
    rectCardRight.x = 600;
    
    rectCardRight.y = 350;
    
    rectCardRight.w = 50;
    
    rectCardRight.h = 150;
    
    SDL_Rect rectButtonPlay;
    
    rectButtonPlay.x = 330;
    
    rectButtonPlay.y = 420;
    
    rectButtonPlay.w = 100;
    
    rectButtonPlay.h = 100;
    
    SDL_Rect rectText;
    
    rectText.x = 50;
    
    rectText.y = 50;
    
    rectText.w = 600;
    
    rectText.h = 100;
    
    SDL_Rect rectScore;
    
    rectScore.x = 320;
    
    rectScore.y = 200;
    
    rectScore.w = 150;
    
    rectScore.h = 100;
    
    SDL_Rect scoreLeft;
    
    scoreLeft.x = 130;
    
    scoreLeft.y = 200;
    
    scoreLeft.w = 100;
    
    scoreLeft.h = 100;
    
    SDL_Rect scoreRight;
    
    scoreRight.x = 670;
    
    scoreRight.y = 200;
    
    scoreRight.w = 100;
    
    scoreRight.h = 100;
    
    vector<string>vectorLeft = {"black2.png","black3.png","black4.png","black5.png","black6.png","black7.png","black8.png","black9.png","black10.png","blackJ.png","blackQ.png","blackK.png","blackA.png"};
    
    vector<string>vectorRigh = {"red2.png","red3.png","red4.png","red5.png","red6.png","red7.png","red8.png","red9.png","red10.png","redJ.png","redQ.png","redK.png","redA.png"};
    
    
    initVideo();
    
    backgroundImage = loadImage("background.png");
    
    cardLeft = loadImage("backCard.png");
    
    cardRight = loadImage("backCard.png");
    
    playButton = loadImage("PlayButton.png");
    
    playButtonRounded = loadImage("PlayButtonRounded.png");
    
    sans = TTF_OpenFont("Xanadu.ttf", 50);
    
    textMessage = TTF_RenderText_Solid(sans, text.c_str(), white);
    
    textScore = TTF_RenderText_Solid(sans, textScoreString.c_str(),white);
    
    string counterLeft = "0";
    
    int counterLeftInt = 0;
    
    string counterRight = "0";
    
    int counterRightInt = 0;
    
    counterLeftSurface = TTF_RenderText_Solid(sans, counterLeft.c_str(), white);
    
    counterRightSurface = TTF_RenderText_Solid(sans, counterRight.c_str(), white);
    
    if(textMessage == NULL)
    {
        cout << "Problem to create text" << endl;
    }
    
    if(playButton == NULL)
    {
        cout << "Problem to load PlayButton" << endl;
    }
    
    if(cardLeft == NULL)
    {
        cout << "ProblemCardLeft" << endl;
    }
    
    if(backgroundImage == NULL)
    {
        cout << "backgroundproblem" << endl;
    }
    
    bool quit = true;
    
    while(quit == true)
    {
        while(SDL_PollEvent(&ev) != 0)
        {
            if(ev.type == SDL_QUIT)
            {
                quit = false;
            }
            
            SDL_BlitSurface(backgroundImage,NULL,backGroundInWindow,NULL);
            
            //SDL_UpdateWindowSurface(windowPtr);
            
            SDL_BlitSurface(cardLeft,NULL,backGroundInWindow,&rectCardLeft);
            
            //SDL_UpdateWindowSurface(windowPtr);
            
            SDL_BlitSurface(cardRight,NULL,backGroundInWindow,&rectCardRight);
            
            //SDL_UpdateWindowSurface(windowPtr);
            
            SDL_BlitSurface(playButton,NULL,backGroundInWindow,&rectButtonPlay);
            
           // SDL_UpdateWindowSurface(windowPtr);
            
            SDL_BlitSurface(textMessage,NULL,backGroundInWindow,&rectText);
            
            //SDL_UpdateWindowSurface(windowPtr);
            
            SDL_BlitSurface(textScore,NULL,backGroundInWindow,&rectScore);
            
            //SDL_UpdateWindowSurface(windowPtr);
            
            SDL_BlitSurface(counterRightSurface,NULL,backGroundInWindow,&scoreRight);
            
            //SDL_UpdateWindowSurface(windowPtr);
            
            SDL_BlitSurface(counterLeftSurface,NULL,backGroundInWindow,&scoreLeft);
            
            SDL_UpdateWindowSurface(windowPtr);
            
            int x;
            
            int y;
            
            SDL_GetMouseState(&x, &y);
            
            int randomLeft = rand() % 12;
            
            int randomRigh = rand() % 12;
            
            if(ev.type == SDL_MOUSEBUTTONDOWN)
            {
                if(x >= 370 && x <= 440 && y >= 430 && y <= 510)
                {
                    cardLeft = loadImage("backCard.png");
                    
                    cardRight = loadImage("backCard.png");
                    
                    SDL_BlitSurface(backgroundImage,NULL,backGroundInWindow,NULL);
                    
                    //SDL_UpdateWindowSurface(windowPtr);
                    
                    SDL_BlitSurface(cardLeft,NULL,backGroundInWindow,&rectCardLeft);
                    
                    //SDL_UpdateWindowSurface(windowPtr);
                    
                    SDL_BlitSurface(cardRight,NULL,backGroundInWindow,&rectCardRight);
                    
                    //SDL_UpdateWindowSurface(windowPtr);
                    
                    SDL_BlitSurface(playButtonRounded,NULL,backGroundInWindow,&rectButtonPlay);
                    
                    //SDL_UpdateWindowSurface(windowPtr);
                    
                    SDL_BlitSurface(textMessage,NULL,backGroundInWindow,&rectText);
                    
                    //SDL_UpdateWindowSurface(windowPtr);
                    
                    SDL_BlitSurface(textScore,NULL,backGroundInWindow,&rectScore);
                    
                    //SDL_UpdateWindowSurface(windowPtr);
                    
                    SDL_BlitSurface(counterRightSurface,NULL,backGroundInWindow,&scoreRight);
                    
                    //SDL_UpdateWindowSurface(windowPtr);
                    
                    SDL_BlitSurface(counterLeftSurface,NULL,backGroundInWindow,&scoreLeft);
                    
                    SDL_UpdateWindowSurface(windowPtr);
                }
            }
            
            if(ev.type == SDL_MOUSEBUTTONUP)
            {
                if(x >= 370 && x <= 440 && y >= 430 && y <= 510)
                {
                    
                    
                    cardLeft = loadImage(vectorLeft[randomLeft]);
                    
                    cardRight = loadImage(vectorRigh[randomRigh]);
                    
                    if(randomLeft > randomRigh)
                    {
                        counterLeftInt++;
                        
                        counterLeft = to_string(counterLeftInt);
                    }
                    
                    else if(randomLeft == randomRigh)
                    {
                        
                    }
                    
                    else if(randomRigh > randomLeft)
                    {
                        counterRightInt++;
                        
                        counterRight = to_string(counterRightInt);
                    }
                    
                    counterLeftSurface = TTF_RenderText_Solid(sans, counterLeft.c_str(), white);
                    
                    counterRightSurface = TTF_RenderText_Solid(sans, counterRight.c_str(), white);
                    
                    SDL_BlitSurface(backgroundImage,NULL,backGroundInWindow,NULL);
                    
                    //SDL_UpdateWindowSurface(windowPtr);
                    
                    SDL_BlitSurface(cardLeft,NULL,backGroundInWindow,&rectCardLeft);
                    
                    //SDL_UpdateWindowSurface(windowPtr);
                    
                    SDL_BlitSurface(cardRight,NULL,backGroundInWindow,&rectCardRight);
                    
                    //SDL_UpdateWindowSurface(windowPtr);
                    
                    SDL_BlitSurface(playButton,NULL,backGroundInWindow,&rectButtonPlay);
                    
                    //SDL_UpdateWindowSurface(windowPtr);
                    
                    SDL_BlitSurface(textMessage,NULL,backGroundInWindow,&rectText);
                    
                    //SDL_UpdateWindowSurface(windowPtr);
                    
                    SDL_BlitSurface(textScore,NULL,backGroundInWindow,&rectScore);
                    
                    //SDL_UpdateWindowSurface(windowPtr);
                    
                    SDL_BlitSurface(counterRightSurface,NULL,backGroundInWindow,&scoreRight);
                    
                    //SDL_UpdateWindowSurface(windowPtr);
                    
                    SDL_BlitSurface(counterLeftSurface,NULL,backGroundInWindow,&scoreLeft);
                    
                    SDL_UpdateWindowSurface(windowPtr);
                    
                }
            }
            
            
//            int xZ;
//            
//            int yZ;
//            
//            SDL_GetMouseState(&xZ, &yZ);
//            
//            cout << "x-> " << xZ << " y-> " << yZ << endl;
            
            
        }
    }
    
    
    closeProgram();

    
    
    
    return 0;
}
