#include "edms_phase3.h"
#include<iostream>
using namespace std;
 /*
	num:    number of employees in the record
	
	struct emp: an employee's information
	struct emp {
		string name; // employee's name
		int empid;   // employee's ID
		string dept; // employee's department
		string doj;  // employee's start date
		int salary;  // employee's salary
	};
*/

void deleteEmployee(int &num, struct emp employees[]) {
// Find the location, loc, of given employee ID
		// Your code below

		// If employee is found, i.e. loc >= 0
		// 1. Shift each employee's information from (loc + 1) position onward to left
		// 2. Decrease the number of employees
		// If not found, display no employee record exists for given eid
		// Your code below
	int eid, loc = -1;

	if (num >= 1) {
		cout << "Enter employee ID:";
		cin >> eid;
		// Find the location, loc, of given employee ID
		// Your code below

		// If employee is found, i.e. loc >= 0
		// 1. Shift each employee's information from (loc + 1) position onward to left
		// 2. Decrease the number of employees
		// If not found, display no employee record exists for given eid
		// Your code below
		for (int i = 0; i < num; i++) {
			if (eid == employees[i].id) {
				for (int j = i; j < num - 1; j++) {
					employees[j].name = employees[j + 1].name;
					employees[j].id = employees[j + 1].id;
					employees[j].dept = employees[j + 1].dept;
					employees[j].doj = employees[j + 1].doj;
					employees[j].salary = employees[j + 1].salary;
				}
				num--;
				break;
			}
		}
	}
	else {
		cout << "There is no employee information in the record." << endl;

	}
}