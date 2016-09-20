/*
 * 1_BasicInfo.cpp
 *
 *  Created on: 2016Äê9ÔÂ19ÈÕ
 *      Author: Kyle
 */

#include<iostream>  // # means do first before compile the rest of the code
					// include means include this library or header in your program
					// a library with input and output functions (cins, cout)

using namespace std; //means we don't have to specify the std first.
					 // we have to specify std::cout instead of just cout

int main(){  //very C++ (and C) program must have a main function.  This function is run first and automatically.
	cout<< "!!!Hello, World,2016!!!" <<endl;
	return 0; //default

} 	//cout: character out. You’re piping characters into cout and they get printed, usually to the console window
	//endl: new line. It also flushes out the buffer.


/* C++
 * comments blocks:
 * 	 1. Compiled
 * 	 2. middle level language
 * 	 3. super set of C ; one of the fastest languages
 * 	 4. developed by Bjarn Stroudstrup 1979
 * 	 5. default .cpp
 * 	 6. used in Amazon; Google
 */

/*
Operators
  	+, -, *, /, % (Modulo, remainder)
	x++;
	x--;
	== , != , < , <=, >, >=
	&&, ||, !   (AND, OR, NOT)
	=, +=, -=, /=, *=, %=,

FYI: Bitwise Operators (example C = A & B // 0000 1100)


 */

#include <math.h>
//math stuff

int math(){
	double d = 200.374;
	int i = 100;
	int j = -100;
	cout << sin(d) << endl;  // -0.634939
	cout << sqrt(i) << endl; // 10
	cout << pow(i,2) << endl; // 10000
	cout << floor(d) << endl; // 200
	//cout << abs(j) << endl; //100  - only works with ints
	cout << fabs(d) << endl; //200.374 ¨C only works with doubles and floats
	return 0;

}
