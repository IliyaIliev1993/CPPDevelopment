//
//  main.cpp
//  XMLIliyaFile
//
//  Created by Ichko  on 25/05/17.
//  Copyright © 2017 IliyaStark. All rights reserved.
//

#include <iostream>

#include <vector>

#include <fstream>

#include "pugixml.hpp"

#include "Cars.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    Cars carObject;
  
    pugi::xml_document doc;
    
    doc.load_file("File.xml");
    
    if(doc)
    {
        cout << "File Readed !" << endl;
    }
    else
    {
        cout << "Can not open file" << endl;
    }
    
    pugi::xml_node autoChild = doc.child("Auto");
    
    for(pugi::xml_node carChild = autoChild.child("Car"); carChild; carChild = carChild.next_sibling())
    {
        
        carObject.setMake(carChild.child("Make").text().as_string());
        
        carObject.setYear(carChild.child("Year").text().as_int());
        
        carObject.setPrice(carChild.child("Price").text().as_double());
        
        carObject.pushInVector(carObject);
    }
    
    carObject.showVector();
    
    // Write in text file
    
    ofstream write("FileRecord.txt",ios::out);
    
    write << "MAKE - YEAR - PRICE " << endl;
    
    write << "--------------------" << endl;
    
    string make;
    
    int year;
    
    double price;
    
    for(int i = 0; i < carObject.myVector.size(); i++)
    {
        make = carObject.myVector[i].getMake();
        
        year = carObject.myVector[i].getYear();
        
        price = carObject.myVector[i].getPrice();
        
        write << make << " " << year << " " << price << endl;
        
        write << endl;
        
    }
    
    write << "                     developed by Iliya Iliev" << endl;
    
    // Write in Binary File
    
    ofstream writeInBinary("FileInBinary.dat",ios::out | ios::binary);
    
    Cars carBinary;
    
    while(writeInBinary && writeInBinary.eof())
    {
        for(int i = 1; i <= 3; i++)
        {
            writeInBinary.write(reinterpret_cast<char*>(&carBinary),sizeof(Cars));
        }
    }
    
    while (writeInBinary && writeInBinary.eof())
    {
        for(int i = 1; i <= 3; i++)
        {
            writeInBinary.write(reinterpret_cast<char*>(&carObject), sizeof(Cars));
        }
    }

    
    
    return 0;
}
