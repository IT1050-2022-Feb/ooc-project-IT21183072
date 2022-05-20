//Base class - Staff
//Derived Classes - InsuranceAgent,BranchManager
#include<iostream>
#include<cstring>
#include<string>
using namespace std;

class staff{
protected:
char name[20];
char gender[7];
double salary;
char address[20];

public:
staff(){
  strcpy(name,"Malani");
  strcpy(gender,"Female");
  salary=75000;
  strcpy(address,"Matara");
}
void updateEmp(){}
void addEmp(){}
void display(){
  cout<<"This is staff class"<<endl;
}
void displayEmp(){
  cout<<name<<"__"<<gender<<"__"<<salary<<"__"<<address<<endl;
}
};

class InsuranceAgent : public staff{
protected:
int agentid;

public:
InsuranceAgent(){
  strcpy(name,"Nimal");
  agentid=10021;
  strcpy(gender,"Male");
  salary=45000;
  strcpy(address,"Hambantota"); 
}
void display(){
  cout<<"This is InsuranceAgent class"<<endl;
}
void displayEmp(){
  cout<<name<<"__"<<agentid<<"__"<<gender<<"__"<<salary<<"__"<<address<<endl;
}
};

class BranchManager : public staff{
protected:
int managerid;

public:
BranchManager(){
  strcpy(name,"Sunimal");
  managerid=420;
  strcpy(gender,"Male");
  salary=55000;
  strcpy(address,"Galle");
}
void display(){
  cout<<"This is BranchManager class"<<endl;
}
void displayEmp(){
  cout<<name<<"__"<<managerid<<"__"<<gender<<"__"<<salary<<"__"<<address<<endl;
}
};

int main(){
  staff S1;
  InsuranceAgent A1;
  BranchManager M1;

  S1.display();
  S1.displayEmp();
  A1.display();
  A1.displayEmp();
  M1.display();
  M1.displayEmp();
  return 0;
}