// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;



int main()
{
	int i = 0, n = 0; 
	
		cout << "Please enter a number on the console" << endl;
		cin >> n;
		i = 1;

		while (i <= n)
		{ cout << i << " "; //Important! The " " is actually so when (i) is printed we have space between the
							//next printed number if the loop persists. Just try it without the quotes! OR,
							// add a line break and see what that does!
		i = i + 1;
		}
			
	return 0;
}

