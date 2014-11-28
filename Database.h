#ifndef DATABASE_H
#define DATABASE_H

#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>

#include "man.h"

class Database
{
    public:
        Database();
        ~Database();
        void start();
        void finish();
        void display();
        void add(Man m1);
        vector<Man> getData();
        void setData(vector<Man> v);
        void sortFirstName();
        void sortLastName();
        void sortBirthYear();
        void sortDeathYear();
        vector<Man> searchFirstName(string name);
        vector<Man> searchLastName(string name);
        vector<Man> searchBirth(int year);
        vector<Man> searchDeath(int year);
    private:
        vector<Man> data;
};
bool sortByFirstName(const Man& m1, const Man& m2);
bool sortByLastName(const Man& m1, const Man& m2);
bool sortByBirthYear(const Man& m1, const Man& m2);
bool sortByDeathYear(const Man& m1, const Man& m2);
ostream& operator << (ostream& os, vector<Man> vm1);
#endif // DATABASE_H
