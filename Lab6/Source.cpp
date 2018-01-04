#include <iostream>
#include "personData.h"
#include <string>
using namespace std;


personData::personData()
{
	setLst("lst");
	setFrst("frst");
	setAdrs("1234 s Clark");
	setCity("Chicago");
	setSt("IL");
	setZip(60609);
	setPhn(1234567);
}

void personData::setAdrs(string newAdrs)
{
	address = newAdrs;
}
void personData::setCity(string newCty)
{
	city = newCty;
}
void personData::setFrst(string newFrst)
{
	firstName = newFrst;
}
void personData::setLst(string newLst)
{
	lastName = newLst;
}
void personData::setPhn(int newPhn)
{
	phone = newPhn;
}
void personData::setSt(string newSt)
{
	state = newSt;
}
void personData::setZip(int newZip)
{
	zip = newZip;
}

customerData::customerData()
{
	//Default values for customerData
	setCstmrNum(1234);
	setMailList(true);
}

void customerData::setCstmrNum(int newNum)
{
	cstmrNum = newNum;
}
void customerData::setMailList(bool newMlList)
{
	mailLst = newMlList;
}


int main()
{
	customerData cd1;
	cout << "Defaults: " << endl;
	cout << "\tLast Name: " << cd1.getLst() << endl;
	cout << "\tFirst Name: " << cd1.getFrst() << endl;
	cout << "\tAddress: " << cd1.getAdrs() << endl;
	cout << "\tCity: " << cd1.getCty() << endl;
	cout << "\tState: " << cd1.getSt() << endl;
	cout << "\tZip: " << cd1.getZip() << endl;
	cout << "\tPhone: " << cd1.getPhn() << endl;
	cout << "Customer Data Defaults: " << endl;
	cout << "\tCustomer Number: " << cd1.getCstmrNum() << endl;
	cout << "\tMailing List (0=No, 1=Yes): " << cd1.getMailList() << endl;

	system("pause");
	return 0;
}