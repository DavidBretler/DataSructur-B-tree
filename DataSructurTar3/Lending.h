#pragma once
#include <iostream>
#include <string>
using namespace std;

class Lending
{
	int id;
	string client;
	string date;
	int code;
	
	int day();
	int month();
	int year();
	friend istream& operator >>(istream& is, Lending& l);
	friend ostream& operator<<(ostream& os, Lending& l);

	  friend bool operator==(Lending& L1, Lending& L2);
	  friend bool operator!=(Lending& L1, Lending& L2);
	friend bool operator<(Lending& L1, Lending& L2);
	friend bool operator<=(Lending& L1, Lending& L2);
	friend bool operator>(Lending& L1, Lending& L2);
	friend bool operator>=(Lending& L1, Lending& L2);
     public :
	void set_date(string);
};
