#include<cstring>
#include<iostream>
using namespace std;
#include "Staff.h"

Staff::Staff(){
    strcpy(name,"");
    strcpy(gender,"");
    salary = 0;
    strcpy(contactNo,"");
    strcpy(email,"");
    
}
Staff::Staff(char uName[],char tgender[],double sal,char cNo[],char mail[]){
  
strcpy(name,uName);
strcpy(gender,tgender);
salary = sal;
strcpy(contactNo,cNo);
strcpy(email,mail);


  
}
void Staff::displayEmp(){
    cout<<"User Name : "<<name<<endl;
    cout<<"gender : "<<gender<<endl;
    cout<<"salary : "<<salary<<endl;
    cout<<"contactNo: "<<contactNo<<endl;
    cout<<"email: "<<email<<endl;
    cout<<endl;

  
}