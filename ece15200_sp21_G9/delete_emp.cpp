#include "edms.h"
#include<iostream>
using namespace std;

/*
 num:    number of employees in the record
 name:   array contains employees' names
 empid:  array contains employees' IDs
 dept:   array contains employees' departments
 doj:    array contains employees' start date
 salary: array contains employess' annual salary
*/

void deleteEmployee(int& num, string name[], int empid[],
	string dept[], string doj[], int salary[]) {

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
			if (eid == empid[i]) {
				for (int j = i; j < num - 1; j++) {
					name[j] = name[j + 1];
					empid[j] = empid[j + 1];
					dept[j] = dept[j + 1];
					doj[j] = doj[j + 1];
					salary[j] = salary[j + 1];
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