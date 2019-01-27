// Game of NIM (Subtraction Game Honey Comb Havoc game).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;



int main()
{
	char choice;

	int total = 0, n = 0;
	
	cout << "Welcome to NIM! If you would like to play NIM with me, \n";
	cout << "please enter a number total. \n";
	cin >> total;
	cout << " \n";

	while (true)
	{
		if (total % 3 == 2)
		{	
		total = total - 2;		
		cout << "I am subtracting 2. \n";
		
		}
		else
		{
		total--;
		cout << "I am subtracting 1. \n";

		}
	
		cout << "New total is " << total << endl;
		
		if (total <= 0)
		{
			cout << "I win! \n";
			break;

		}

		cout << "Choose to subtract: 1 or 2. \n";
		cin >> n;
		while (n < 1 || n>2)  //This line is a "player correction" for an illegal move during the game: selecting a subtraction choice above 2 or below 1.
		{
			cout << "You're only allowed to subtract 1 or 2. Fair is fair. \n";
			cout << "Please re-enter your choice: \n";
			cin >> n;
		}

		total = total - n;
		cout << "New total is " << total << endl;

		if (total <= 0)
		{cout << "You win!. \n";
			break;
		}
	
	}



    return 0;
}

