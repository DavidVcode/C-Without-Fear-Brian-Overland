// Program that will print between numbers specified by the user.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int a = 0, b = 0;

	cout << "Please specify the value of the lowest integer you want to count up from...\n";
			//^^^ When you run this program, if you write alot of text, line 13 unfortuantely wraps around the edge 
			// of the cmd window. You don't know how right now, but you'll have to keep reading to see how to fix that.
	cin >> a;
	cout << "" << endl;

	cout << "please specify the highest integer you want to count up to...\n";
	cin >> b;
	cout << "" << endl;

		while (a <= b)
	{
			cout << a << " ";
			a = a + 1;

	}

    return 0;
}

