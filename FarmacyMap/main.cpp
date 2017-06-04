//
//  main.cpp
//  FarmacyMap
//
//  Created by Ichko  on 04/06/17.
//  Copyright © 2017 IliyaStark. All rights reserved.
//

#include <iostream>

#include "FarmacyClass.hpp"

#include "Operations.hpp"
int main(int argc, const char * argv[]) {
   
    Operations ope1;
    
    ope1.loadFromXML();
    
    cout << endl;
    
    ope1.filterType("Normal");
    
    ope1.filterName("Aspirine");
    
    ope1.filterPrice(7.5);
    
    ope1.filterQuantity(20);
    
    ope1.pricePerTablet();
    
    ope1.priceMax();
    
    cout << endl;
    
    ope1.priceMin();
    
    
    
    
    return 0;
}
