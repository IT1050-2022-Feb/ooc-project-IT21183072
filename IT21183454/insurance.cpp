#include<iostream>
#include<cstring>
#include"insurance.h"
using namespace std;

insurance::insurance()
{

}

insurance::insurance(string insID, string insType)
{
	insuranceID = insID;
	insuranceType = insType;
}

void insurance::displayClient()
{
	cout << "insuranceid" << insuranceID << endl;
	cout << "insurancetype" << insuranceType << endl;
	cout << ".............................................." << endl;


}

insurance::~insurance()
{

}