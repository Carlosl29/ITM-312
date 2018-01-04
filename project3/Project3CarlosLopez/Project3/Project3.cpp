/*
1. Create Menu, 4 options:
	1.) Filled in Triangle
	2.) Filled in Inverted Triangle
	3.) Any shape(Square, Circle, Different Triangel,etc)
	4.) Exit
	5.) (Extra Credit) Filled in Bow Tie

Requirments:
	a.) Case statements for each menu option(a-b)
	b.) Ask the user to enter the height(amount of rows) of shaper or
		ask them to enter the width and height of your shape.
	c.) While loop or do/while loop
	d.) For loop for each shape
	e.) Function for each shape

	EXTRA CREDIT IF TURNED IN BY 10/9/17
	NORMAL DUE DATE 10/16/17

*/


#include <iostream>
using namespace std;

string mkTrngl(int);
string mkTrnglInv(int);
string mkSquare(int);
string mkBowTie(int);
int exit();


int main()
{
	int rows;
	int usrChc;
	bool choice = true;

	while(choice)
	{
		cout << "Menu" << "\n============" << endl;
		cout << "1.) Triangle" << endl;
		cout << "2.) Inverted Triangle" << endl;
		cout << "3.) Square" << endl;
		//cout << "4.) Bow Tie(Extra Credit)" << endl;
		cout << "4.) Exit" << endl;

		cout << "Please enter your choice: ";
		cin >> usrChc;
		

		switch(usrChc)
		{
			case 1:
				cout << "Please enter amount of rows: ";
				cin >> rows;	
				mkTrngl(rows);
				break;
			case 2:
				cout << "Please enter amount of rows: ";
				cin >> rows;
				mkTrnglInv(rows);
				break;
			case 3:
				cout << "Please enter amount of rows: ";
				cin >> rows;
				mkSquare(rows);
				break;
			/*case 4:
				cout << "Please enter amount of rows: ";
				cin >> rows;
				mkBowTie(rows);*/
			case 4:
				choice = false;
				break;
		}
	}

	exit();
}

// Function to make the triangle
string mkTrngl(int x)
{
	int row, col, temp;

	for(row = 1; row <= x; row++)
	{
		for(col = 1; col <= row; col++)
		{
			cout << "* ";
		}
		cout << "\n";

	}
}

// Function to make the inverted triangle
string mkTrnglInv(int x)
{
	int row, col, temp;

	for(row = x; row >= 1; row--)
	{
		for(col = row; col >= 1; col--)
		{
			cout << "* ";
		}
		cout << "\n";

	}
}

// Function to make the square
string mkSquare(int x)
{

	int row, col, temp;

	for(row = 1; row <= x; row++)
	{
		for(col = 1; col <= x; col++)
		{
			cout << "* ";
		}
		cout << "\n";

	}
}

//Function to make boe tie
/*string mkBowTie(int x)
{
	int i,space,rows,k=0;
    
    for(i = 1;i <= x;i++)
    {
        for(space = 1; space <= x-i;space++)
        {
           cout<<"* ";
        }
        while(k!=2*i-1)
        {
           cout<<" ";
           k++;
        }
        k=0;
        cout<<"\n";
    }
}*/

// Function to end the program
int exit()
{
	cout << "Exiting program...\n";
	return 0;
}