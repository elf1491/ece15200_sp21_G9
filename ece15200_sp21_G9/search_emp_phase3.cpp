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

void searchEmployee(int num, struct emp employees[]) {
// Ask user choice and store it in sch
	// Your code

	// If choice is 0
	// Ask user to input employee ID in a variable eid
	// Scan empid to find a match for eid
	// If a match found, display Name, Department, Start date, and Salary
	// If not matched, display employee with given eid does not exist.
	// Your code
	
	// If choice is other than 0
	// Ask user to input employee name in a variable emp_name
	// Scan name to find a match for emp_name
	// If a match found, display Employee ID, Department, Start date, and Salary
	// If not matched, display employee with given emp_name does not exist.
	// Your code
	int sch, id;

	if (num > 0) {
		do {
			int c = 0;
			cout << endl << "Enter 0 to search by ID" << endl << "Enter 1 to search by name: ";
			cin >> sch;
			switch (sch) {
			case 0:
			{
				cout << endl << "Enter employee ID: ";
				cin >> id;
				for (int i = 0; i < num; i++) {
					if (id != employees[i].id) {
						c++;
					}
					else {
						cout << "Name "
							<< employees[i].name << "\n";
						cout << "Department "
							<< employees[i].dept << "\n";
						cout << "Start date "
							<< employees[i].doj << "\n";
						cout << "Salary "
							<< employees[i].salary << "\n";

					}
				}
				if (c == num) {
					cout << "There is no employee with the ID " << id << endl << endl;
				}
				break;
			}
			case 1: {
				string n;
				int c = 0;
				cout << endl << "Enter employee name: ";
				cin >> n;
				cout << endl;
				for (int i = 0; i < num; i++) {
					if (n != employees[i].name) {
						c++;
					}
					else {
						cout << "Employee ID "
							<< employees[i].id << "\n";
						cout << "Department "
							<< employees[i].dept << "\n";
						cout << "Start date "
							<< employees[i].doj << "\n";
						cout << "Salary "
							<< employees[i].salary << "\n";
						cout << endl << endl;
					}
				}
				if (c == num) {
					cout << "Employee " << n << " does not exist in our database." << endl << endl;
				}
			}
			}
		} while (sch == 0 || sch == 1);
	}
	else {
		cout << "There are no employees to search for.";
		cout << endl << endl;
	}
}