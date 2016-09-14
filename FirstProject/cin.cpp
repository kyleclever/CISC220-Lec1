/*
 * cin.cpp
 *
 *  Created on: Sep 6, 2016
 *      Author: kylew
 */
#include <iostream>
using namespace std;
int main(){
	string response;
	cout << "Please enter your name: "<< endl;
	cin >> response;
	cout << "Your name is " << response;
	return 0; // default
}

#include <iostream>
#include <stdlib.h>   // standard library header
using namespace std;
int main() {
	string response;
	cout << "Please enter your height (in inches):" << endl;
	cin >> response;

	/* atof converts string to float,
	 * .c_str() makes the string a character string so it can be converted
	 */
	float x = atof(response.c_str()); 	//
	x *= 2.54;
	cout << "height in cm is" << x << endl;
	return 0;
}  // main


