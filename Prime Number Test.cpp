// Prime Number Test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;



int main()

{
	int i = 2;
	int n = 0;
	int x = sqrt (n);
		bool is_prime = true;
		cout << "Enter a number you want to test for prime" << endl;
		cin >> n;


		while (i <= n) // This part I don't understand. From what I can gather is that when the square root of n, like 7 is to 49, is greater than or equal to i,
							 // than the loop will trigger and we get 2 + 1 <= sqrt(49) or in this case 3 <= 7. Since the condition shows that 3 is still lower than
							 // 7, the loop will trigger again and again until it reaches 7. At that point, we will have until it reaches 7 which satisfies the <= and 
							 // termintates the loop. The If ( n % 2 == 0 ) determines if the number is prime, and the if/else (is_prime) statements uses the result of the math
							 // to give you your answer
		{
			if (n % 2 == 0) // Remainder division obviously checks if the remainder is an odd or even number, a key part of determining if the number is prime.
			{
				is_prime = false; // If the remainder can equal zero because it can be divided by two, it is obviously not prime.
				break;
			}
			
			++i;
		}
		if (is_prime) // Here we're just saying if we know the number is prime, say it.
		{
			cout << n << " is prime. \n";
		}
		else     // Here we're just saying if we know the number is NOT prime, say it.
		{
			cout << n << " is NOT prime. \n";

		}

		{}
				
	
	return 0;
}

