/*
 * Starting Out with C++: Early Objects, 5th Edition
 * Chapter 2 - Introduction to C++
 * Program 2-4, begins on page 35
 * This code written by Joey "Boot Guy Joe" Hanley on 10/09/2013
 */

// An unruly printing program
#include <iostream>
using namespace std;

int main()
{
	cout << "The following items were top sellers";
	cout << "during the month of June:";
	cout << "Computer games";
	cout << "Coffee";
	cout << "Aspirin";
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
 * ACTUAL OUTPUT:
 *
 * The following items were top sellersduring the month of June:Computer gamesCoffeeAspirin
 *
 * REASON WHY: Cout displays information sent to it in a continuous stream. You need to separate each line with a stream-manipulator called 'endl'.
 */