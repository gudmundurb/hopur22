#include <fstream>
#include <iostream>
#include "stdlib.h"

using namespace std;


void ShowMainMenu ();
void ShowSearchMenu ();
void ShowSortMenu ();

void getInput(char& refer);
void SwitchMainMenu ();
void SwitchSearchMenu();
int continueSearch ();
int main ()
{
    char option;
    ShowMainMenu();
    SwitchMainMenu();

    cout << option;

    return 0;
}

void ShowMainMenu ()
{
    system("CLS");
    //  Write from a file to cout
    ifstream menu ("MainMenu.h22");
    cout << menu.rdbuf() << endl << "\t: ";
}

void ShowSearchMenu ()
{
    system("CLS");
    //  Write from a file to cout
    ifstream menu ("Search.h22");
    cout << menu.rdbuf() << endl << "\t: ";
}
void ShowSortMenu ()
{
    system("CLS");
    //  Write from a file to cout
    ifstream menu ("Sort.h22");
    cout << menu.rdbuf() << endl << "\t: ";
}

void getInput(char& refer)
{
    cin >> refer;
}

void SwitchMainMenu ()
{
    ShowMainMenu();
    char opt;
    getInput(opt);
    do {
    switch (opt)
    {
        case '1':
            //getData();
            break;
        case '2':
            ShowSearchMenu();
            getInput(opt);
            break;
        case '3':
            SwitchSearchMenu();
            break;
        case '0':
            cout << "Have a nice day!";
            exit(EXIT_SUCCESS);
            break;
        default:
             cout << "Invalid input\n";
             break;



    }

    }while ((opt == '1') || (opt == '2')|| (opt == '3'));



}
void SwitchSearchMenu(){

    char option;
    int invalid;
    string name;
    int year;
    ShowSearchMenu();
    getInput(option);
    do{
        switch(option){
            case '1':
                cout << "First name: ";
                cin >> name;
              //  searchName(false, name);
                break;
            case '2':
                cout << "Last name: ";
                cin >> name;
              //  searchName(true, name);
                break;
            case '3':
                cout << "Year of birth: ";
                cin >> year;
              //  searchYear(true, year);
                break;
            case '4':
                cout << "Year of death: ";
                cin >> year;
              //  searchYear(false, year);
                break;
            case '0':
                SwitchMainMenu();
                return;
                break;
            default:
                cout << "Invalid input\n";
        }
        do{
            cout << "Would you like to make another search(y/n)? ";
            invalid = continueSearch();
        }
        while(invalid == 0);
    }
    while(invalid == 1);
}

int continueSearch(){
    char option;
    cin >> option;
    if(option == 'n' || option == 'N'){
        return 2;
    }
    else if(option == 'y' || option == 'Y'){
        return 1;
    }
    else{
        cout << "options are y and n\n";
        return 0;
    }
    return 0;
}
