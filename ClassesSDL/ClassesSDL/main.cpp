//
//  main.cpp
//  ClassesSDL
//
//  Created by Ichko  on 22/06/17.
//  Copyright © 2017 IliyaStark. All rights reserved.
//

#include <iostream>

#include "ClassSDL.hpp"

using namespace std;

int main(int argc, const char * argv[]) {

    Frames frameObj;
    
    frameObj.loadVideo();
    
    frameObj.textureBackground = frameObj.loadImage("bg.png");
    
    frameObj.textureBall = frameObj.loadImage("ball.png");
    
    
    SDL_Event ev;
    
    //
    
    SDL_Rect rectBackground;
    
    rectBackground.x = 0;
    
    rectBackground.y = 0;
    
    rectBackground.w = 320;
    
    rectBackground.h = 480;
    
    SDL_Rect rectBall;
    
    rectBall.x = 100;
    
    rectBall.y = 380;
    
    rectBall.w = 100;
    
    rectBall.h = 100;
    
    //
    
    bool exitWhile = false;
    
    int counterX = 0;
    
    int counterYBall = 380;
    
    bool exitBallWhile = false;
    
    bool exitSecondWhile = false;
    
    bool exitThirtWhile = false;
    
    bool exitFourthWhile = false;
    
    while(exitWhile == false)
    {
        while(SDL_PollEvent(&ev) != 0)
        {
            if(ev.type == SDL_QUIT)
            {
                exitWhile = true;
            }
            
            exitBallWhile = false;
            
            exitSecondWhile = false;
            
            exitThirtWhile = false;
            
            exitFourthWhile = false;
            
            SDL_RenderClear(frameObj.rendererPtr);
            
            counterX += 2;
            
            rectBackground.x = counterX;
            
            SDL_RenderCopy(frameObj.rendererPtr, frameObj.textureBackground, &rectBackground, NULL);
            
            SDL_RenderCopy(frameObj.rendererPtr, frameObj.textureBall, NULL, &rectBall);
            
            if(ev.type == SDL_MOUSEBUTTONDOWN)
            {
                while(exitBallWhile == false)
                {
                    counterX += 4;
                    
                    rectBackground.x = counterX;
                    
                    SDL_RenderCopy(frameObj.rendererPtr, frameObj.textureBackground, &rectBackground, NULL);
                    
                    SDL_RenderCopy(frameObj.rendererPtr, frameObj.textureBall, NULL, &rectBall);
                    
                    counterYBall -= 4;
                    
                    rectBall.y = counterYBall;
                    
                    if(counterYBall <= 0)
                    {
                        counterYBall = 0;
                        
                        while(exitSecondWhile == false)
                        {
                            counterYBall += 2;
                            
                            rectBall.y = counterYBall;
                            
                            SDL_RenderCopy(frameObj.rendererPtr, frameObj.textureBackground, &rectBackground, NULL);
                            
                            SDL_RenderCopy(frameObj.rendererPtr, frameObj.textureBall, NULL, &rectBall);
                            
                            SDL_RenderPresent(frameObj.rendererPtr);
                            
                            if(counterYBall >= 380)
                            {
                                counterYBall = 380;
                                
                                while(exitThirtWhile == false)
                                {
                                    counterYBall -= 1;
                                
                                    rectBall.y = counterYBall;
                                
                                    SDL_RenderCopy(frameObj.rendererPtr, frameObj.textureBackground, &rectBackground, NULL);
                                
                                    SDL_RenderCopy(frameObj.rendererPtr, frameObj.textureBall, NULL, &rectBall);
                                
                                    SDL_RenderPresent(frameObj.rendererPtr);
                                
                                    if(counterYBall <= 250)
                                    {
                                        counterYBall = 250;
                                        
                                        while(exitFourthWhile == false)
                                        {
                                            
                                            counterYBall += 1;
                                            
                                            rectBall.y = counterYBall;
                                            
                                            SDL_RenderCopy(frameObj.rendererPtr, frameObj.textureBackground, &rectBackground, NULL);
                                            
                                            SDL_RenderCopy(frameObj.rendererPtr, frameObj.textureBall, NULL, &rectBall);
                                            
                                            SDL_RenderPresent(frameObj.rendererPtr);
                                            
                                            if(counterYBall >= 380)
                                            {
                                                counterYBall = 380;
                                                
                                                exitFourthWhile = true;
                                                
                                            }

                                        }
                                        
                                        exitThirtWhile = true;
                                    }
                                    
                                    exitSecondWhile = true;
                                }
                                
                            }
                            
                        }
                        
                        if(counterYBall >= 380)
                        {
                            
                            exitBallWhile = true;
                        }
                    }
                    
                    SDL_RenderCopy(frameObj.rendererPtr, frameObj.textureBackground, &rectBackground, NULL);
                    
                    SDL_RenderCopy(frameObj.rendererPtr, frameObj.textureBall, NULL, &rectBall);
                    
                    SDL_RenderPresent(frameObj.rendererPtr);
                }
            }
            
            if(counterX >= rectBackground.w)
            {
                counterX = 0;
            }
            
            SDL_RenderPresent(frameObj.rendererPtr);
        
        }
    
    }
    
    
    
    return 0;
    
}
