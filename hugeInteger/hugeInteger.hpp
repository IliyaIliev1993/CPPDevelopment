//
//  hugeInteger.hpp
//  hugeInteger
//
//  Created by Ichko  on 18/04/17.
//  Copyright © 2017 CobaltCoding. All rights reserved.
//

#ifndef hugeInteger_hpp
#define hugeInteger_hpp

#include <string>

#include <iostream>

using namespace std;


class HugeInteger{
    
    
private:
    
    int hugeNumber[40];
    
public:
    
    HugeInteger(int);
    
    void setInput();
    
    void setAdd(int);
    
    void setSubstract(int);
    
    void getOutput();
    
    int arrayCompare[40];
    
    void compare(int[],int[]);
    
    
    
};





#endif /* hugeInteger_hpp */
