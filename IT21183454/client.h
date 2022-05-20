#include<iostream>
#include<cstring>
using namespace std;

class Client
{
private:
	string name;
	int age;
	string gender;
	string contactNo;
	string email;
	string martitalStatus;
public:
	Client();
	Client(string Name, int Age, string Gender, string ContactNo, string Email, string MartitalStatus);
	void displayClient();
	void addClient();
	void updateClient();
	~Client();
};