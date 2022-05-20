#include<cstring>
#include<iostream>
using namespace std;

#include "Claim.h"

Claim::Claim(){
  
  strcpy(ClaimNo,"");
  amount= 0;
   
}
Claim::Claim(char cNo[],double amnt){

    strcpy(ClaimNo,cNo);
    amount = amnt; 
  
}
void Claim::displayClaim(){
    
    cout<<"ClaimNo :"<<ClaimNo<<endl;
    cout<<"amount :"<<amount<<endl;
    cout<<endl;
}