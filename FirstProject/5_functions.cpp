/*
 * 5_functions.cpp
 *
 *  Created on: 2016Äê9ÔÂ19ÈÕ
 *      Author: Kyle
 */

//When calling a function, the compiler must be aware of the function.
//You must declare a function before calling it.

#include <iostream>
#include <stdlib.h>
using namespace std;

// must declare
int max3(int x, int y, int z);  // Here is our function declaration
								//X Y Z DOESN'T MATTER

int funs() {
	   int x = max3(4,7,3);    //!!!Default is call by value ( This means that a copy of the value is placed in the parameter.)
	   cout << x << endl;
	   return 0;
}

int max3(int num1, int num2, int num3)
{	int result=max(max(num1,num2),num3);
return result;
} //max3

/*Declaration: The compiler can now handle most uses of the function without needing the full definition of the function.
Declaring a function lets you write code the compiler can understand without all of the details
Especially useful when one file is using functions in another file
*/


//ORDER MATTERS

//Function Arguments:
//Copy of the value is placed in the parameter


