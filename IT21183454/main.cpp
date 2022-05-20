#include<iostream>
#include<cstring>
#include"client.h"
#include"insurance.h"
#include"payment.h"


int main() {

  //client

   Client* c1 = new Client("puishpa", 60, "Female", "0767416466", "pushpa@gmail.com", "Married");

    Client* c2 = new Client("thilan",25, "male", "0725643875", "thilan@gmail.com", "single");

    Client* c3 = new Client("Shanuka", 30, "Female", "0767416466", "shanuka@gmail.com", "Married");

    c1->displayClient();
    c2->displayClient();
    c3->displayClient();


//insurance
	insurance* i1 = new insurance("100", "1");
	insurance* i2 = new insurance("200", "2");

	i1->displayClient();
	i2->displayClient();

  //payment

	payment* p1 = new payment("100", "1", 2000);
	payment* p2 = new payment("200", "2", 4000);

	p1->displayClient();
	p2->displayClient();
  
  return 0;

}