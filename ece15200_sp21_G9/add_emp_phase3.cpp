#include "edms_phase3.h"
#include<sstream>
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

void addEmployee(int &num, struct emp employees[]) {
	
	if (num < 100) {
		int id, loc = num;
		double c = 0;
		cout << "Enter employee ID: ";
		cin >> id;
		while (true) {
			if (id >= 10000 && id <= 999999) {
				for (int i = 0; i < num; i++) {
					if (id != employees[i].id) {
						c++;
					}
				}
				if (c == num) {
					true;
					break;
				}
				else {
					cout << "Please enter a unique ID: ";
					cin >> id;
				}
			}
			else {
				cout << "Please enter a valid id in the range of 10000 and 99999: ";
				cin >> id;
			}
		}
		if (num >= 1) {
			for (int i = 0; i < num; i++) {
				if (id < employees[i].id) {
					loc = i;
					break;
				}
			}
			for (int i = num - 1; i >= loc; i--) {
				employees[i + 1].name = employees[i].name;
				employees[i + 1].id = employees[i].id;
				employees[i + 1].dept = employees[i].dept;
				employees[i + 1].doj = employees[i].doj;
				employees[i + 1].salary = employees[i].salary;
			}
		}
		employees[loc].id = id;

		cout << "Enter employee name: ";
		cin.ignore();
		getline(cin, employees[loc].name);

		cout << "Enter employee department: ";
		getline(cin, employees[loc].dept);
		while (true) {
			if (employees[loc].dept == "M" || employees[loc].dept == "m" || employees[loc].dept == "t" || employees[loc].dept == "T" || employees[loc].dept == "HR" || employees[loc].dept == "hr" || employees[loc].dept == "h" || employees[loc].dept == "H" || employees[loc].dept == "f" || employees[loc].dept == "F") {
				true;
				break;
			}
			else {
				cout << "Please enter a valid department: ";
				getline(cin, employees[loc].dept);
			}
		}
		cout << "Enter employees start date: ";
		getline(cin, employees[loc].doj);
		while (true) {
			double n;
			n = employees[loc].doj.length();
			if (n != 10) {
				cout << "Please enter a valid date: ";
				getline(cin, employees[loc].doj);
			}
			else {
				char char_array[11];
				strcpy_s(char_array, employees[loc].doj.c_str());
				string month;
				month = char_array[0];
				month += char_array[1];
				stringstream conv(month);
				int x = 0;
				conv >> x;
				if (x > 12 || x < 1) {
					cout << "Please enter a valid date: ";
					getline(cin, employees[loc].doj);
				}
				else {
					true;
					break;
				}
			}
		}
		cout << "Enter salary: ";
		cin >> employees[loc].salary;
		while (true) {
			if (employees[loc].salary < 30000 || employees[loc].salary>200000) {
				cout << "Please enter a valid salary between 30000 and 200000: ";
				cin >> employees[loc].salary;
			}
			else {
				true;
				break;
			}
		}
		num++;
	}
	else {
		cout << "There can be no more than 100 employees in database\n\n";
	}
	
}