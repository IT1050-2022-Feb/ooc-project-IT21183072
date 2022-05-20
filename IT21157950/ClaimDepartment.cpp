#include<cstring>
#include<iostream>
using namespace std;
#include "ClaimDepartment.h"

ClaimDepartment::ClaimDepartment(){
    departmentID = 0;
    strcpy(contactNo,"");
    strcpy(email,"");
    
}
ClaimDepartment::ClaimDepartment(int depID,char cNo[],char mail[]){
  
departmentID=depID;
strcpy(contactNo,cNo);
strcpy(email,mail);
  
}
void ClaimDepartment::displayDetails(){
    cout<<"Department ID : "<<departmentID<<endl;
    cout<<"contactNo: "<<contactNo<<endl;
    cout<<"email: "<<email<<endl;
    cout<<endl;

  
}