#include "controlui.h"

ControlUI::ControlUI()
{
}

void ControlUI::MainMenu () {
    Services menu;
    char select;
    do {
            cout << "\n\t___________________________\n"
                << "\t\t Main Menu\n"
                << " \t___________________________\n\n"
                << " \t 1. Add new entry.\n"
                << " \t 2. View entries.\n"
                << " \t 0. Quit this program.\n";
                cin >> select;
    switch (select)
    {
        case '1':
            getData();
            break;
        case '2':
            menu.display();
            search();
            break;
        case '0':
             cout << "Have a nice day!";

            break;

    }

    }while ((select == '1') || (select == '2'));

}

void ControlUI::getData() {
    Man a;
    Services s;
    cin >> a;
    do {
    if (a.validate()) {
        cout << "This entry has been validated and entered into the database!";
        cout << a;
        s.add(a);
    }
    else {
        cout << "Wrong input, try again";
        cin >> a;
    }
    }while (!a.validate());
}

void ControlUI::search(){

    char option;
    int invalid;
    string name;
    int year;

    do{
        cout << "What would you like to search for? \npress:\n1 for first name \n2 for last name\n";
        cout << "3 for gender \n4 for year of birth \n5 for year of death \n6 to return\n";
        cin >> option;

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
                cout << "Gender(m/f): ";
                cin >> option;
              //  searchGender(option);
                break;
            case '4':
                cout << "Year of birth: ";
                cin >> year;
              //  searchYear(true, year);
                break;
            case '5':
                cout << "Year of death: ";
                cin >> year;
              //  searchYear(false, year);
                break;
            case '6':
                return;
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

int ControlUI::continueSearch(){
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
