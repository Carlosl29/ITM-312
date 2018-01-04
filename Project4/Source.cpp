#include <iostream>
#include <stdlib.h>
#include <time.h>

#include "Header.h"
using namespace std;

Coin::Coin()
{
	if ((rand() % 2) == 1)
	{
		sideUp = "heads";
	}
	else if ((rand() % 2) == 0)
	{
		sideUp = "tails";
	}
}

void Coin::setSideUp(string str)
{
	sideUp = str;
}

void Coin::toss()
{
	string sideUp;
	if ((rand() % 2) == 1)
	{
		sideUp = "heads";
	}
	else if((rand() % 1) == 0)
	{
		sideUp = "tails";
	}
	setSideUp(sideUp);
}



int main()
{
	int const NUM_FLIPS = 20;
	Coin c1;
	int headsUp = 0, tailsUp = 0;

	srand(time(NULL));

	for (int x = 0; x < NUM_FLIPS; x++)
	{
		c1.toss();
		cout << c1.getSideUp() << endl;
		
		if (c1.getSideUp() == "heads")
		{
			headsUp++;
		}
		else if (c1.getSideUp() == "tails")
		{
			tailsUp++;
		}
	}

	cout << "Heads Up: " << headsUp << endl;
	cout << "Tails Up: " << NUM_FLIPS - headsUp << endl;

	system("pause");
	
}