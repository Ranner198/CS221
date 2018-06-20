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
	EmployeeRecord() {
		m_iEmployeeID = 0;
		strcpy_s(m_sLastName, "");
		strcpy_s(m_sFirstName, "");
		m_iDeptID = 0;
		m_dSalary = 0.0;
	};

	//Construtor Function
	EmployeeRecord(int ID, char* fName, char* lName, int dept, double sal) {
		setID(ID);
		setName(fName, lName);
		setDept(dept);
		setSalary(sal);

		//Print
		PrintRecord();
	};

	//Default Deconstructor
    ~EmployeeRecord(){
	}

    //Employee ID
	void setID(int ID) {
		m_iEmployeeID = ID;
	};
	int getID() {
		return m_iEmployeeID;
	};
    
	//Employee Name
	void setName(char* fName, char* lName) {
		
		//Get Ptr Size
		int fSize = strlen(fName);
		int lSize = strlen(lName);

		//Logical Size Testing
		if (fSize < 32 && lSize < 32) {
			strcpy_s(m_sFirstName, fName);
			strcpy_s(m_sLastName, lName);
		}

		//Null out
		fName = NULL;
		lName = NULL;
	};
	void getName(char* fName, char* lName) {

		//Null check
		fName = NULL;
		lName = NULL;

		//Assign addresses
		fName = &m_sFirstName[0];
		lName = &m_sLastName[0];
	};

	//Employee Department Number
	void getDept(int& d) {
		d = NULL;
		d = m_iDeptID;
	};
	void setDept(int d) {
		m_iDeptID = d;
	};

    //Employee Salary
	void setSalary(double sal) {
		m_dSalary = sal;
	};
	void getSalary(double* sal) {
		sal = NULL;
		sal = &m_dSalary;
	};

    
    //Print Employee Record to screen
	void PrintRecord() {
		cout << "================================================================" << endl;
		cout << "Employee ID: " << getID() << endl;
		cout << "Employee Name: " << m_sFirstName << " " << m_sLastName << endl;
		cout << "Department Number: " << m_iDeptID << endl;
		cout << "Salary: " << m_dSalary << endl;
		cout << "================================================================" << endl;
	};
};
