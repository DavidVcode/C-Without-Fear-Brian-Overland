// Program that counts in reverse between two specified numbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	float a = 0, b = 0;
	cout << "Please input the highest integer you would like to count down from...\n";
		cin >> a;
		cout << "\n";

	cout << "Please input the lowest integer you would like to cout down to...\n";
		cin >> b;
		cout << "\n";


		while (a>=b)
		{
			cout << a << " ";
			a = a - 1;

		}

    return 0;
}

