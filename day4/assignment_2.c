#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee {
    int emp_id;
    char name[50];
    float basic_salary;
    float allowances;
    float gross_salary;
};


float compute_gross_salary(float basic, float allowances) {
    return basic + allowances;
}


void save_payroll_data(struct Employee employees[], int n) {
    FILE *file = fopen("payroll.txt", "w");
    if (file == NULL) {
        printf("Error opening file for saving payroll data.\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        fprintf(file, "%d, %s, ₹%.2f, ₹%.2f, ₹%.2f\n", employees[i].emp_id, employees[i].name, employees[i].basic_salary, employees[i].allowances, employees[i].gross_salary);
    }

    fclose(file);
}

// Function to retrieve and display salary based on Employee ID
void retrieve_salary(int emp_id, struct Employee employees[], int n) {
    for (int i = 0; i < n; i++) {
        if (employees[i].emp_id == emp_id) {
            printf("Employee: %s\n", employees[i].name);
            printf("Gross Salary: ₹%.2f\n", employees[i].gross_salary);
            return;
        }
    }
    printf("Employee ID not found.\n");
}

int main() {
    int n;

    // Get the number of employees
    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];

    // Input employee details
    for (int i = 0; i < n; i++) {
        printf("Enter Employee ID, Name, Basic Salary, Allowances (comma-separated): ");
        getchar();  // To clear the buffer before reading the name
        scanf("%d", &employees[i].emp_id);
        scanf("%s", employees[i].name);
        scanf("%f %f", &employees[i].basic_salary, &employees[i].allowances);
        
        employees[i].gross_salary = compute_gross_salary(employees[i].basic_salary, employees[i].allowances);
    }

    
    save_payroll_data(employees, n);
    printf("Record saved in \"payroll.txt\"\n");

    int search_emp_id;
    printf("Enter Employee ID to search: ");
    scanf("%d", &search_emp_id);
    
    retrieve_salary(search_emp_id, employees, n);

    return 0;
}
