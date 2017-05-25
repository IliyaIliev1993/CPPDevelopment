//
//  Rectangle.hpp
//  RectangleInTheSpace
//
//  Created by Ichko  on 18/04/17.
//  Copyright © 2017 CobaltCoding. All rights reserved.
//

#ifndef Rectangle_hpp
#define Rectangle_hpp

#include <iostream>

using namespace std;

class Rectangle{
    
private:
    
    int aX;
    
    int aY;
    
    int bX;
    
    int bY;
    
    int cX;
    
    int cY;
    
    int dX;
    
    int dY;
    
    
public:
    
    Rectangle(int aX = 0, int aY = 0, int bX = 0, int bY = 0, int cX = 0, int cY = 0, int dX = 0, int dY = 0);
    
    int setAx(int);
    
    int setAy(int);
    
    int setBx(int);
    
    int setBy(int);
    
    int setCx(int);
    
    int setCy(int);
    
    int setDx(int);
    
    int setDy(int);
    
    int getPerimeter();
    
    int getArea();
    
    void getQuadrant();

    
    
};

#endif /* Rectangle_hpp */
