//
//  Doctor.cpp
//  CompositionDoctor
//
//  Created by Ichko  on 21/04/17.
//  Copyright © 2017 CobaltCoding. All rights reserved.
//

#include "Doctor.hpp"

#include <iostream>

using namespace std;

Doctor::Doctor(string nameDoc, string speciality, Patient& pat1):pat1(pat1)
{
    setNameDoc(nameDoc);
    
    setSpeciality(speciality);
    
    setPatient(pat1);
}

//

void Doctor::setNameDoc(string nameDoc){
    
    this->nameDoc = nameDoc;
}

void Doctor::setSpeciality(string speciality)
{
    this->speciality = speciality;
}

void Doctor::setPatient(Patient& pat1)
{
    this-> pat1 = pat1;
}

//

string Doctor::getNameDoc()
{
    return this-> nameDoc;
}

string Doctor::getSpecliality()
{
    return this->speciality;
}

Patient& Doctor::getPatient()
{
    return this->pat1;
}

void Doctor::showInfoDoc()
{
    cout << "Name Doc -> " << getNameDoc() << endl;
    
    cout << "Speciality -> " << getSpecliality() << endl;
    
    cout << "Patient:" << endl;
    
    pat1.showInfo();
}
