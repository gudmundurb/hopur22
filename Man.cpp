#include "Man.h"
//snilld

Man::Man()
{
    firstName = "";
    lastName = "";
    gender = 'n';
    birthyear = 0;
    deathyear = 0;
}
Man::Man(string fname, string lname, char gen, int byear, int dyear)
{
    firstName = fname;
    lastName = lname;
    gender = gen;
    birthyear = byear;
    deathyear = dyear;
}
ofstream& operator << (ofstream& os, Man& m1)
{
    os  << m1.firstName << " "
        << m1.lastName  << " "
        << m1.gender    << " "
        << m1.birthyear << " "
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
    os  << m1.firstName << " ";
    os  << m1.lastName  << " ";
    os  << m1.gender    << " ";
    os  << m1.birthyear << " ";
    os  << m1.deathyear << endl;

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
