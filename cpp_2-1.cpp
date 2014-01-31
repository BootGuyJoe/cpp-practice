/*
 * Starting Out with C++: Early Objects, 5th Edition
 * Chapter 2 - Introduction to C++
 * Program 2-1, begins on page 30
 * This code written by Joey "Boot Guy Joe" Hanley on 10/09/2013
 */
 
// A simple C++ program 
#include <iostream> // pre-processor directive, includes 'iostream' header file to get keyboard input and/or print output to the screen
using namespace std; // declare namespace for all the names creaded by iostream

int main() // begin main code body, 'int' stands for integer; this function returns a number value to the operating system
{
	cout << "Programming is great fun!"; // iostream funtion, '<<' is the 'stream-insertion' operator, sends the string to cout, which displays message on-screen
	return 0; // Sent the value of 0 back to the OS upon the program's completion; '0' typically means a successful execution
}

/*
 * Expected output: Dislays the text "Programming is great fun!" on the screen
 */