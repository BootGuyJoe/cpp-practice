/*
 * Starting Out with C++: Early Objects, 5th Edition
 * Chapter 2 - Introduction to C++
 * Program 2-6, begins on page 36
 * This code written by Joey "Boot Guy Joe" Hanley on 10/09/2013
 */

// Another well-adjusted printing program
#include <iostream>
using namespace std;

int main()
{
	cout << "The following items were top sellers\n"; // You can use the escape sequence '/n', newline, within the string to make a new line, as well
	cout << "during the month of June:\n";
	cout << "Computer games\nCoffee"; // An escape sequence doesn't have to be a the end of the string to work
	cout << "\nAspirin\n"; // You can use multiple escape sequences in the same string
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