#include "edms.h"
#include<iostream>
#include<sstream>
using namespace std;

/*
 num:    number of employees in the record
 name:   array contains employees' names
 empid:  array contains employees' IDs
 dept:   array contains employees' departments
 doj:    array contains employees' start date
 salary: array contains employess' annual salary
*/

void addEmployee(int& num, string name[], int empid[],
	string dept[], string doj[], int salary[]) {
	if (num < 100) {
		int id, loc = num;
		double c = 0;
		cout << "Enter employee ID: ";
		cin >> id;
		while (true) {
			if (id >= 10000 && id <= 99999) {
				for (int i = 0; i < num; i++) {
					if (id != empid[i]) {
						c++;
					}
				}
				if (c == num) {
					true;
					break;
				}
				else {
					cout << "Please enter a unique employee ID: ";
					cin >> id;
				}
			}
			else {
				cout << "Please enter a valid ID in the range of 10000 and 99999: ";
				cin >> id;
			}
		}
		
		if (num >= 1) {
			for (int i = 0; i < num; i++) {
				if (id < empid[i]) {
					loc = i;
					break;
				}
			}

			for (int i = num - 1; i >= loc; i--) {
				name[i + 1] = name[i];
				empid[i + 1] = empid[i];
				dept[i + 1] = dept[i];
				doj[i + 1] = doj[i];
				salary[i + 1] = salary[i];
			}
		}

		empid[loc] = id;

		cout << "Enter employee's name: ";
		cin.ignore();
		getline(cin, name[loc]);


		cout << "Enter employee's department: ";
		getline(cin, dept[loc]);
		while (true) {
			if (dept[loc] == "Marketing" || dept[loc] == "M" || dept[loc] == "Technical" || dept[loc] == "T" || dept[loc] == "Human Resources" || dept[loc] == "HR" || dept[loc] == "Finance" || dept[loc] == "F") {
				true;
				break;
			}
			else {
				cout << "Please enter a valid department (Marketing, Technical, Human Resources or Finance): ";
				getline(cin, dept[loc]);
			}
		}
		
		cout << "Enter employee's start date: ";
		getline(cin, doj[loc]);

		while (true) {
			double n;
			n = doj[loc].length();
			if (n != 10) {
				cout << "Please enter a valid date: ";
				getline(cin, doj[loc]);
			}
			else {
				char char_array[11];
				strcpy_s(char_array, doj[loc].c_str());
				string month;
				month = char_array[0];
				month += char_array[1];
				stringstream conv(month);
				int x = 0;
				conv >> x;
				if (x > 12 || x < 1) {
					cout << "Please enter a valid date: ";
					getline(cin, doj[loc]);
				}
				else {
					true;
					break;
				}
			}
		}
		
		cout << "Enter employee's annual salary: ";
		cin >> salary[loc];
		while (true) {
			if (salary[loc] < 30000 || salary[loc]>200000) {
				cout << "Please enter a valid salary between 30000 and 200000: ";
				cin >> salary[loc];
			}
			else {
				true;
				break;
			}
		}
		
		num++;
	}
	else {
		cout << "There can be no more than 100 employees in the database. \n\nIf you wish to add more, please delete some entries.";
	}

}