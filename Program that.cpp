// Program that.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;



int main()
{
	int n = 0;

	cout << "Please enter a number to determine if it can be divided by 7...\n"; cout << "\n";
	cout << "\n";
	cin >> n;
	cout << "\n";

	if (n % 7 == 0)
	{
		cout << n << " CAN be divided evenly by 7 \n";
		cout << "\n";
	}
	else
	{
		cout << n << " CANNOT be divided evenly by 7 \n";
		cout << "\n";
	}



    return 0;
}

