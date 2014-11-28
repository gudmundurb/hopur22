#include "services.h"

Services::Services()
{
    d = Database();
    d.start();
}

Services::~Services()
{
    d.finish();
}
void Services::display()
{
    d.display();
}
void Services::add(Man m1)
{
    d.add(m1);
}
void Services::sort(int choice)
{
    switch(choice)
    {
    case 1: {d.sortFirstName(); break;}
    case 2: {d.sortLastName(); break;}
    case 3: {d.sortBirthYear(); break;}
    case 4: {d.sortDeathYear(); break;}
    }
}
