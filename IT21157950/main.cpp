#include <iostream>
#include <cstring>
using namespace std;

#include "Staff.h"
#include "BranchManager.h"
#include "InsuranceAgent.h"
#include "Branch.h"
#include "ClaimDepartment.h"
#include "Claim.h"

int main() {
  //staff
  Staff s("nipunika","female",90000.00,"0712434567","nipunika@gmail.com");
  s.displayEmp();

  //BranchManager
  BranchManager b(20001);
  b.displayBranchManager();

  //InsuranceAgent
  InsuranceAgent i(10000);
  i.displayInsuranceAgent();

  //Branch
  Branch k(587,"pilimathalawa","081248291","587@gmail.com","327,pilimathalawa,kandy");
  k.displayBranch();

  //ClaimDepartment
  ClaimDepartment c(135,"081229944","135@gmail.com");
  c.displayDetails();

  //Claim
  Claim m("5000",8000);
  m.displayClaim();
  


  
  }
