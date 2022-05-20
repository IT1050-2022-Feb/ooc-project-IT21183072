#include<cstring>  
#include<iostream>
using namespace std;

#include "InsuranceAgent.h"

InsuranceAgent::InsuranceAgent(){
  
   agentID = 0;
}
InsuranceAgent::InsuranceAgent(int aID){
  
   agentID = aID;
  
}
  
void InsuranceAgent::displayInsuranceAgent(){
   
    cout<<"agentID : "<<agentID<<endl;
    cout<<endl;
}

