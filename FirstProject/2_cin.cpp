/*
 * 2_cin.cpp
 *
 *  Created on: 2016Äê9ÔÂ19ÈÕ
 *      Author: Kyle
 */
// cin -user input

#include <iostream>
#include <stdlib.h>   // standard library header
using namespace std;

int cin_(){
	// asking name input
	string response;
	cout << "Please enter your name: "<< endl;
	cin >> response;
	cout << "Your name is " << response;


	//asking height input and convert to float
	string height;
	cout << "Please enter your height (in inches):" << endl;
	cin >> height;

	/* atof converts string to float,
	 * .c_str() makes the string a character string so it can be converted
	 */

	float x = atof(response.c_str()); 	//
	x *= 2.54;
	cout << "height in cm is" << x << endl;

	return 0; // default
}




