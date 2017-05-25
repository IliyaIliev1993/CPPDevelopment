//
//  Patient.hpp
//  CompositionDoctor
//
//  Created by Ichko  on 21/04/17.
//  Copyright © 2017 CobaltCoding. All rights reserved.
//

#ifndef Patient_hpp
#define Patient_hpp

#include <iostream>

using namespace std;

class Patient{
    
private:
    
    string name;
    
    int age;
    
public:
    
    Patient(string,int);
    
    void setName(string);
    
    void setAge(int);
    
    //
    
    string getName();
    
    int getAge();
    
    void showInfo();
};

#endif /* Patient_hpp */
