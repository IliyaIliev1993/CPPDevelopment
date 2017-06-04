//
//  Operations.cpp
//  FarmacyMap
//
//  Created by Ichko  on 04/06/17.
//  Copyright © 2017 IliyaStark. All rights reserved.
//

#include "Operations.hpp"

#include <iostream>

#include "pugixml.hpp"

using namespace std;

Operations::Operations()
{
    
}

//

void Operations::loadFromXML()
{
    // First Farmacy;
    
    pugi::xml_document doc;
    
    doc.load_file("Farmacy1.xml");
    
    if(doc)
    {
        cout << "Farmacy1.xml Loaded !" << endl;
        
    }
    else
    {
        cout << "Problem to load Farmacy1.xml..." << endl;
    }
    
    FarmacyClass obj1;
    
    pugi::xml_node farmacy = doc.child("Farmacy");
    
    for(pugi::xml_node medicine = farmacy.child("Medicine"); medicine; medicine = medicine.next_sibling())
    {
        
        obj1.setName(medicine.child("Name").text().as_string());
        
        obj1.setPrice(medicine.child("Price").text().as_double());
        
        obj1.setQuantity(medicine.child("Quantity").text().as_int());
        
        obj1.setType(medicine.child("Type").text().as_string());
        
        vectorFarmacy1.push_back(obj1);
    }
    
    if(vectorFarmacy1.empty())
    {
        cout << "The vectorFarmacy1 is empty..." << endl;
    }
    else
    {
        cout << "vectorFarmacy1 is pushed..." << endl;
    }
    
    // Second Farmacy
    
    pugi::xml_document doc2;
    
    doc2.load_file("Farmacy2.xml");
    
    if(doc2)
    {
        cout << "Farmacy2.xml Loaded !" << endl;
    }
    else
    {
        cout << "Problem to load Farmacy2.xml..." << endl;
    }
    
    FarmacyClass obj2;
    
    pugi::xml_node farmacy2 = doc2.child("Farmacy");
    
    for(pugi::xml_node medicine = farmacy2.child("Medicine"); medicine; medicine = medicine.next_sibling("Medicine"))
    {
        
        obj2.setName(medicine.child("Name").text().as_string());
        
        obj2.setPrice(medicine.child("Price").text().as_double());
        
        obj2.setQuantity(medicine.child("Quantity").text().as_int());
        
        obj2.setType(medicine.child("Type").text().as_string());
        
        vectorFarmacy2.push_back(obj2);
    }
    
    if(vectorFarmacy2.empty())
    {
        cout << "The vectorFarmacy1 is empty..." << endl;
    }
    else
    {
        cout << "vectorFarmacy1 is pushed..." << endl;
    }
    
    // Third Farmacy
    
    pugi::xml_document doc3;
    
    doc3.load_file("Farmacy3.xml");
    
    if(doc3)
    {
        cout << "Farmacy3.xml Loaded !" << endl;
    }
    else
    {
        cout << "Problem to load Farmacy3.xml..." << endl;
    }
    
    FarmacyClass obj3;
    
    pugi::xml_node farmacy3 = doc3.child("Farmacy");
    
    for(pugi::xml_node medicine = farmacy3.child("Medicine"); medicine; medicine = medicine.next_sibling("Medicine"))
    {
        
        obj3.setName(medicine.child("Name").text().as_string());
        
        obj3.setPrice(medicine.child("Price").text().as_double());
        
        obj3.setQuantity(medicine.child("Quantity").text().as_int());
        
        obj3.setType(medicine.child("Type").text().as_string());
        
        vectorFarmacy3.push_back(obj3);
    }
    
    if(vectorFarmacy3.empty())
    {
        cout << "The vectorFarmacy1 is empty..." << endl;
    }
    else
    {
        cout << "vectorFarmacy1 is pushed..." << endl;
    }
    
    
}

void Operations::filterType(string filterType)
{
    map<string,string>myMap;
    
    for(int i = 0; i < vectorFarmacy1.size(); i++)
    {
        if(filterType == vectorFarmacy1[i].getType())
        {
            myMap.insert(pair<string, string>(vectorFarmacy1[i].getName(),vectorFarmacy1[i].getType()));
        }
    }
    
    map<string,string>::iterator it = myMap.begin();
    
    cout << "Farmacy 1: " << endl;
    
    for(int i = 0; i < myMap.size(); i++)
    {
        cout << "Name -> " << it->first << ", Type -> " << it->second << endl;
        
        it++;
    }
    
    // Second Farmacy
    
    for(int i = 0; i < vectorFarmacy2.size(); i++)
    {
        if(filterType == vectorFarmacy2[i].getType())
        {
            myMap.insert(pair<string,string>(vectorFarmacy2[i].getName(),vectorFarmacy2[i].getType()));
        }
    }
    
    cout << "Farmacy 2: " << endl;
    
    // Iterator back --
    
    it--;
    
    it--;
    
    for(int i = 0; i < myMap.size(); i++)
    {
        cout << "Name -> " << it->first << ", Type -> " << it->second << endl;
        
        it++;
    }
    
    // Third Farmacy
    
    for(int i = 0; i < vectorFarmacy3.size(); i++)
    {
        if(filterType == vectorFarmacy3[i].getType())
        {
            myMap.insert(pair<string,string>(vectorFarmacy3[i].getName(),vectorFarmacy3[i].getType()));
        }
    }
    
    cout << "Farmacy 3: " << endl;
    
    // Iterator back --
    
    it--;
    
    it--;
    
    for(int i = 0; i < myMap.size(); i++)
    {
        cout << "Name -> " << it->first << ", Type -> " << it->second << endl;
        
        it++;
    }
    
    cout << endl;
    
}

void Operations::filterName(string filterName)
{
    for(int i = 0; i < vectorFarmacy1.size(); i++)
    {
        if(filterName == vectorFarmacy1[i].getName())
        {
            vectorFarmacy1[i].showInfo();
            
            cout << endl;
        }
        
        if(filterName == vectorFarmacy2[i].getName())
        {
            vectorFarmacy2[i].showInfo();
            
            cout << endl;
        }
        
        if(filterName == vectorFarmacy3[i].getName())
        {
            vectorFarmacy3[i].showInfo();
            
            cout << endl;
        }
    }
}

void Operations::filterPrice(double filterPrice)
{
    for(int i = 0; i < vectorFarmacy1.size(); i++)
    {
        if(filterPrice == vectorFarmacy1[i].getPrice())
        {
            vectorFarmacy1[i].showInfo();
            
            cout << endl;
        }
        
        if(filterPrice == vectorFarmacy2[i].getPrice())
        {
            vectorFarmacy2[i].showInfo();
            
            cout << endl;
        }
        
        if(filterPrice == vectorFarmacy3[i].getPrice())
        {
            vectorFarmacy3[i].showInfo();
            
            cout << endl;
        }
    }
}

void Operations::filterQuantity(int filterQuantity)
{
    for(int i = 0; i < vectorFarmacy1.size(); i++)
    {
        if(filterQuantity == vectorFarmacy1[i].getQuantity())
        {
            vectorFarmacy1[i].showInfo();
            
            cout << endl;
        }
        
        if(filterQuantity == vectorFarmacy2[i].getQuantity())
        {
            vectorFarmacy2[i].showInfo();
            
            cout << endl;
        }
        
        if(filterQuantity == vectorFarmacy3[i].getQuantity())
        {
            vectorFarmacy3[i].showInfo();
            
            cout << endl;
        }
    }
}

void Operations::pricePerTablet()
{
    double price = 0;
    
    double price2 = 0;
    
    double price3 = 0;
    
    map<string,double>myMap;
    
    map<string,double>myMap2;
    
    map<string,double>myMap3;
    
    for(int i = 0; i < vectorFarmacy1.size(); i++)
    {
        price = vectorFarmacy1[i].getPrice() / vectorFarmacy1[i].getQuantity();
        
        myMap.insert(pair<string,double>(vectorFarmacy1[i].getName(), price));
        
        price2 = vectorFarmacy2[i].getPrice() / vectorFarmacy2[i].getQuantity();
        
        myMap2.insert(pair<string, double>(vectorFarmacy2[i].getName(),price2));
        
        price3 = vectorFarmacy3[i].getPrice() / vectorFarmacy3[i].getQuantity();
        
        myMap3.insert(pair<string, double>(vectorFarmacy3[i].getName(),price3));
    }
    
    map<string,double>::iterator it = myMap.begin();
    
    map<string,double>::iterator it2 = myMap2.begin();
    
    map<string,double>::iterator it3 = myMap3.begin();
    
    for(int i = 0; i < myMap.size(); i++)
    {
        cout << it->first << " Price per Tablet -> " << it->second << endl;
        
        it++;
        
        cout << endl;
        
        cout << it2->first << " Price per Tablet -> " << it2->second << endl;
        
        it2++;
        
        cout << endl;
        
        cout << it3->first << " Price per Tablet -> " << it3->second << endl;
        
        it3++;
        
        cout << endl;
        
    }
    
    
}


void Operations::priceMax()
{
    map<double,string,greater<double>>myMap;
    
    for(int i = 0; i < vectorFarmacy1.size(); i++)
    {
        myMap.insert(pair<double,string>(vectorFarmacy1[i].getPrice(),vectorFarmacy1[i].getName()));
    }
    
    map<double,string>::iterator it = myMap.begin();
    
    for(int i = 0; i < myMap.size(); i++)
    {
        cout <<"Price -> " << it->first << " Name -> " << it->second << endl;
        
        it++;
    }
}

void Operations::priceMin()
{
    map<double,string,less<double>>myMap;
    
    for(int i = 0; i < vectorFarmacy1.size(); i++)
    {
        myMap.insert(pair<double,string>(vectorFarmacy1[i].getPrice(),vectorFarmacy1[i].getName()));
    }
    
    map<double,string>::iterator it = myMap.begin();
    
    for(int i = 0; i < myMap.size(); i++)
    {
        cout <<"Price -> " << it->first << " Name -> " << it->second << endl;
        
        it++;
    }
}


