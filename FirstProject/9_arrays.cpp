/*
 * 9_arrays.cpp
 *
 *  Created on: 2016Äê9ÔÂ19ÈÕ
 *      Author: Kyle
 */
#include <iostream>
using namespace std;

void array(){
	//Create an array of 5 ints
	int a[5] = {3,2,4,1,7};  // note squiggly brackets
	int a1[] = {1,2,3,4,5};

	// Create an array of 3 floats
	float b[3] = {3.2,1.4};

	// make an array of spaces for 7 ints
	int c[7]; 	// set a size
	c[3] = 24;  // array at index 3 holds 24
	cout << c[4]<< endl; // 0

	// address of an array = first address of that value
	int x[4] = {3,2,1,4};
	cout << x << endl;  //the address of the first value of array
	cout << &x[0] << endl; //same value, address of first value in array

	return;
}

//Note: no straightforward way of getting size of an array.
//Easiest way:
//	pass the length of the array along with a pointer to the array (aka the address of the array)

int pointer_array() {
	int x[4]= {3,2,4,1};
	double k = getAverage(&x[0], 4); // gets the address of the first value in the array
	// Or  double l = getAverage(x,4); // same
	cout << k << endl;
}

double getAverage(int *arr, int size) {// a pointer, a variable that holds an address
	int sum = 0;
	for (int i = 0; i < size; i++)
	{	sum += arr[i];  // now, in essence, the value at (the address of arr + i)
	} //for
	double avg = double(sum) / size;
	return avg;
}



// sizeof()
//Can use sizeof() to get the length of something in bytes

int size_of(){
	int x [4] = {3,2};   // int - 4 bytes   (older compilers use 2 bytes)
	cout << sizeof(x)<< endl; //4*4=16

	float y[3];  // float - 4 bytes
	cout << sizeof(y);  //4*3=12

	double z[7]; // float - 8 bytes
	cout << sizeof(z) << endl; //7*8=56

	//Returning an array -return a address
	return 0; // or return &r[0];

//NOTE Problem: different compilers make types different sizes
}


int * createArray(int size){
	int r[size] = {3,2,4,1};
	return r;  // or return &r[0];
} //createArray


