#include "database.h"

Database::Database()
{

}

Database::~Database()
{

}
vector<Man> Database::getData()
{
    return data;
}
void Database::start()
{
    ifstream datafile;
    datafile.open("C:\\Users\\Start\\Documents\\GitHub\\verklegt_1_onn\\Mannalisti\\data.txt");
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
void Database::finish()
{
    ofstream datafile;
    datafile.open("C:\\Users\\Start\\Documents\\GitHub\\verklegt_1_onn\\Mannalisti\\data.txt");
    for(unsigned int i = 0; i < data.size(); i++)
    {
        datafile << data[i];
    }
    datafile.close();
}

void Database::setData(vector<Man> v)
{
    data = v;
}
void Database::display()
{
    for(unsigned int i = 0; i < data.size(); i++)
    {
        cout << data[i];
    }
}
void Database::add(Man m1)
{
    data.push_back(m1);
}
void Database::sortFirstName()
{
    sort(data.begin(), data.end(), sortByFirstName);
}
void Database::sortLastName()
{
    sort(data.begin(), data.end(), sortByLastName);
}
void Database::sortBirthYear()
{
    sort(data.begin(), data.end(), sortByBirthYear);
}
void Database::sortDeathYear()
{
    sort(data.begin(), data.end(), sortByDeathYear);
}

bool sortByFirstName(const Man& m1, const Man& m2)
{
    return m1.getFirst() < m2.getFirst();
}
bool sortByLastName(const Man& m1, const Man& m2)
{
    return m1.getLast() < m2.getLast();
}
bool sortByBirthYear(const Man& m1, const Man& m2)
{
    return m1.getBirthYear() < m2.getBirthYear();
}
bool sortByDeathYear(const Man& m1, const Man& m2)
{
    return m1.getBirthYear() < m2.getBirthYear();
}
