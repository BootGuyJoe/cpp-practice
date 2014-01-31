/*
 * Starting Out with C++: Early Objects, 5th Edition
 * Chapter 2 - Introduction to C++
 * Program 2-7, begins on page 40
 * This code written by Joey "Boot Guy Joe" Hanley on 10/09/2013
 */

// This program has a variable
#include <iostream>
using namespace std;

int main()
{
	int number; // this is a variable definition; 'int' means it is only capable of containing an integer
	
	number = 5; // this is a variable assignment; store the integer '5' in the variable 'number'
	cout << "The value of number is " << "number" << endl; // This won't work, because I used a string rather than referencing the actual variable
	cout << "The value of number is " << number << endl; // This is the correct way
	
	number = 7; // reassigning the variable 'number' to the integer '7'
	cout << "Now the value of number is " << number << endl;
	
	return 0;
}

/*
 * EXPECTED OUTPUT:
 *
 * The value of the number is number
 * The value of the number is 5
 * Now the value of the number is 7
 *
 */