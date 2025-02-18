#include<stdio.h>
void readDetails(float* p_salary,int* p_credit_score,int* p_experience)
    
{
    printf("Enter the salary:");
    scanf("%f",p_salary);

    printf("Enter the credit_score:");
    scanf("%d",p_credit_score);

    printf("Enter the work experience:");
    scanf("%d",p_experience);
}

     int isEligible(float salary,int credit_score,int experience){
     return((salary>=30000) && (credit_score>=750) && (experience>=2));
     }
    int main(){
        float salary;
        int credit_score;
        int experience;
        readDetails(&salary,&credit_score,&experience);

if (isEligible(salary,credit_score,experience))
{
    printf("Loan approved");
}
else{
    printf("Loan rejected");
}
return 0;
}
