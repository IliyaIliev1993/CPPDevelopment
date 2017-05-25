//
//  Trapezium.cpp
//  Inherance
//
//  Created by Ichko  on 21/04/17.
//  Copyright © 2017 CobaltCoding. All rights reserved.
//

#include "Trapezium.hpp"

#include <iostream>

using namespace std;

Trapezium::Trapezium(int b, int h, string color, int Bmajor): Shape(b,h,color)
{
    setBmajor(Bmajor);
 
}

//

void Trapezium::setBmajor(int Bmajor)
{
    this->Bmajor = Bmajor;
}

//

int Trapezium::getBmajor()
{
    return this->Bmajor;
}

void Trapezium::print()
{
    cout << "B -> " << getB() << endl;
    
    cout << "H -> " << getH() << endl;
    
    cout << "Bmajor -> " << getBmajor() << endl;
    
}
