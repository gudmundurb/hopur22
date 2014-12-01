#include "services.h"

Services::Services()
{
    d = Database();
    d.start();
}

Services::~Services()
{
    d.finish();
}
void Services::display()
{
    d.display();
}
void Services::add(Man m1)
{
    d.add(m1);
}
void Services::sort(char choice)
{
    switch(choice)
    {
        case '1': {d.sortName(); break;}
        case '2': {d.sortBirthYear(); break;}
        case '3': {d.sortDeathYear(); break;}
        default: cout << "Incorrent input." << endl;
    }
}

vector<Man> Services::nameSearch(string name){

    vector<Man> resultsVector;
    resultsVector = d.searchName(name);
    cout << resultsVector; //taka út cout og setja í efsta layer
    return resultsVector;
}

vector<Man> Services::yearSearch(char choice, int year){

    vector<Man> resultsVector;
    switch(choice)
    {
        case '2': {resultsVector = d.searchBirth(year); break;}
        case '3': {resultsVector = d.searchDeath(year); break;}
    }
    cout << resultsVector;
    return resultsVector;
}


