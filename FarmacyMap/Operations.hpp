//
//  Operations.hpp
//  FarmacyMap
//
//  Created by Ichko  on 04/06/17.
//  Copyright © 2017 IliyaStark. All rights reserved.
//

#ifndef Operations_hpp
#define Operations_hpp

#include <iostream>

#include <vector>

#include <map>

#include "FarmacyClass.hpp"

using namespace std;

class Operations
{
private:
    
    vector<FarmacyClass>vectorFarmacy1;
    
    vector<FarmacyClass>vectorFarmacy2;
    
    vector<FarmacyClass>vectorFarmacy3;
    
public:
    
    Operations();
    
    void filterType(string filterType);
    
    void filterName(string filterName);
    
    void filterPrice(double filterPrice);
    
    void filterQuantity(int filterQuantity);
    
    void pricePerTablet();
    
    void priceMax();
    
    void priceMin();
    
    void loadFromXML();
    
};

#endif /* Operations_hpp */
