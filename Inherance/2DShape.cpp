//
//  2DShape.cpp
//  Inherance
//
//  Created by Ichko  on 21/04/17.
//  Copyright © 2017 CobaltCoding. All rights reserved.
//

#include "2DShape.hpp"

#include <iostream>

using namespace std;

Shape::Shape(int b, int h, string color)
{
    setB(b);
    
    setH(h);
    
    setColor(color);
}

//

void Shape:: setB(int b)
{
    this-> b = b;
}

void Shape:: setH(int h)
{
    this-> h = h;
}

void Shape:: setColor(string color)
{
    this->color = color;
}

//

int Shape:: getB()
{
    return this->b;
}

int Shape:: getH()
{
    return this->h;
}

string Shape:: getColor()
{
    return this->color;
}

void Shape::print()
{
    cout << "B -> " << getB() << endl;
    
    cout << "H -> " << getH() << endl;
    
    cout << "Color ->" << getColor() << endl;
}








