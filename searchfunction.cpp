//
//  searchfunction.cpp
//  skil1_verklegt
//
//  Created by Steinn Elliði Pétursson on 27/11/14.
//  Copyright (c) 2014 Steinn Elliði Pétursson. All rights reserved.
//

#include "searchfunction.h"


#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

int continueSearch();

void search(vector<Man> famousProgrammer){
    
    char option;
    int invalid;
    
    do{
        cout << "What would you like to search for? \npress:\n1 for first name \n2 for last name\n";
        cout << "3 for gender \n4 for year of birth \n5 for year of death \n6 to return\n";
        cin >> option;
        
        switch(option){
            case '1':
                cout << "First name: ";
                searchName(option, famousProgrammer);
                break;
            case '2':
                cout << "Last name: ";
                searchName(option, famousProgrammer);
                break;
            case '3':
                cout << "Gender(m/f): ";
                searchGender(famousProgrammer);
                break;
            case '4':
                cout << "Year of birth: ";
                searchYear(option, famousProgrammer);
                break;
            case '5':
                cout << "Year of death: ";
                searchYear(option, famousProgrammer);
                break;
            case '6':
                return;
            default:
                cout << "Invalid input\n";
        }
        do{
            cout << "Would you like to make another search(y/n)? ";
            invalid = continueSearch();
        }
        while(invalid == 0);
    }
    while(invalid == 1);
}

int continueSearch(){
    char option;
    cin >> option;
    if(option == 'n' || option == 'N'){
        return 2;
    }
    else if(option == 'y' || option == 'Y'){
        return 1;
    }
    else{
        cout << "options are y and n\n";
        return 0;
    }
    return 0;
}