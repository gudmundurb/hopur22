#ifndef DATABASE_H
#define DATABASE_H
#include <vector>
#include "Man.h"
#include <iostream>
#include <fstream>

class Database
{
    public:
        Database();
        ~Database();
        void display();
    protected:
    private:
        vector<Man> data;
};

#endif // DATABASE_H
