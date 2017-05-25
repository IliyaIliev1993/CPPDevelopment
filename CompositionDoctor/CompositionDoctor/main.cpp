//
//  main.cpp
//  CompositionDoctor
//
//  Created by Ichko  on 21/04/17.
//  Copyright © 2017 CobaltCoding. All rights reserved.
//

#include "Doctor.hpp"

#include "Patient.hpp"

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    
    Patient pat("katya",42);
    
    Doctor doc("Ivan","Genecology",pat);
    
    doc.showInfoDoc();
    
    
    return 0;
}
