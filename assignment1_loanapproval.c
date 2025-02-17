#include <stdio.h>
int main()
 {
    float salary;
    int creditscore, experience;

    // Input details from the customer
    printf("Enter Salary: ");
    scanf("%f", &salary);

    printf("Enter Credit Score: ");
    scanf("%d", &creditscore);

    printf("Enter Experience in years: ");
    scanf("%d", &experience);

    // Eligibility conditions
    if (salary >= 30000 && creditscore >= 750 && experience >= 2) {
        printf("Loan Approved\n");
    } else {
        printf("Loan not approved\n");
    }
    return 0;
}
