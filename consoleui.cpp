#include "consoleui.h"

ConsoleUI::ConsoleUI()
{

}
void ConsoleUI::start()
{
    s = Services();
    s.start();
    int cont = 1;
    do{
        cont = SwitchMainMenu();
    }while(cont != 0)
}
void ConsoleUI::end()
{
    s.end();
}

void ConsoleUI::ShowMainMenu()
{
    cout << "Main menu" << endl;
   /* system("CLS");
    //  Write from a file to cout
    ifstream menu ("MainMenu.h22");
    cout << menu.rdbuf() << endl << "\t: ";
    menu.close();*/
}
void ConsoleUI::SwitchMainMenu()
{
    ShowMainMenu();
    cout << "Option: ";
    char opt;
    cin >> opt;
    switch (opt)
    {
        case '1':{
            Man tempMan;
            cin >> tempMan;
            if(tempMan.validate())
                s.add(tempMan);
            else
                cout << "Your input was not correct" << endl;
            s.display();
            break;
        }
        case '2':{
            s.display();
            break;
        }
        case '3':{
            SwitchSearchMenu();
            break;
        }
        case '0':{
            cout << "Have a nice day!";
            return 0;
        }
        default:{
             cout << "Invalid input\n";
             break;
        }
    }
    return true,
}
void ConsoleUI::ShowSearchMenu ()
{
    system("CLS");
    //  Write from a file to cout
    ifstream menu ("Search.h22");
    cout << menu.rdbuf() << endl << "\t: ";
}
void ConsoleUI::SwitchSearchMenu()
{
    char option;
    string name;
    char gen;
    int year;
    vector<Man> results;
    ShowSearchMenu();
    cin >> option;
    switch(option){
        case '1':
            cout << "Name: ";
            cin >> name;
            results = s.nameSearch(name);
            break;
        case '2':
            cout << "Gender(M/F): ";
            cin >> gen;
            //results = s.genderSearch(gen);
            break;
        case '3':
            cout << "Year of birth: ";
            cin >> year;
            results = s.yearSearch(3, year);
            break;
        case '4':
            cout << "Year of death: ";
            cin >> year;
            results = s.yearSearch(4, year);
            break;
        case '0':
            return;
        default:
            cout << "Invalid input\n";
            break;
    }
    if(results.size() > 0)
        cout << results;
    else
        cout << endl << "No results." << endl;
}


