// ece15200_sp21_G9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
/* Created a structure here. The name of the structure is
 * EmployeeData.
 */
struct EmployeeData {
    char* em_name;
    int em_id;
    int em_age;
};
int main()
{
    /* student is the variable of structure StudentData*/
    struct EmployeeData employee;

    /*Assigning the values of each struct member here*/
    employee.em_name == "Steve"; //Need to figure out how to add in names. char does not seem to work.
    employee.em_id = 1234;
    employee.em_age = 30;

    /* Displaying the values of struct members */
    printf("Employee Name is: %s", employee.em_name);
    printf("\nEmployee Id is: %d", employee.em_id);
    printf("\nEmployee Age is: %d", employee.em_age);
    return 0;
}
//Add member in structure :

typedef struct {
    int a;
    int b;
    int c;
} Logstruct;

//List of member in structure :

typedef struct List* ListP;

struct List {
    ListP head;
    int size;
};

struct node {
    char name[20];
    };
//Update member in structure :

void update(void* str_ptr, size_t member, void* value, size_t v_size)
{
    memcpy(
        (void*)(((char*)str_ptr) + member),
        value,
        v_size);
}
//Delete  member in structure :

typedef struct
{
    char employeeNum[20];
    char lastName[15];
    char firstName[10];
    char phoneNum[15];
    int Deleted;
} employeeData;
//Search member in structure :

#include<iostream>

typedef struct tag1 {
    int day, year, month;
}Date;

typedef struct tag2 {
    int number;
    char name[50];
    char course[30];
    Date birthday;
}Record;



main() {
    int choice, n, i = 0;
    Record employee[200];

    //printing of menu:
    printf("Choose from the menu:\n");
    printf("     [1] Add Employee\n");
    printf("     [2] Search Employee\n");
    printf("     [3] View All\n");
    printf("     [4] Exit\n");
    scanf("%d", &choice);


    if ((choice >= 1) && (choice <= 4)) {
        if (choice == 1) {

            printf("Enter employee number:\n");
            scanf("%d", &employee[n].number);

            printf("Enter the name of the employee:\n");
            scanf("%[^\n]", employee[n].name);

            printf("Enter month of birth:\n");
            scanf("%d", &employee[n].birthday.month);

            printf("Enter day of birth:\n");
            scanf("%d", &employee[n].birthday.day);

            printf("Enter year of birth:\n");
            scanf("%d", &employee[n].birthday.year);


            n++;
        }
        if (choice == 2) {
            while (i < n) {
                printf("%d\n", employee[n].number);
                printf("%s", employee[n].name);
                printf("%d/%d/%d", employee[n].birthday.month, employee[n].birthday.day, employee[n].birthday.year);
                i++;
            }
        }
    }
}