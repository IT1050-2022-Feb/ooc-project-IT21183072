//class Branch
#pragma once

class Branch{
protected:
    int BranchID;
    char BranchName[50];
    char contactNo[15];
    char email[100];
    char address[100];

public:
    Branch();
    Branch(int bID,char bName[],char cNo[],char mail[],char adrs[]);
    void displayBranch();
};