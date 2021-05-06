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

void updateEmployee(int num, struct emp employees[]) {
// Scan empid array to find a match for given eid
		// If a match found, then ask user to update for department and salary
		// The user may update department, salary, or both.
		// If not matched, display employee with given eid does not exist.
		// Your code
	int eid;

	if (num >= 1) {
		cout << "\nEnter employee ID: ";
		cin >> eid;
		for (int i = 0; i < num; i++) {
			if (eid == employees[i].id) {
				cout << "Please enter new information for " << employees[i].name << ": ";

				cout << endl << "Enter employee's department: ";
				cin.ignore();
				getline(cin, employees[i].dept);
				while (true) {
					if (employees[i].dept == "M" || employees[i].dept == "m" || employees[i].dept == "t" || employees[i].dept == "T" || employees[i].dept == "HR" || employees[i].dept == "hr" || employees[i].dept == "H" || employees[i].dept == "h" || employees[i].dept == "f" || employees[i].dept == "F") {
						true;
						break;
					}
					else {
						cout << "Please enter a valid department: ";
						getline(cin, employees[i].dept);
					}
				}

				cout << "Enter employee's Salary: ";
				cin >> employees[i].salary;
				while (true) {
					if (employees[i].salary < 30000 && employees[i].salary>200000) {
						cout << "Please enter a valid salary between 30000 and 200000: ";
						cin >> employees[i].salary;
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