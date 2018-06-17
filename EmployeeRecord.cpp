//
//  EmployeeRecord.cpp
//  C++Homework
//
//  Created by Ran Crump  on 6/15/18.
//
#include <iostream>
#include <iomanip>
#include "EmployeeRecord.h"

using namespace std;

void EmployeeRecord::getName(char* fName, char* lName) {
	fName = NULL;
	lName = NULL;

	cout << "First Name:";
	cin >> m_sFirstName;

	cout << "Last Name:";
	cin >> m_sLastName;

	fName = &m_sFirstName[0];
	lName = &m_sLastName[0];
};

int main() {
    
	int _ID = 0;

	double _salary = 0.0;

	char first[32] = "", last[32] = "";

	//ID Test
	cout << "Enter Employee ID Number:";
	cin >> _ID;

	//Salary Test
	cout << "Enter Employee Salary Number:";
	cin >> _salary;

	//Name Test
	cout << "Enter Name:";
	cin >> first >> last;

	EmployeeRecord _EmployeeRecord;
    
	_EmployeeRecord.setID(_ID);

	_EmployeeRecord.setName(first, last);

	_EmployeeRecord.setSalary(_salary);

	_EmployeeRecord.PrintRecord();

	_EmployeeRecord.~EmployeeRecord();

	system("pause");
    return 0;
}
