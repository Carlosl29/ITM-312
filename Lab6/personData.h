#pragma once
#include <iostream>
using namespace std;

class personData
{
public:
	personData();
	string lastName;
	string firstName;
	string address;
	string city;
	string state;
	int zip;
	int phone;

	string getLst()
	{
		return lastName;
	}
	string getFrst()
	{
		return firstName;
	}
	string getAdrs()
	{
		return address;
	}
	string getCty()
	{
		return city;
	}
	string getSt()
	{
		return state;
	}
	int getZip()
	{
		return zip;
	}
	int getPhn()
	{
		return phone;
	}

	void setLst(string newLst);
	void setFrst(string newFrst);
	void setAdrs(string newAdrs);
	void setCity(string newCty);
	void setSt(string newSt);
	void setZip(int newZip);
	void setPhn(int newPhn);
};

class customerData: public personData
{
	friend class personData;
public:
	customerData();
	int cstmrNum;
	bool mailLst;

	int getCstmrNum()
	{
		return cstmrNum;
	}
	bool getMailList()
	{
		return mailLst;
	}

	void setCstmrNum(int newNum);
	void setMailList(bool newMlList);
};