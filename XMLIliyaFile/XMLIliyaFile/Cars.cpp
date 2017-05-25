//
//  Cars.cpp
//  XMLIliyaFile
//
//  Created by Ichko  on 25/05/17.
//  Copyright © 2017 IliyaStark. All rights reserved.
//

#include "Cars.hpp"

Cars::Cars()
{
    this->make = "N/A";
    
    this->year = 0;
    
    this->price = 0.0;
}

//

void Cars::setMake(string make)
{
    this->make = make;
}

void Cars::setYear(int year)
{
    this->year = year;
}

void Cars::setPrice(double price)
{
    this->price = price;
}

//

string Cars::getMake()
{
    return this->make;
}

int Cars::getYear()
{
    return this->year;
}

double Cars::getPrice()
{
    return this->price;
}

//

void Cars::showInfo()
{
    cout << "Make -> " << getMake() << endl;
    
    cout << "Year -> " << getYear() << endl;
    
    cout << "Price -> " << getPrice() << endl;
}

void Cars::pushInVector(Cars& carObj)
{
    myVector.push_back(carObj);
}

void Cars::showVector()
{
    for(int i = 0; i < myVector.size(); i++)
    {
        myVector[i].showInfo();
        
        cout << endl;
    }
}






