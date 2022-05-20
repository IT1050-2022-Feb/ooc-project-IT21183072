#pragma once

#include "Staff.h"


class InsuranceAgent : public Staff {
protected:
    int agentID;
public:
    InsuranceAgent();
    InsuranceAgent(int aID);

  void displayInsuranceAgent();
};


