#include <iostream>
#include "services.h"
using namespace std;
int main()
{
    Services s;
    s.display();
    s.sort(3);
    cout << endl;
    s.display();
    Man m1;
    cin >> m1;
    s.add(m1);
    cout << "The following person has been added to the database." << endl;
    cout << m1;

    return 0;
}
