//
//  2DShape.hpp
//  Inherance
//
//  Created by Ichko  on 21/04/17.
//  Copyright © 2017 CobaltCoding. All rights reserved.
//

#ifndef _DShape_hpp
#define _DShape_hpp

#include <iostream>

using namespace std;

class Shape{
    
private:
    
    int b;
    
    int h;
    
    string color;
    
public:
    
    Shape(int,int,string);
    
    void setB(int);
    
    void setH(int);
    
    void setColor(string);
    
    //
    
    int getB();
    
    int getH();
    
    string getColor();
    
    void print();
    
    virtual int calculateArea() = 0; // Abstract Class, can not make Objects, we should OVVERRIDE the function in the inherance
    
    virtual int calculatePerimeter() = 0;
};

#endif /* _DShape_hpp */
