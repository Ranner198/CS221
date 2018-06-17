//
//  EmployeeRecord.cpp
//  C++Homework
//
//  Created by Ran Crump  on 6/15/18.
//
#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include "EmployeeRecord.h"

using namespace std;

void spacer() {
	cout << "*******************************************" << endl;
}

int main() {
    
	//Visual Appeal ------------------------------------------------
	spacer();
	cout << "Welcome, Please press enter to continue..." << endl;
	spacer();
	cin.ignore();
	system("CLS");
	spacer();
	//--------------------------------------------------------------


	//Local Variables for testing---------------
	int _ID = 0;

	double _salary = 0.0;

	char first[32] = "", last[32] = "";

	int _DeptID = 0;
	//------------------------------------------


	//ID Test
	cout << "Enter Employee ID Number:";
	cin >> _ID;

	//Name Test
	cout << "Enter Name:";
	cin >> first >> last;

	//Dept #
	cout << "Enter The Department Store Number: ";
	cin >> _DeptID;

	//Salary Test
	cout << "Enter Employee Salary Number:";
	cin >> _salary;

	//Class Obj Declaration
	EmployeeRecord _EmployeeRecord;
    
	//Set ID #
	_EmployeeRecord.setID(_ID);

	//Assign Name
	_EmployeeRecord.getName(first, last);
	_EmployeeRecord.setName(first, last);

	//Dept ID 
	_EmployeeRecord.setDept(_DeptID);

	//Set Salary
	_EmployeeRecord.setSalary(_salary);

	//Print
	spacer();
	_EmployeeRecord.PrintRecord();
	spacer();

	//Deconstructor
	_EmployeeRecord.~EmployeeRecord();

	system("pause");
    return 0;
}
