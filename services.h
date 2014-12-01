#ifndef SERVICES_H
#define SERVICES_H
#include "database.h"

class Services
{
    public:
        Services();
        ~Services();
        void display();
        void start();
        void end();
        void add(Man m1);
        void sort(char choice);
        vector<Man> nameSearch(string name);
        vector<Man> yearSearch(char choice, int year);
        vector<Man> genderSearch(char gender) const;
    private:
        Database d;
};

#endif // SERVICES_H
