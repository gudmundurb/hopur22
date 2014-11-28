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
        vector<Man> nameSearch(char choice, string name);
        vector<Man> yearSearch(char choice, int year);
    private:
        Database d;
};

#endif // SERVICES_H
