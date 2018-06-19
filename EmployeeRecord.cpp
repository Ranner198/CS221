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

	char _first[32] = "", _last[32] = "";

	int _DeptID = 0;
	//------------------------------------------

	//Inputs

	//ID Test
	cout << "Enter Employee ID Number:";
	cin >> _ID;

	//Name Test
	cout << "Enter Name:";
	cin >> _first >> _last;

	//Dept #
	cout << "Enter The Department Store Number: ";
	cin >> _DeptID;

	//Salary Test
	cout << "Enter Employee Salary Number:";
	cin >> _salary;

	//------------------------------------------------

	//Class Obj Declaration
	EmployeeRecord _EmployeeRecord;
    
	//Set ID #
	cout << "\nSetting Employee ID: " << _ID << endl;
	_EmployeeRecord.setID(_ID);

	//Assign Name
	cout << "Setting Name: " << _first << " " << _last << endl;
	_EmployeeRecord.setName(_first, _last);

	//Dept ID 
	cout << "Setting Department ID Code: " << _DeptID << endl;
	_EmployeeRecord.setDept(_DeptID);

	//Set Salary
	cout << "Setting Salary: " << _salary << endl;
	_EmployeeRecord.setSalary(_salary);

	//Print
	cout << "Printing Record..." << endl << endl;
	_EmployeeRecord.PrintRecord();

	//Deconstructor
	_EmployeeRecord.~EmployeeRecord();

	//EmployeeRecord(int ID, char *fName, char *lName, int dept, double sal)
	EmployeeRecord *test = new EmployeeRecord(1551, "John", "Doe", 56, 10.48);

	system("pause");
    return 0;
}
