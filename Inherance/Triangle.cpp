//
//  Triangle.cpp
//  Inherance
//
//  Created by Ichko  on 21/04/17.
//  Copyright © 2017 CobaltCoding. All rights reserved.
//

#include "Triangle.hpp"

#include <iostream>

#include <cmath>

using namespace std;

Triangle::Triangle(int b, int h, string color, int hiputenuza): Shape(b,h,color)
{
    setHiputenuza(hiputenuza);
}

//

void Triangle::setHiputenuza(int hiputenuza)
{
    this->hipotenuza = hiputenuza;
}

//

int Triangle::getHiputenuza()
{
    int hipReturn = pow(getB(), 2) + pow(getH(), 2);
    
    int calc = sqrt(hipReturn);
    
    return calc;
}

int Shape::calculateArea()
{
    int area = (b * h) / 2;
    
    return area;
}

int Triangle::

void Triangle::print()
{
    cout << "B -> " << getB() << endl;
    
    cout << "H -> " << getH() << endl;
    
    cout << "Hiputenuza -> " << getHiputenuza() << endl;
}
