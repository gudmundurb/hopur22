#include "controlui.h"

using namespace std;

int main()
{
<<<<<<< Updated upstream
    Services s;
    s.display();
    s.sort('3');
    cout << endl;
    s.display();
    string name;
    cout << "Which name do you want to search for?" << endl;
    getline(cin,name);
    s.nameSearch(name);
=======
//    Services s;
//    s.display();
//    s.sort('3');
//    cout << endl;
//    s.display();
//    string name;
//    cout << "Which name do you want to search for?" << endl;
//    cin >> name;
//    s.nameSearch('1',name);

    ShowMainMenu();
    SwitchMainMenu();
>>>>>>> Stashed changes
    return 0;
}
