//
//  Rectangle.cpp
//  Inherance
//
//  Created by Ichko  on 21/04/17.
//  Copyright © 2017 CobaltCoding. All rights reserved.
//

#include "Rectangle.hpp"

#include <iostream>

using namespace std;

Rectangle::Rectangle(int b, int h, string color):Shape(b,h,color)
{
    
}


int Rectangle::calculateArea()
{
    return Shape::getB() * Shape::getH();
}

int Rectangle::calculatePerimeter()
{
    return (Shape::getB() + Shape::getH()) * 2;
}

void Rectangle::print()
{
    cout << "B -> " << getB() << endl;
    
    cout << "H -> " << getH() << endl;
    
    cout << "Color -> " << getColor() << endl;
    
    cout << "Area -> " << calculateArea() << endl;
    
    cout << "Perimeter -> " << calculatePerimeter() << endl;
}
