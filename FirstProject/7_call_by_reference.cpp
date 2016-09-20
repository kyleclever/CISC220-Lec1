/*
 * 7_call_by_reference.cpp
 *
 *  Created on: 2016Äê9ÔÂ19ÈÕ
 *      Author: Kyle
 */
#include <iostream>
using namespace std;

//Similar to Call by Pointer

void change3(int &x, int &y);

int call_by_refer() {
	int k = 12;
	cout << &k << endl;  // gives us 0x61ff08

	int m = 4;
	change3(k,m);
	cout <<"k is now " << k << " m is now " << m << endl;
	return 0;
}

void change3 (int &x, int &y) {  //says that the address that we refer to as k is now also referred to as x
	cout << &x << endl;  // gives us 0x61ff08
	x = x + 3;
	y = y - 2;
	return;
}


