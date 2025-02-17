
#include<stdio.h>
#include<string.h>
int main()
{
    int id;
    char name[255];
    float salary;
    int attendance;
    
    printf("Enter id:");
    scanf("%d", &id);

    printf("Enter name:");
    scanf("%s", name);

    printf("Enter salary:");
    scanf("%f", &salary);

    printf("Enter number of days worked:");
    scanf("%d", &attendance);

    //process payroll
    float bonus = 0.0f;
    float gross_salary = 0.0f;
    char category[50] = "Good";
    
    //calculate bonus
    if(attendance > 25)
    {
        bonus = (bonus / 100.0f) * 5.0f;
    }
    else if (attendance < 10)
    {
        bonus = (-1.0f * ((bonus / 100.0f) * 50.0f));       /* code */
    }

    //final salary
    gross_salary = (salary+bonus);

    //categorize employee
    if(attendance > 250)
    {
        strcpy(category,"Excellent");
    }
    else if(attendance < 15)
    {
        strcpy(category,"Need Improvement");
    }

    //display payroll details
    printf("ID:%d\n", id);
    printf("Name:%s\n", name);
    printf("Basic Salary: %.2f\n", salary);
    if(bonus > 0)
    {
        printf("Bonus: %.2f\n", bonus);
    }
    printf("\tFinal Salary: %.2f\n", gross_salary);
    printf("\tEmployee Performance Category: %s\n", category);
    
    return 0;
}
