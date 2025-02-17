#include<stdio.h>
#include<string.h>
int main() {
    int id;
    char name[255];
    float units;
    float bill_amount;

    
    printf("Enter  customer id:");
    scanf("%d", &id);

    printf("Enter customer name:");
    scanf("%s", name);

    printf("Enter Total units consumed");
    scanf("%f", &units);

    float surcharge = 0.0f;
    float total_amount = 0.0f;
    
    //calculate bonus 
    if(total_amount > 1000 ) {
        surcharge = (units / 100.0f) * 5.0f;
    } else if(total_amount < 1000) {
        total_amount=bill_amount;
    }
    //final salary 
    total_amount = (bill_amount + surcharge);
    //categorize employee
    if(units<=100) {
        bill_amount=units*5;
    } else if(300>=units>101) {
       bill_amount=units * 7;
       
    }
    else{
        bill_amount=units*10;
    }

    printf("Customer Details:\n");
    printf("\tId: %d\n", id);
    printf("\tName: %s\n", name);
    printf("\tbase bill: %.2f\n",bill_amount);
    if(surcharge > 0) {
        printf("\tsurcharge: %.2f\n", surcharge);
    }
    printf("\t total amount: %.2f\n", total_amount);

    return 0;
} 
