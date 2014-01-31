/*
 * Starting Out with C++: Early Objects, 5th Edition
 * Chapter 2 - Introduction to C++
 * Program 2-5, begins on page 35
 * This code written by Joey "Boot Guy Joe" Hanley on 10/09/2013
 */

// A well-adjusted printing program
#include <iostream>
using namespace std;

int main()
{
	cout << "The following items were top sellers" << endl; // endl, pronounced 'end-L', is a stream-manipulator that starts a new line
	cout << "during the month of June:" << endl;
	cout << "Computer games" << endl;
	cout << "Coffee" << endl;
	cout << "Aspirin" << endl;
	return 0;
}

/*
 * EXPECTED OUTPUT:
 *
 * The following items were top sellers
 * during the month of June:
 * Computer games
 * Coffee
 * Aspirin
 *
 */