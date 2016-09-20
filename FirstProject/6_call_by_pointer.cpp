/*
 * 6_call_by_pointer.cpp
 *
 *  Created on: 2016Äê9ÔÂ19ÈÕ
 *      Author: Kyle
 */
#include <iostream>
using namespace std;

void change2(int *x, int *y);  // function declaration

int pointer ()
{  int a = 100;   	// &a - the address of a
   int b = 200;		// &b - the address of b

   change2(&a, &b);	// sending in addresses in memory

   cout << "After change, value of a :" << a << endl;
   cout << "After change, value of b :" << b << endl;

   return 0;
}


void change2(int *x, int *y){  // *x is a variable that holds an address of another variable that holds an int !!
	*x -=50; 	// modifies the value at address x
	*y /=2; 	// modifies the value at address y
} //change2





/*   differences (* and &)

 int x = 4; // set value 4 into that x address.
1.  cout << x << endl;  // prints out the value at location x.
2.  cout << &x << endl; // access x address  0X32FF3C

int *y = &x;  // can do.  y points to x address.
3.	cout << y << endl;   //0x32ff1c
4.	cout << &y << endl;	 //0X32FF3C
5.	cout << *y << endl	 //4

x = 8;
6.	cout << y << endl;    // 0X32FF3C
7.	cout << *y << endl;    // 8
return 0;


note: int y = &x;  // WRONG! int = address? no

*/










/*
 * Call by Pointers:
-Can change variables from one function within the confines of another function
-Makes code more readable
-Reduces or eliminates the need for global variables
-Better form (I was taught never to use global variables)
-Easier to read
-Don¡¯t have variables sticking around when you¡¯re done with them
-Smaller memory footprint
-We¡¯re not making a new copy of each value passed into the function as a parameter.
-(This applies more to arrays, structs, things bigger¡­)

Why not always use Call by Pointer?
Call by Value:
	-Can¡¯t accidentally change a value in another function
	-Make sure, if you¡¯re working with others, they don¡¯t accidentally change the value
	-Maintain ¡°privacy¡±
 */
