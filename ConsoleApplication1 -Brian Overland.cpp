// ConsoleApplication1 -Brian Overland.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
using namespace std;


int main()
{
	cout << "Never fear, C++ is here!" << endl;
	cout << "Do you C++?" << endl;
	cout << "I think," << endl;
	cout << "Therefore, I program.\n";

	cout << "A man has no name.\n";
	
	// Both "\n" and "<< endl" end the statement and end the current line so it doesn't // 
	// look like a runoff sentence when it prints in the console or on screen. //

	cout << "\n";
	cout << "I am GATRLING.\n";
	cout << "The city administrator.\n";
	cout << "Welcome.\n";

	// Presence of \n or endl without data content results in a "blank line". This is not a true blank but a trick.

	cout << "\n";
	cout << "This is a" << endl << "nice program.\n";

	cout << "We've learned enough about cout and linebreaking." << endl << "Time to move on.\n";
	cout << "\n";
	return 0;

}

