/*
 * 8_random_numbers.cpp
 *
 *  Created on: 2016Äê9ÔÂ19ÈÕ
 *      Author: Kyle
 */
#include <iostream>
using namespace std;

#include <stdlib.h>
#include <time.h>

int randnum (){
	srand(time(NULL)) ; 	// creates a seed based on the current time (down to the millisecond)
						// Only need to create a seed once in a program
						// Must create seed BEFORE you use rand for the first time.
	int x = rand(); 	// now rand uses this seed in the calculation of the random number.
					// Now you won¡¯t always get the same sequence of random numbers
	return 0;
}


// Question: How would you generate a random number between 1 and 10?
// int x = rand() % 9 + 1

// rand() % max-min + min
