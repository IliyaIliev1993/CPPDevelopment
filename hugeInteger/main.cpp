//
//  main.cpp
//  hugeInteger
//
//  Created by Ichko  on 18/04/17.
//  Copyright © 2017 CobaltCoding. All rights reserved.
//

#include <iostream>

#include "hugeInteger.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    HugeInteger number1(3);
    
    HugeInteger number2(3);
    
    number1.getOutput();
    
    number2.getOutput();
    
    number1.compare(number1.arrayCompare,number2.arrayCompare);
    
    
    return 0;
}
