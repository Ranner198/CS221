#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <string.h>

#include "EmployeeRecord.h"

using namespace std;

int main() {
	
	EmployeeRecord *ptr1 = new EmployeeRecord;

	ptr1->setID(123);
	ptr1->setName("Jane", "Doe");
	ptr1->setDept(559);
	ptr1->setSalary(15.59);

	ptr1->PrintRecord();

	system("pause");
	return 0;
}
