#include "Database.h"
#include "Man.h"

Database::Database()
{
    ifstream datafile;
    datafile.open("data.txt");
    Man temp;
    string tfirst;
    string tlast;
    char tgen;
    int tbyear;
    int tdyear;
    while(true)
    {
        if(!(datafile >> tfirst)) break;
        if(!(datafile >> tlast)) break;
        if(!(datafile >> tgen)) break;
        if(!(datafile >> tbyear)) break;
        if(!(datafile >> tdyear)) break;
        Man temp(tfirst,tlast,tgen,tbyear,tdyear);
        data.push_back(temp);
    }
    datafile.close();
}

Database::~Database()
{
    ofstream datafile;
    datafile.open("data.txt");
    for(unsigned int i = 0; i < data.size(); i++)
    {
        datafile << data[i];
    }
    datafile.close();
}
void Database::display()
{
    for(unsigned int i = 0; i < data.size(); i++)
    {
        cout << data[i];
    }
}
