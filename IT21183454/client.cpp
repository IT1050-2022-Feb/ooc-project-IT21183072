#include<iostream>
#include<cstring>
#include"client.h"
using namespace std;

Client::Client()
{

}
Client::Client(string Name, int Age, string Gender, string ContactNo, string Email, string MartitalStatus) {
    name = Name;
    age = Age;
    gender = Gender;
    contactNo = ContactNo;
    email = Email;
    martitalStatus = MartitalStatus;
}
void Client::displayClient()
{
    cout << " name: " << name << endl;
    cout << " age: " << age << endl;
    cout << "gender : " << gender << endl;
    cout << "contact NO: " << contactNo << endl;
    cout << "email: " << email << endl;
    cout << "martitalStatus: " <<   martitalStatus << endl;
    cout << endl;
}
void Client::addClient()
{

}
void Client::updateClient()
{

}
Client::~Client()
{

}
