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
void Services::sort(int choice)
{
    switch(choice)
    {
        case 1: {d.sortFirstName(); break;}
        case 2: {d.sortLastName(); break;}
        case 3: {d.sortBirthYear(); break;}
        case 4: {d.sortDeathYear(); break;}
    }
}

vector<Man> Services::nameSearch(char choice, string name){

    vector<Man> resultsVector;
    switch(choice)
    {
   //     case '1': {resultsVector = searchFirstName(name); break;}
   //     case '2': {resultsVector = searchLastName(name); break;}
    }
return resultsVector;
}

vector<Man> Services::yearSearch(char choice, int year){

    vector<Man> resultsVector;
    switch(choice)
    {
  //      case '3': {resultsVector = searchBirthYear(year); break;}
  //      case '4': {resultsVector = searchDeathYear(year); break;}
    }
return resultsVector;
}


