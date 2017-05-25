//
//  Patient.cpp
//  CompositionDoctor
//
//  Created by Ichko  on 21/04/17.
//  Copyright © 2017 CobaltCoding. All rights reserved.
//

#include "Patient.hpp"

#include <iostream>

using namespace std;

Patient::Patient(string name,int age)
{
    setName(name);
    
    setAge(age);
}

//

void Patient::setName(string name)
{
    this->name = name;
}

void Patient::setAge(int age)
{
    this->age = age;
}

//

string Patient::getName()
{
    return this->name;

}

int Patient::getAge()
{
    return this->age;
}

void Patient::showInfo()
{
    cout << "Name -> " << getName() << endl;
    
    cout << "Age -> " << getAge() << endl;
}

