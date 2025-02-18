#include <stdio.h>
//calculate factorial using recursion
int factorial(int n) {
    // factorial of 0 or 1 is 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
int main() {
    int n, result;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    // Calculate the factorial
    result = factorial(n);
    // Output
    printf("Factorial of %d is %d\n", n, result);
    return 0;
}
