#include<cstring>
#include<iostream>
using namespace std;
#include "Branch.h"

Branch::Branch(){
    BranchID = 0;
    strcpy(BranchName,"");
    strcpy(contactNo,"");
    strcpy(email,"");
    strcpy(address,"");
    
    
}
Branch::Branch(int bID,char bName[],char cNo[],char mail[],char adrs[]){
  
    BranchID = bID;
    strcpy(BranchName,bName);
    strcpy(contactNo,cNo);
    strcpy(email,mail);
    strcpy(address,adrs);

}
void Branch::displayBranch(){
    cout<<"Branch ID : "<<BranchID<<endl;
    cout<<"Branch Name : "<<BranchName<<endl;
    cout<<"Branch contactNo : "<<contactNo<<endl;
    cout<<"Branch email: "<<email<<endl;
    cout<<"Branch address: "<<address<<endl;
    cout<<endl;

  
}