// if and if-else.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{ //<< declare variables at this level when your just starting out programming.

int x = 1;  //declaring x (spaces don't matter)
int y = 0; //declaring y (spaces don't matter)

	if (x == y) // Statement #1. The if "true/equal/whatever" statement
	{								// Notice the block bracket for the if statement. 
		cout << "x and y are equal" << endl; 

	}
	else // Statement #2. The "Else/"False"(?) statement.
	{								// Notice the block bracket for the else statment.
		cout << "x equals " << x << endl;
		cout << "y equals " << y << endl;	
	}

    return 0;
}

