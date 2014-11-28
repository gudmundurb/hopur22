#include <iostream>
#include "services.h"
using namespace std;
int main()
{
    Services s;
    s.display();
    s.sort(2);
    cout << endl;
    s.display();
    return 0;
}
