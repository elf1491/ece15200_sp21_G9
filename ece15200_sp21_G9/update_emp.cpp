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

void updateEmployee(int num, string name[], int empid[],
	string dept[], string doj[], int salary[]) {

	int eid;

	if (num >= 1) {
		cout << "\nEnter employee ID: ";
		cin >> eid;

		// Scan empid array to find a match for given eid
		// If a match found, then ask user to update for department and salary
		// The user may update department, salary, or both.
		// If not matched, display employee with given eid does not exist.
		// Your code

		for (int i = 0; i < num; i++) {
			if (eid == empid[i]) {
				cout << "Please enter new information for " << name[i] << ": ";

				cout << endl << "Enter employee's department: ";
				cin.ignore();
				getline(cin, dept[i]);
				while (true) {
					if (dept[i] == "Marketing" || dept[i] == "M" || dept[i] == "Technical" || dept[i] == "T" || dept[i] == "Human Resources" || dept[i] == "HR" || dept[i] == "Finance" || dept[i] == "F") {
						true;
						break;
					}
					else {
						cout << "Please enter a valid department: ";
						getline(cin, dept[i]);
					}
				}

				cout << "Enter employee's Salary: ";
				cin >> salary[i];
				while (true) {
					if (salary[i] < 30000 && salary[i]>200000) {
						cout << "Please enter a valid salary between 30000 and 200000: ";
						cin >> salary[i];
					}
					else {
						true;
						break;
					}
				}
			}
		}
	}
	else {
		cout << "There is no employee information in the record." << endl;
	}
}