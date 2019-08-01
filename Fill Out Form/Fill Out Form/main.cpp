//
//  main.cpp
//  Fill Out Form
//
//  Created by Matthew Austin on 4/4/16.
//  Copyright (c) 2016 Matt. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

class FillOutForm
{
    string first, last, street, city, state, zip;
    
public:
    string firstName()
    {
        cout << "Enter Your First Name: ";
        getline(cin, first);
        
        return first;
    }
    
    string lastName()
    {
        cout << "Enter Your Last Name: ";
        getline(cin, last);
        
        return last;
    }
    
    string streetName()
    {
        cout << "Enter Your Street: ";
        getline(cin, street);
        
        return street;
    }
    
    string cityName()
    {
        cout << "Enter Your City: ";
        getline(cin, city);
        
        return city;
    }
    
    string zipName()
    {
        cout << "Enter Your Zip Code: ";
        getline(cin, zip);
        
        return zip;
    }
    
    void Display()
    {
        cout << " " << endl;
        cout << "Confirmation" << endl;
        cout << " " << endl;
        cout << "First Name: " << first << endl;
        cout << "Last Name: " << last << endl;
        cout << "Street: " << street << endl;
        cout << "City: " << city << endl;
        cout << "Zip Code: " << zip << endl;
    }
    
    
    
};




int main()
{
    FillOutForm display;
    
    display.firstName();
    display.lastName();
    display.streetName();
    display.cityName();
    display.zipName();
    display.Display();
    
    
    
    
}
