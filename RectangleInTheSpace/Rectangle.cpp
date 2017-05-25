//
//  Rectangle.cpp
//  RectangleInTheSpace
//
//  Created by Ichko  on 18/04/17.
//  Copyright © 2017 CobaltCoding. All rights reserved.
//

#include "Rectangle.hpp"

#include <iostream>

using namespace std;

Rectangle::Rectangle(int aX, int aY, int bX, int bY, int cX, int cY, int dX, int dY)
{
    
    this->aX = setAx(aX);
    
    this->aY = setAy(aY);
    
    this->bX = setBx(bX);
    
    this->bY = setBy(bY);
    
    this->cX = setCx(cX);
    
    this->cY = setCy(cY);
    
    this->dX = setDx(dX);
    
    this->dY = setDy(dY);
    
}

int Rectangle::setAx(int aX)
{
    this->aX = aX;
    
    return aX;
}

int Rectangle::setAy(int aY)
{
    this->aY = aY;
    
    return aY;
}

int Rectangle::setBx(int bX)
{
    this->bX = bX;
    
    return bX;
}

int Rectangle::setBy(int bY)
{
    this->bY = bY;
    
    return bY;
}

int Rectangle::setCx(int cX)
{
    this->cX = cX;
    
    return cX;
}

int Rectangle::setCy(int cY)
{
    this->cY = cY;
    
    return cY;
}

int Rectangle::setDx(int dX)
{
    this->dX = dX;
    
    return dX;
}

int Rectangle::setDy(int dY)
{
    this->dY = dY;
    
    return dY;
}

int Rectangle::getPerimeter()
{
    int lenght;
    
    int widht;
    
    if(aY == bY)
    {
        lenght = bX - aX;
        
        if(lenght < 0)
        {
            lenght = lenght * -1;
        }
    }
    else
    {
        cout << "Is not a RECTANGLE !" << endl;
    }
    
    if(bX == cX)
    {
        widht = cY - bY;
        
        if(widht < 0)
        {
            widht = widht * -1;
        }
    }
    
    int perimeter = (lenght) * 2 + (widht) * 2;
    
    return perimeter;
}

int Rectangle::getArea()
{
    int lenght;
    
    int widht;
    
    if(aY == bY)
    {
        lenght = bX - aX;
        
        if(lenght < 0)
        {
            lenght = lenght * -1;
        }
    }
    else
    {
        cout << "Is not a RECTANGLE !" << endl;
    }
    
    if(bX == cX)
    {
        widht = cY - bY;
        
        if(widht < 0)
        {
            widht = widht * -1;
        }
    }
    
    int area = lenght * widht;
    
    return area;
}

void Rectangle::getQuadrant()
{
    if(this->aX && this->aY && this->dX && this->dY && this->cX && this->cY && this->dX && this->dY > 0)
    {
        cout << "First Quadrant" << endl;
    }
    
    if(this->aX && this->aY && this->dX && this->dY && this->cX && this->cY && this->dX && this->dY < 0)
    {
        cout << "Third Quandrant" << endl;
    }
    
    if(this->aX && this->bX && this->cX && this->dX < 0 && this->aY && this->dY && this->cY && this->dY > 0)
    {
        cout << "Second Quadrant" << endl;
    }
    
    if(this->aX && this->bX && this->cX && this->dX > 0 && this->aY && this->dY && this->cY && this->dY < 0)
    {
        cout << "Fourth Quadrant" << endl;
    }
    
}




