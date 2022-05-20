#include<iostream>
#include<cstring>
using namespace std;


class insurance {
private:
	string insuranceID;
	string insuranceType;

public:
	insurance();
	insurance(string insID, string insType);
	void displayClient();
	~insurance();
};