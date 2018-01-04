#pragma once
#include <string>
using namespace std;

class Coin
{
	private:
		string sideUp;
	public:
		Coin();
		void toss();
		void setSideUp(string);
		string getSideUp()
		{
			return sideUp;
		}


};