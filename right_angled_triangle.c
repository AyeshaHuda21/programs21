#include <stdio.h>

int main() {
    int n;

    // input for the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n)

    for(int i = 1; i <= N; i++) {
        // Loop to print '*' in each row
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        // to enter to new line after each loop
        printf("\n");
    }

    return 0;
}
