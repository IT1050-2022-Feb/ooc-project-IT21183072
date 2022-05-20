#pragma once

#include "ClaimDepartment.h"

class Claim : public ClaimDepartment{
protected:
    char ClaimNo[50] ;
    double amount;
    
public:
    Claim();
    Claim(char cNo[50],double amnt);


    void displayClaim();
    
};

