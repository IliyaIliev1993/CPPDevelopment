//
//  Trapezium.hpp
//  Inherance
//
//  Created by Ichko  on 21/04/17.
//  Copyright © 2017 CobaltCoding. All rights reserved.
//

#ifndef Trapezium_hpp
#define Trapezium_hpp

#include <iostream>

#include "2DShape.hpp"

using namespace std;

class Trapezium: public Shape{
    
private:
    
    int Bmajor;
    
public:
    
    Trapezium(int,int,string,int);
    
    void setBmajor(int);
    
    //
    
    int getBmajor();
    
    void print();
};

#endif /* Trapezium_hpp */
