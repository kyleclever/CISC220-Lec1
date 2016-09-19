/*
 * structs.cpp
 *
 *  Created on: Sep 15, 2016
 *      Author: kylew
 */

/*
 *
 *
 */
#include <iostream>
using namespace std;

struct StudentInfo{
	string fname;
	string lname;

	int id;
	StudentInfo next;
};

int main(){
	StudentInfo Sam;
	Sam.fname = "Sam";
	Sam.lname = "Stone";
	Sam.id = 3214;
	StudentInfo studarr[5];
	studarr[1].fname="Tailor";
	cout << studarr[1].fname <<endl;
	return 0;

}
