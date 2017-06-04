//
//  FarmacyClass.cpp
//  FarmacyMap
//
//  Created by Ichko  on 04/06/17.
//  Copyright © 2017 IliyaStark. All rights reserved.
//

#include "FarmacyClass.hpp"

#include <iostream>

using namespace std;

FarmacyClass::FarmacyClass(string name, double price, int quantity, string type)
{
    setName(name);
    
    setPrice(price);
    
    setQuantity(quantity);
    
    setType(type);
}

FarmacyClass::FarmacyClass()
{
    this->name = "N/A";
    
    this->price = 0.0;
    
    this->quantity = 0;
    
    this->type = "N/A";
}

//

void FarmacyClass::setName(string name)
{
    this->name = name;
}

void FarmacyClass::setPrice(double price)
{
    this->price = price;
}

void FarmacyClass::setQuantity(int quantity)
{
    this->quantity = quantity;
}

void FarmacyClass::setType(string type)
{
    this->type = type;
}

//

string FarmacyClass::getName()
{
    return this->name;
}

double FarmacyClass::getPrice()
{
    return this->price;
}

int FarmacyClass::getQuantity()
{
    return this->quantity;
}

string FarmacyClass::getType()
{
    return this->type;
}

//

void FarmacyClass::showInfo()
{
    cout << "Name -> " << getName() << endl;
    
    cout << "Price -> " << getPrice() << " Leva" << endl;
    
    cout << "Quantity -> " << getQuantity() << endl;
    
    cout << "Type -> " << getType() << endl;
}
