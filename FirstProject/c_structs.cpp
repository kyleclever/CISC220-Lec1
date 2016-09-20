/*
 * c_structs.cpp
 *
 *  Created on: 2016Äê9ÔÂ19ÈÕ
 *      Author: Kyle
 */
#include <iostream>
using namespace std;

struct StudentInfo{
	string fname;
	string lname;

	int id;
	StudentInfo next;
};

int structs(){
	StudentInfo Sam;
	Sam.fname = "Sam";
	Sam.lname = "Stone";
	Sam.id = 3214;
	StudentInfo studarr[5];
	studarr[1].fname="Tailor";
	cout << studarr[1].fname <<endl;
	return 0;

}

