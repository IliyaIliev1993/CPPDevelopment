//
//  hugeInteger.cpp
//  hugeInteger
//
//  Created by Ichko  on 18/04/17.
//  Copyright © 2017 CobaltCoding. All rights reserved.
//

#include "hugeInteger.hpp"

#include <string>

#include <iostream>

using namespace std;

HugeInteger::HugeInteger(int num) // all NUM numbers in array (example 0)
{
    for(int i = 0; i < 40; i++)
    {
        cout << "Inserted " << num << " number in index " << i << endl;
        
        hugeNumber[i] = num;
        
        arrayCompare[i] = hugeNumber[i];
        
    }
}

void HugeInteger::setInput()
{
    for(int i = 0; i < 40; i++)
    {
        cout << "Insert number in index " << i << endl;
        
        cin >> hugeNumber[i];
    
    }
    
    for(int j = 0; j < 40; j++)
    {
        arrayCompare[j] = hugeNumber[j];
    }
}

void HugeInteger::getOutput()
{
    for(int i = 0; i < 40; i++)
    {
        cout << hugeNumber[i];
    }
    
    cout << endl;
}

void HugeInteger::setAdd(int addNumber)
{
    int counter = 0;
    
    int currentNum = addNumber;
    
    int numDivide = addNumber;
    
    while(currentNum > 0)
    {
        currentNum = currentNum / 10;
        
        counter++;
    }
    
    currentNum = addNumber;
    
   // cout << counter << endl;
    
    for(int i = 39; i >= 39 - counter; i--)
    {
        
        currentNum = numDivide % 10;
        
        hugeNumber[i] = hugeNumber[i] + currentNum;
        
        numDivide = numDivide / 10;
        
        if(hugeNumber[i] > 9)
        {
            hugeNumber[i] = hugeNumber[i] % 10;
            
            hugeNumber[i - 1] = hugeNumber[i - 1] + 1;
        }
        
    }
    
    
    
}

void HugeInteger::setSubstract(int substractNumber)
{
    int counter = 0;
    
    int currentNum = substractNumber;
    
    int numDivide = substractNumber;
    
    while(currentNum > 0)
    {
        currentNum = currentNum / 10;
        
        counter++;
    }
    
    currentNum = substractNumber;
    
    // cout << counter << endl;
    
    for(int i = 39; i >= 39 - counter; i--)
    {
        
        currentNum = numDivide % 10;
        
        hugeNumber[i] = hugeNumber[i] - currentNum;
        
        numDivide = numDivide / 10;
        
        if(hugeNumber[i] < 0)
        {
            hugeNumber[i] = 9;
            
            hugeNumber[i - 1] = hugeNumber[i - 1] - 1;
        }
        
    }
    
}


void HugeInteger::compare(int arr1[],int arr2[])
{
    
    bool verifyEquality = true;
    
    for(int i = 0; i < 40; i++)
    {
        if(arr1[i] > arr2[i])
        {
            cout << "The First Object is bigger, element in index = "<< i << " Object 1 -> (" << arr1[i] << " > " << arr2[i] << ") <- Object 2"<< endl;
            
            verifyEquality = false;
            
            break;
        }
        
        if(arr2[i] > arr1[i])
        {
            cout << "The Second Object is bigger, element in index = "<< i << " Object 2 -> (" << arr2[i] << " > " << arr1[i]<< ") <- Object 1" << endl;
            
            verifyEquality = false;
            
            break;
        }
        
        
    }
    
    if(verifyEquality == true)
    {
        cout << "The Objects are EQUALS" << endl;
    }
    
}













