#ifndef CONTROLUI_H
#define CONTROLUI_H
#include <iostream>
#include "services.h"
#include "Man.h"
#include "stdlib.h"

class ControlUI
{
    public:
        void MainMenu();
        void getData();
        int continueSearch();
        void search();
        virtual ~ControlUI();
    protected:
    private:
};

#endif // CONTROLUI_H
