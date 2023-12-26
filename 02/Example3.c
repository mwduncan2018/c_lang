#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

struct Employee {
    uint8_t employeeNro; //Unsigned 8 bit integer
    char name[200];
    float salary;
    int age :7; // 
    struct tm dob;
};

const char companeyName[100] = "Duncan App";

void readEmployees(struct Employee *employees, int numEmployees);
void printEmployees(struct Employee employees[100], int numEmployees);

int main() {
    struct Employee employees[100];
    int numEmployees;
    printf("Provide number of employees you want to import: ");
    scanf("%d", &numEmployees);
    readEmployees(employees, numEmployees);
    printEmployees(employees, numEmployees);
    exit(0);
}

void readEmployees(struct Employee * employees, int numEmployees) {
    for (int i = 0; i < numEmployees; i++) {
        printf("Processing employee %d \n", i+1);
        printf("Please provide the employee name, number, salary, and DOB (dd/mm/yyyy): ");

        char empName[200];
        int dobDay, dobMonth, dobYear;
        scanf("%s %d %f %d/%d/%d", 
            empName, 
            &employees[i].employeeNro, 
            &employees[i].salary, 
            &dobDay, &dobMonth, &dobYear);
        strcpy(employees[i].name, empName);
        struct tm dobObj;
        dobObj.tm_yday = dobDay;
        dobObj.tm_mon = dobMonth;
        dobObj.tm_year = dobYear - 1900;

        time_t currTimeSec;
        time(&currTimeSec);
        struct tm * currTime = localtime(&currTimeSec);

        employees[i].age = currTime->tm_year - dobObj.tm_year;

        if (currTime->tm_mon < dobObj.tm_mon ||
            ((currTime->tm_mon == dobObj.tm_mon && currTime->tm_mday < dobObj.tm_mday))){
                employees[i].age--;
        }

        employees[i].dob = dobObj;
    }
}

void printEmployees(struct Employee employees[100], int numEmployees) {
    printf("\n");
    setlocale(LC_ALL, "");
    struct lconv * currentLoacle = localeconv();
    printf("Printing employees list \n");
    for (int i = 0; i < numEmployees; i++) {
        struct Employee emp = employees[i];
        printf("Name:%s EmployeeNro:%d Salary:%.2f%s DOB:%02d/%02d/%d Age:%d\n",
            emp.name,
            emp.employeeNro,
            emp.salary,
            currentLoacle->int_curr_symbol,
            emp.dob.tm_yday,
            emp.dob.tm_mon,
            emp.dob.tm_year+1900,
            emp.age);
    }
}