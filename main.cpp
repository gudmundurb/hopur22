#include <iostream>
#include "services.h"
using namespace std;
int main()
{
    Services s;
    s.display();
    s.sort('3');
    cout << endl;
    s.display();
    string name;
    cout << "Which name do you want to search for?" << endl;
    cin >> name;
    s.nameSearch('1',name);
    return 0;
}
