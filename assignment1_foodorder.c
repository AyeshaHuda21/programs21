#include <stdio.h>

int main() {
    int choice;

    // Prompt the user to enter an order status
    printf("Enter order status (1-4): ");
    scanf("%d", &choice);

    // Display the corresponding order status message based on the input
    switch (choice) {
        case 1:
            printf("Your order has been placed.\n");
            break;
        case 2:
            printf("Your food is being prepared.\n");
            break;
        case 3:
            printf("Your food is out for delivery.\n");
            break;
        case 4:
            printf("Your order has been delivered. Enjoy your meal!\n");
            break;
        default:
            printf("Invalid choice. Please enter a number between 1 and 4.\n");
    }

    return 0;
}


