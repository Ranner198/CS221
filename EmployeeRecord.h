//
//  EmployeeRecord.h
//  C++Homework
//
//  Created by Ran Crump  on 6/15/18.
//
#pragma once

#include <string.h>

using namespace std;

class EmployeeRecord
{
private:
    int m_iEmployeeID;
    char m_sLastName[32];
    char m_sFirstName[32];
    int m_iDeptID;
    double m_dSalary;
    
public:
    //Default Construtor
	EmployeeRecord();

	//Construtor Function
	EmployeeRecord(int ID, char *fName, char *lName, int dept, double sal);

	//Default Deconstructor
    ~EmployeeRecord();

    //Employee ID
	void setID(int ID);
	int getID();
    
	//Employee Name
	void setName(char* fName, char* lName);
	void getName(char* fName, char* lName);

	//Employee Department Number
	void setDept(int d);
	void getDept(int& d);

    //Employee Salary
	void setSalary(double sal);
	void getSalary(double* sal);

    //Print Employee Record to screen
	void PrintRecord();
};
