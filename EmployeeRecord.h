//
//  EmployeeRecord.h
//  C++Homework
//
//  Created by Ran Crump  on 6/15/18.
//
#pragma once

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
	EmployeeRecord(int ID, char *fName, char *lName, int dept, double sal) {
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
		strcpy_s(m_sFirstName, fName);
		strcpy_s(m_sLastName, lName);
	};
	void getName(char* fName, char* lName) {
		fName = NULL;
		lName = NULL;
		fName = &m_sFirstName[0];
		lName = &m_sLastName[0];
	};

	//Employee Department Number
	void getDept(int& d) {
		setDept(d);
	};
	void setDept(int d) {
		m_iDeptID = d;
	};

    //Employee Salary
	void setSalary(double sal) {
		m_dSalary = sal;
	};
	void getSalary(double* sal) {
		setSalary(*sal);
	};

    
    //Print Employee Record to screen
	void PrintRecord() {
		std::cout << "Employee ID: " << m_iEmployeeID << std::endl;
		std::cout << "Employee Name: " << m_sFirstName << " " << m_sLastName << std::endl;
		std::cout << "Department Number: " << m_iDeptID << std::endl;
		std::cout << "Salary: " << m_dSalary << std::endl;
	};
};
