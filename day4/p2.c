#include <stdio.h>

struct Employee_t{
    int id;
    char name[25];
    float salary;
    char department[50];
};

typedef struct Employee_t Employee;

void readEmployees(Employee emp[], int n){
    printf("Enter details (ID, Name, Salary, Department):\n");
    int i;
    for(i=0; i<n; i++){
        scanf("%d%s%f%s",&emp[i].id, emp[i].name,&emp[i].salary,emp[i].department);
    }
}
void saveemployees(Employee emp[],int n){
    FILE* file = fopen("employees.txt","w");
    if(file==NULL){
        printf("cannot create file.\n");
        return;
    }
    for(int i = 0; i < n; i++){
        fprintf(file, "%d %s %.2f %s",emp[i].id, emp[i].name,emp[i].salary,emp[i].department);
    }
    fclose(file);
}
void loadEmployees(Employee emp[], int n){
     FILE* file = fopen("employees.txt","r");
    if(file==NULL){
        printf("cannot create file.\n");
        return;
    }
    for(int i = 0; i < n; i++){
        fprintf(file, "%d %s %.2f %s",emp[i].id, emp[i].name,emp[i].salary,emp[i].department);
    }
    fclose(file);
}
void displayEmployees(Employee emp[], int n){
    int i;
     printf("EMPLOYEE DETAILS:");
    for(i=0;i<n;i++){
     printf("%d - %s - %.2f - %s\n",emp[i].id, emp[i].name,emp[i].salary,emp[i].department);
    }
}

Employee findhighestsalary(Employee emp[],int n){
    Employee highestsalaried = emp[0];
    for(int i=1; i<n ; i++){
        if(emp[i].salary > highestsalaried.salary){
            highestsalaried = emp[i];
        }
        return highestsalaried;
    }
    
}

int main(){
    int employeecount;
    printf("Enter number of employees:");
    scanf("%d",&employeecount);
    Employee employees[1000];
    readEmployees(employees,employeecount);
    displayEmployees(employees,employeecount);
    saveemployees(employees,employeecount);
    loadEmployees(employees,employeecount);
    Employee highestsalariedemployee = findhighestsalary(employees,employeecount);
    printf("employee with highest salary:%s,%.2f (%s)\n",highestsalariedemployee.name, highestsalariedemployee.salary,highestsalariedemployee.department);
    return 0;
}




