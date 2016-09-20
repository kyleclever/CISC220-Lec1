/*
 * b_new_delete.cpp
 *
 *  Created on: 2016Äê9ÔÂ19ÈÕ
 *      Author: Kyle
 */
#include <iostream>
using namespace std;

void new_delete(){
	int *x;
	x = new int;  // now x points to (holds the address of) space for an int on the heap
	*x = 34;  // now the x points to 34;

	//What if there¡¯s not enough space on the heap?
	int *x;
	if( !(x  = new int )){
		cout << "Error: out of memory." <<endl;   // checking to see if there¡¯s space on the heap
		exit(1);
	} //if
	else  {
		*x = 2;
	} //else

	//And when you¡¯re done with it¡­
	int *x;
	if( !(x  = new int ))   {
		cout << "Error: out of memory." <<endl;   // checking to see if there¡¯s space on the heap
		exit(1);
	} //if
	else  {
		*x = 2;
	} //else
	delete x;  //deallocates the space in memory  //Anything on the heap must be deleted

	return;
}


void multi_array(){
	int **x  = NULL;     	// Pointer initialized with null
	x  = new int *[4]; 		// Allocate memory on heap for a 4x3 array

	for (int i = 0; i < 4; i++) {
	x[i] = new int[3];
	} //for

	for (int i = 0; i < 4; i++) {
	for (int j = 0; j < 3; j++) {
			x[i][j] = i+j;
		} //for
	} //for

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			cout << x[i][j];
		} //for
		cout << endl;
	} //for

	// delete **********
	for (int i = 0; i < 4; i++) {
		delete [] x[i];
	} //for
	delete [] x;

}
