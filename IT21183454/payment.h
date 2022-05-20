#include<iostream>
#include<cstring>
using namespace std;


class payment {
private:
	string paymentID;
	string paymentMethod;
	double amount;

public:
	payment();
	payment(string payID, string payMeth, double Amount);
	void displayClient();
	~payment();
};