#include <stdio.h>
#include <string.h>

int main() {
    int choice;
    char card_number[17];
    char upi_id[50];
    int bank_choice;
    int valid_card;

    printf("Select Payment Method (1-3):\n");
    printf("1: Credit/Debit Card\n");
    printf("2: UPI\n");
    printf("3: Net Banking\n");
    
    scanf("%d", &choice);

    if ( choice > 3) {
        printf("Invalid payment method. Please try again.\n");
        return 0;
    }

    if (choice == 1) {
        // Ask for a 16-digit card number
        printf("Enter your 16-digit card number: ");
        scanf("%s", card_number);
        
        // Check if the card number is exactly 16 digits
        if (strlen(card_number) == 16) {
            
             valid_card==1;
             {
                printf("Payment Successful!\n");
            }
            }else {
                printf("Transaction Failed. Please try again.\n");
        }
    } 
            if (choice == 2) {
        //Ask for a valid UPI ID
              printf("Enter your UPI ID (e.g., user@upi): ");
              scanf("%s", upi_id);
        
        // Check if '@' is present in the UPI ID
        int valid_upi = 0;
        for (int i = 0; upi_id[i] != '\0'; i++) {
            if (upi_id[i] == '@') {
                valid_upi = 1;
                break;
            }
        }
        
        if (valid_upi) {
            printf("Payment Successful!\n");
        } else {
            printf("Transaction Failed. Please try again.\n");
        }
    } 
    if (choice == 3) {
        // Ask for bank selection
        printf("Select your bank:\n");
        printf("1: SBI\n");
        printf("2: HDFC\n");
        scanf("%d", &bank_choice);
        
        if (bank_choice == 1 || bank_choice == 2) {
            printf("Payment Successful!\n");
        } else {
            printf("Transaction Failed. Please try again.\n");
        }
    }

    return 0;
}
