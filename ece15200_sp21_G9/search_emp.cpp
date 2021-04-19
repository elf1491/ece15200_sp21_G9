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

void searchEmployee(int num, string name[], int empid[],
	string dept[], string doj[], int salary[]) {

	int sch, found = 0;

	if (num == 0) {
		cout << "There is no employee information in the record." << endl;
		return;
	}

	cout << "Enter 0 to search by employee ID." << endl
		 << "Enter 1 to search by employee name." << endl;
	
	// Ask user choice and store it in sch
	// Your code
	cin >> sch;

	// If choice is 0
	// Ask user to input employee ID in a variable eid
	// Scan empid to find a match for eid
	// If a match found, display Name, Department, Start date, and Salary
	// If not matched, display employee with given eid does not exist.
	// Your code
	int eid; string emp_name;
	
	for (int i = 0; i < num; i++) {
		if (sch == 0) {
			cout << "Enter employee ID:" << endl;
			cin >> eid;

			if (empid[i] == eid) {
				cout << "Name "
					<< name[i] << "\n";
				cout << "Department "
					<< dept[i] << "\n";
				cout << "Start date "
					<< doj[i] << "\n";
				cout << "Salary "
					<< salary[i] << "\n";
			}

			else {
				cout << "Employee with given ID does not exist.\n";
			}
		}
		else {
			cout << "Type employee's name:" << endl;
			cin >> emp_name;

			if (name[i] == emp_name) {
				cout << "Employee ID "
					<< empid[i] << "\n";
				cout << "Department "
					<< dept[i] << "\n";
				cout << "Start date "
					<< doj[i] << "\n";
				cout << "Salary "
					<< salary[i] << "\n";
		}
			else {
				cout << "Employee with given name does not exist.\n";
			}
		}
	}
	// If choice is other than 0
	// Ask user to input employee name in a variable emp_name
	// Scan name to find a match for emp_name
	// If a match found, display Employee ID, Department, Start date, and Salary
	// If not matched, display employee with given emp_name does not exist.
	// Your code
}