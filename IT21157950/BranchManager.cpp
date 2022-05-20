#include<cstring>
#include<iostream>
using namespace std;

#include "BranchManager.h"

BranchManager::BranchManager(){
  
    managerID = 0 ;
   
}
BranchManager::BranchManager(int mID){

    managerID = mID;
  
}
void BranchManager::displayBranchManager(){
    
    cout<<"managerID : "<<managerID<<endl;
    cout<<endl;
}