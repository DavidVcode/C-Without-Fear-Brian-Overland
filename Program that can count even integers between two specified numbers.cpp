// Program that can count even integers between two specified numbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int x = 0, y = 0; //remainder = 0;

	cout << "Pleae enter HIGHEST NUMBER you would like to count down from... \n"; //Get User Input for specific number
		cin >> x; // User does his thing the first time
		cout << "\n";

	cout << "Please enter LOWEST NUMBER you would like to count down to... \n"; //Get User Input for specific number
	cin >> y; // User does his thing for a second time
	cout << "\n";

	// Ok. The goal here is to FIRST setup the most SPECIFIC statements for your solution, THEN work your way
	// backwards towards more GENERAL statements. This allows us to reverse engineer the appropriate syntax. Behold:


	while (x >= y) // This is 2nd. Why? Because once we know that the program will only print out even integers,
					// we just have to identify under what condition it will loop and what it will do when it will loop. 
					// ...This goes without saying...If you don't want it to loop forever, you need to make sure
					// the looping condition implies some kind of termination. In our case, when x "becomes" less
					// than y. Try switching the operators around, and see if you can get it to count down!
	{
		x = x - 1; 

		if (x % 2 == 0) // This is 1st statement. Why? Because our primary goal in this program is to only solve and 
						// detect for EVEN integers between the user's two chosen integer inputs.
		{				
			cout << x << " "; // This here is the simple code for printing the resulting math out to the screen.
		
		}
		
		
	}
    return 0;
}

