//
//  ClassBooks.cpp
//  STL
//
//  Created by Ichko  on 23/05/17.
//  Copyright © 2017 IliyaStark. All rights reserved.
//

#include "ClassBooks.hpp"

Books::Books(string author, string title, double price)
{
    setAuthor(author);
    
    setTitle(title);
    
    setPrice(price);
}

//

Books::Books()
{
    this->author = "N/A";
    
    this->title = "N/A";
    
    this->price = 0.0;
}

//

void Books::setAuthor(string author)
{
    this->author = author;
}

void Books::setTitle(string title)
{
    this->title = title;
}

void Books::setPrice(double price)
{
    this->price = price;
}

//

string Books::getAuthor()
{
    return this->author;
}

string Books::getTitle()
{
    return this->title;
}

double Books::getPrice()
{
    return this->price;
}

//

void Books::showInfo()
{
    cout << "Author -> " << getAuthor() << endl;
    
    cout << "Title -> " << getTitle() << endl;
    
    cout << "Price -> " << getPrice() << endl;
}
