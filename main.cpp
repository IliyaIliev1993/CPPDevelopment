//
//  main.cpp
//  STL
//
//  Created by Ichko  on 23/05/17.
//  Copyright © 2017 IliyaStark. All rights reserved.
//

#include <iostream>

#include <vector>

#include "pugixml.hpp"

#include "ClassBooks.hpp"

using namespace std;

int main(int argc, const char * argv[])
{
    
    /*vector<int>myVector;
    
    myVector.push_back(5);
    
    myVector.push_back(6);
    
    myVector.push_back(7);
    
    vector<int>::iterator iter = myVector.begin();
    
    cout << *iter << endl;
    
    iter+=2;
    
    cout << *iter << endl;*/
    
    string nameBook;
    
    double price = 0.0;
    
    pugi::xml_document doc;
    
    if(doc.load_file("books.xml"))
    {
        cout << "File readed!" << endl;
    }
    else
    {
        cout << "Problem" << endl;
    }
    
    pugi::xml_node nodObj = doc.child("catalog");
    
    pugi::xml_node book = nodObj.child("book");
    
    vector<Books>myVector;
    
    for(pugi::xml_node book = nodObj.child("book"); book; book = book.next_sibling("book"))
    {
    
        Books bookObject;
        
        bookObject.setAuthor(book.child("author").text().as_string());
        
        bookObject.setTitle(book.child("title").text().as_string());
        
        bookObject.setPrice(book.child("price").text().as_double());
        
        myVector.push_back(bookObject);
        
    }
    
    for(int i = 0; i < myVector.size(); i++)
    {
        myVector[i].showInfo();
        
        cout << endl;
    }
    
    return 0;
}
