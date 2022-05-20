#pragma once

class Staff{
protected:
    char name[50];
    char gender[10];
    double salary;
    char contactNo[15];
    char email[100];

public:
    Staff();
    Staff(char uName[],char tgender[],double sal,char cNo[],char mail[]);
    void displayEmp();
};

