// Boolean Logic (Short Circuit) Test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	int age = 0;
	int b = 0;

	cout << "Please enter your age \n";
	cin >> age;

	if (12 < age && age < 17)
	{
		cout << "You are a teenager. \n";

	}
	if (age > 17)
	{
		cout << "You are an adult. \n";
	}
	else (age < 12);
	{
	
		cout << "You are child. \n";
	
	}


	return 0;
}

