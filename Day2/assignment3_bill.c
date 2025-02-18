#include <stdio.h>

void calculatefinalamount(float total_bill) {
    float final_amount;

    if (total_bill >= 500 && total_bill <= 1000) {
        // 10% discount
        final_amount = total_bill * 0.90;
        printf("Final Payable Amount: ₹%.2f (after 10%% discount)\n", final_amount);
    } else if (total_bill > 1000) {
        // 20% discount
        final_amount = total_bill * 0.80;
        printf("Final Payable Amount: ₹%.2f (after 20%% discount)\n", final_amount);
    } else {
        // No discount
        printf("Final Payable Amount: ₹%.2f (no discount)\n", total_bill);
    }
}

int main() {
    float total_bill;
    printf("Enter total bill amount: ₹");
    scanf("%f", &total_bill);
    calculatefinalamount(total_bill);
    return 0;
}
