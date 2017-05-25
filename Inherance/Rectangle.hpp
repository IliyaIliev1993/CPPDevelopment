//
//  Rectangle.hpp
//  Inherance
//
//  Created by Ichko  on 21/04/17.
//  Copyright © 2017 CobaltCoding. All rights reserved.
//

#ifndef Rectangle_hpp
#define Rectangle_hpp

#include <iostream>

#include "2DShape.hpp"

using namespace std;

class Rectangle: public Shape{
    
private:
    
    
public:
    
    Rectangle(int,int,string);
    
    void print();
    
    int calculateArea();
    
    int calculatePerimeter();
    
};

#endif /* Rectangle_hpp */
