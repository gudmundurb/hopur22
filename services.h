#ifndef SERVICES_H
#define SERVICES_H
#include "database.h"

class Services
{
    public:
        Services();
        ~Services();
        void display();
        void add(Man m1);
        void sort(int choice);
    private:
        Database d;
};

#endif // SERVICES_H
