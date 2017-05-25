//
//  Doctor.hpp
//  CompositionDoctor
//
//  Created by Ichko  on 21/04/17.
//  Copyright © 2017 CobaltCoding. All rights reserved.
//

#ifndef Doctor_hpp
#define Doctor_hpp

#include <iostream>

#include "Patient.hpp"

using namespace std;

class Doctor{
    
private:
    
    string nameDoc;
    
    string speciality;
    
    Patient pat1;
    
public:
    
    Doctor(string,string,Patient&);
    
    //
    
    void setNameDoc(string);
    
    void setSpeciality(string);
    
    void setPatient(Patient&);
    
    //
    
    string getNameDoc();
    
    string getSpecliality();
    
    Patient& getPatient();
    
    void showInfoDoc();
    
    
};

#endif /* Doctor_hpp */
