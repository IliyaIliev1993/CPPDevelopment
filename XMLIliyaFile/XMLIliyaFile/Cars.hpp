//
//  Cars.hpp
//  XMLIliyaFile
//
//  Created by Ichko  on 25/05/17.
//  Copyright © 2017 IliyaStark. All rights reserved.
//

#ifndef Cars_hpp
#define Cars_hpp

#include <iostream>

#include <vector>

using namespace std;

class Cars
{
private:
    
    string make;
    
    int year;
    
    double price;
    
public:
    
    vector<Cars>myVector;
    
    Cars();
    
    void setMake(string);
    
    void setYear(int);
    
    void setPrice(double);
    
    //
    
    string getMake();
    
    int getYear();
    
    double getPrice();
    
    //
    
    void showInfo();
    
    void pushInVector(Cars&);
    
    void showVector();
    
};

#endif /* Cars_hpp */
