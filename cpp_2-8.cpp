/*
 * Starting Out with C++: Early Objects, 5th Edition
 * Chapter 2 - Introduction to C++
 * Program 2-8, begins on page 43
 * This code written by Joey "Boot Guy Joe" Hanley on 10/09/2013
 */

// This program has constants and a variable
#include <iostream>
using namespace std;

int main()
{
	int apples; // this is the the variable
	
	apples = 20; // '20' is an integer constant; this value will not be changed
	cout << "Today we sold " << apples << " bushels ";
	cout << "of apples.\n";
	return 0; // '0' is another integer constant
}

/*
 * EXPECTED OUTPUT:
 *
 * Today we sold 20 bushels of apples.
 *
 */