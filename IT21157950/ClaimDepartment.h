#pragma once

class ClaimDepartment{
protected:
    int departmentID;
    char contactNo[15];
    char email[100];
    

public:
    ClaimDepartment();
    ClaimDepartment(int depID,char cNo[],char mail[]);
    void displayDetails();
};