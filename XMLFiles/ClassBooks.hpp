//
//  ClassBooks.hpp
//  STL
//
//  Created by Ichko  on 23/05/17.
//  Copyright © 2017 IliyaStark. All rights reserved.
//

#ifndef ClassBooks_hpp
#define ClassBooks_hpp

#include <iostream>

#include "pugixml.hpp"

using namespace std;

class Books
{
private:
    
    string author;
    
    string title;
    
    double price;
    
public:
    
    Books(string,string,double);
    
    Books();
    
    //
    
    void setAuthor(string);
    
    void setTitle(string);
    
    void setPrice(double);
    
    //
    
    string getAuthor();
    
    string getTitle();
    
    double getPrice();
    
    //
    
    void showInfo();
};

#endif /* ClassBooks_hpp */
