//
//  searchHelpFunctions.cpp
//  skil1_verklegt
//
//  Created by Steinn Elliði Pétursson on 27/11/14.
//  Copyright (c) 2014 Steinn Elliði Pétursson. All rights reserved.
//

#include "searchHelpFunctions.h"


vector<Man> Database::searchName(bool isLast, string name){

    vector<Man> nameVector;
    if(isLast){
        for(unsigned int i = 0; i < data.size(); i++){
            if(data[i].getLast() == name){
                nameVector.push_back(data[i]);
            }

        }

    }
    else{
        for(unsigned int i = 0; i < data.size(); i++){
            if(data[i].getFirst() == name){
                nameVector.push_back(data[i]);
            }

        }
    }
return nameVector;
}

vector<Man> Database::searchYear(bool isBirth, int year){

    vector<Man> yearVector;
    if(isBirth){
        for(unsigned int i = 0; i < data.size(); i++){
            if(data[i].getBirthYear() == year){
                yearVector.push_back(data[i]);
            }

        }

    }
    else{
        for(unsigned int i = 0; i < data.size(); i++){
            if(data[i].getDeathYear() == year){
                yearVector.push_back(data[i]);
            }

        }
    }
return yearVector;
