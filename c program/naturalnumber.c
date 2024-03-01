#include <stdio.h>

int sumOfNaturals(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + sumOfNaturals(n - 1);
    }
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a positive integer.\n");
    } else {
        int sum = sumOfNaturals(n);
        printf("Sum of the first %d natural numbers: %d\n", n, sum);
    }

    return 0;
}
