//
//  FarmacyClass.hpp
//  FarmacyMap
//
//  Created by Ichko  on 04/06/17.
//  Copyright © 2017 IliyaStark. All rights reserved.
//

#ifndef FarmacyClass_hpp
#define FarmacyClass_hpp

#include <iostream>

using namespace std;

class FarmacyClass
{
private:
    
    string name;
    
    double price;
    
    int quantity;
    
    string type;
    
public:
    
    FarmacyClass(string name, double price, int quantity, string type);
    
    FarmacyClass();
    
    //
    
    void setName(string name);
    
    void setPrice(double price);
    
    void setQuantity(int quantity);
    
    void setType(string type);
    
    //
    
    string getName();
    
    double getPrice();
    
    int getQuantity();
    
    string getType();
    
    //
    
    void showInfo();
    
    
};

#endif /* FarmacyClass_hpp */
