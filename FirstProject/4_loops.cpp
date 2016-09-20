/*
 * 4_loops.cpp
 *
 *  Created on: 2016Äê9ÔÂ19ÈÕ
 *      Author: Kyle
 */
#include <iostream>
using namespace std;

int loops(){

	//for loop //
   int x = 0;
   for( int a = 5; a > 0; a--) {
	   x+= a;
   }

   //while loop //
   int x1 = 0;
   int a = 5;
   while (a > 0)  {
   	x1 += a;
   	a--;
   }
   cout << "value of x: " << x << endl; //15


   int c = 77;
   int b = c-1;
   while ((c%b) > 0)
   {
   	b--;
   }
   cout << b << endl;   // 11


   // do -while loop//  at least run once
   int d = 5;
   int y = 0;
   do
   {  cout << "value of a: " << d << endl;
      y += d;
      d--;
   } while (d > 5);  // do - note the semicolon here
   cout << "value of x: " << y << endl;


   return 0;
}

