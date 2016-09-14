/*
 * call_by_pointer.cpp
 *
 *  Created on: Sep 7, 2016
 *      Author: kylew
 */

void change2(int *x, int *y);  // function declaration

int main ()
{  int a = 100;
   int b = 200;
   /* calling a function to change the values.
   *  &a gets at the address of a
   *  &b gets at the address of b
   */
   change2(&a, &b);	//sending in addresses in memory
   cout << "After change, value of a :" << a << endl;
   cout << "After change, value of b :" << b << endl;
   return 0;
} //main

void change2(int *x, int *y)  // *x is a variable that holds an address of  another variable that holds an int
{  *x -=50; 	// modifies the value at address x
   *y /=2; 		// modifies the value at address y
    return 0;
} //change2

/***********

int x = 4; // this sets aside an address in memory at a location large enough to hold an int.  It then puts the value 4 into that address.
cout << x << endl;  // prints out the value at location x.  Compiler assumes you want the value at that location, not the location address.
cout << &x << endl; // this accesses the address of x in memory

int y = &x;  // can’t do.  The address of x is not an int, and y is automatically making a new address at a location in memory that will hold an int.
int *y = &x;  // can do.  Says the variable y holds the address of a variable that holds an int
…or y points to a location that holds an int,
cout << y << “ “ << *y << endl;   //gives you 0x32ff1c  4

*/
