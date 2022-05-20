#pragma once

#include "Staff.h"

class BranchManager : public Staff{
protected:
    int managerID;
    
public:
    BranchManager();
    BranchManager(int mID);


    void displayBranchManager();
    
};

