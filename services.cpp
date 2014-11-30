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
        case '1': {d.sortFirstName(); break;}
        case '2': {d.sortLastName(); break;}
        case '3': {d.sortBirthYear(); break;}
        case '4': {d.sortDeathYear(); break;}
        default: cout << "Incorrent input." << endl;
    }
}

vector<Man> Services::nameSearch(char choice, string name){

    vector<Man> resultsVector;
    /*
    switch(choice)
    {
        case '1': {resultsVector = d.searchFirstName(name); break;}
        case '2': {resultsVector = d.searchLastName(name); break;}
    }*/
    resultsVector = d.searchFirstName(name);
    resultsVector.insert(resultsVector.end(), d.searchLastName(name).begin(), d.searchLastName(name).end());
    cout << resultsVector;
    return resultsVector;
}

vector<Man> Services::yearSearch(char choice, int year){

    vector<Man> resultsVector;
    switch(choice)
    {
        case '3': {resultsVector = d.searchBirth(year); break;}
        case '4': {resultsVector = d.searchDeath(year); break;}
    }
    cout << resultsVector;
    return resultsVector;
}


