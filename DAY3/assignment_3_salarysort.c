#include <stdio.h>

int main() {
    int n;
    
    printf("Enter number of employees: ");
    scanf("%d", &n);

    int salaries[n];

    // Input salaries
    printf("Enter salaries of %d employees: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &salaries[i]);
    }

    // Sorting salaries in ascending order 
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-1-i; j++) {
            if (salaries[j] > salaries[j+1]) {
                int temp = salaries[j];
                salaries[j] = salaries[j+1];
                salaries[j+1] = temp;
            }
        }
    }

    // Print sorted salaries
    printf("Sorted Salaries: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", salaries[i]);
    }
    printf("\n");

    // second highest salary
    if (n > 1) {
        printf("Second Highest Salary: %d\n", salaries[n - 2]);
    } else {
        printf("Second Highest Salary: Not available (only one employee)\n");
    }
    //total payroll

    int total_payroll = 0;
    for (int i = 0; i < n; i++) {
        total_payroll += salaries[i];
    }

    printf("Total Payroll: %d\n", total_payroll);

    return 0;
}
