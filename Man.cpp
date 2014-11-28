#include "man.h"


Man::Man()
{
    //cout << "Man constructed." << endl;
    firstName = "";
    lastName = "";
    gender = 'n';
    birthyear = 0;
    deathyear = 0;
}
Man::Man(string fname, string lname, char gen, int byear, int dyear)
{
    //cout << "Man constructed." << endl;
    firstName = fname;
    lastName = lname;
    gender = gen;
    birthyear = byear;
    deathyear = dyear;
}
ofstream& operator << (ofstream& os, Man& m1)
{
    os  << m1.firstName << "\t"
        << m1.lastName  << "\t"
        << m1.gender    << "\t"
        << m1.birthyear << "\t"
        << m1.deathyear << endl;

    return os;
}
ifstream& operator >> (ifstream& is, Man& m1)
{
    cout << "Ifstream" << endl;
    cout << "First Name: ";
    is >> m1.firstName;
    cout << "Last Name: ";
    is >> m1.lastName;
    cout << "Gender(M/F): ";
    is >> m1.gender;
    cout << "Year of birth: ";
    is >> m1.birthyear;
    cout << "Year of death: ";
    is >> m1.deathyear;

    return is;
}
ostream& operator << (ostream& os, Man& m1)
{
    os  << setw(15) << left << m1.firstName
        << setw(15) << m1.lastName
        << setw(8) << m1.gender
        << setw(6) << m1.birthyear
        << setw(6) << m1.deathyear << endl;

    return os;
}
istream& operator >> (istream& is, Man& m1)
{
    cout << "First Name: ";
    is >> m1.firstName;
    cout << "Last Name: ";
    is >> m1.lastName;
    cout << "Gender(M/F): ";
    is >> m1.gender;
    cout << "Year of birth: ";
    is >> m1.birthyear;
    cout << "Year of death: ";
    is >> m1.deathyear;

    return is;
}
string Man::getFirst() const
{
    return firstName;
}
string Man::getLast() const
{
    return lastName;
}
int Man::getBirthYear() const
{
    return birthyear;
}
int Man::getDeathYear() const
{
    return deathyear;
}
