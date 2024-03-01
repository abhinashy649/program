#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    printf("\nThe square root of %d is %.2f\n", n, sqrt(n)); // Corrected format specifier

    return 0; // Added return statement
}
