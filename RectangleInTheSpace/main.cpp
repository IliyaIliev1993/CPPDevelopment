//
//  main.cpp
//  RectangleInTheSpace
//
//  Created by Ichko  on 18/04/17.
//  Copyright © 2017 CobaltCoding. All rights reserved.
//

#include <iostream>

#include "Rectangle.hpp"

int main(int argc, const char * argv[]) {
    
    Rectangle rectangle1;
    
    rectangle1.setAx(3);
    
    rectangle1.setAy(3&);
    
    rectangle1.setBx(13);
    
    rectangle1.setBy(3);
    
    rectangle1.setCx(13);
    
    rectangle1.setCy(8);
    
    rectangle1.setDx(3);
    
    rectangle1.setDy(8);
    
    rectangle1.getQuadrant();
    
    cout << "Area -> " << rectangle1.getArea() << endl;
    
    cout << "Perimeter -> " << rectangle1.getPerimeter() << endl;
    
    
    return 0;
}
