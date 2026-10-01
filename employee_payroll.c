#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float basicSalary;
    float allowance;
    float deduction;
};

int main() {
    struct Employee emp;
    float netSalary;

    printf("===== Employee Payroll System =====\n");

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp.name);

    printf("Enter Basic Salary: ");
    scanf("%f", &emp.basicSalary);

    printf("Enter Allowance: ");
    scanf("%f", &emp.allowance);

    printf("Enter Deduction: ");
    scanf("%f", &emp.deduction);

    netSalary = emp.basicSalary + emp.allowance - emp.deduction;

    printf("\n----- Salary Details -----\n");
    printf("Employee ID: %d\n", emp.id);
    printf("Employee Name: %s\n", emp.name);
    printf("Basic Salary: %.2f\n", emp.basicSalary);
    printf("Allowance: %.2f\n", emp.allowance);
    printf("Deduction: %.2f\n", emp.deduction);
    printf("Net Salary: %.2f\n", netSalary);

    return 0;
}
