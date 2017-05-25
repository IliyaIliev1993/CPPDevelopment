//
//  Triangle.hpp
//  Inherance
//
//  Created by Ichko  on 21/04/17.
//  Copyright © 2017 CobaltCoding. All rights reserved.
//

#ifndef Triangle_hpp
#define Triangle_hpp

#include <iostream>

#include "2DShape.hpp"

using namespace std;

class Triangle: public Shape{
    
private:
    
    int hipotenuza;
    
public:
    
    Triangle(int,int,string,int);
    
    void setHiputenuza(int);
    
    //
    
    int getHiputenuza();
    
    void print();
    
};

#endif /* Triangle_hpp */
