#include<iostream>
#include<cstring>
#include"payment.h"

payment::payment()
{

}

payment::payment(string payID, string payMeth, double Amount)
{
	paymentID = payID;
	paymentMethod = payMeth;
	amount = Amount;


}

void payment::displayClient()
{
	cout << "paymentid" << paymentID << endl;
	cout << "paymentmethod" << paymentMethod << endl;
	cout << "amount" << amount << endl;
	cout << "........................................................." << endl;

}

payment::~payment()
{

}

