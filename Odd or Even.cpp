// Odd or Even.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int n = INFINITY, remainder = 0; // When (n) is going to be declared by the user, it can be any number 

	cout << "Please enter a number and hit ENTER.\n";
		cin >> n;					// When (n) is going to be declared by the uder, it can be any number
	
		remainder = (n % 2);  // Question!! How does the "remainder" know its the "remainder" if (n % 2)
								// is supposed to be division and you have bigger numbers like 16? (n % 2) is still
								// greater than 0 is 16/2 = 8??
								// Ex. 16/2 = 8
								// remainder = 0, this is an assignment! there is no question!
								// remainder [assignment] 0 =  (16%2) equals 8
								// If the dividend is 8 and we know the remainder has been assigned an
								// absolute value of zero, then the equality check should not be correct,
								// 8 does not equal 0!
								// Now we got something fishy.
								// What is actually happening is "remainder division" (%) which is special
								// Its restricted to integer data types and produces A) quotient & B) Remainder
								// BTW! you don't need the "remainder" variable. Just use the "formula" for finding
								// whether or not the remainder divides evenly into 0 or not
	if (remainder == 0)
	{
		cout << n << " is even. \n";
		
	}
	else
	{
		cout << n << " is odd. \n";
	}

	return 0;
}

