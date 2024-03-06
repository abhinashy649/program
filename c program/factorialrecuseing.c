#include<stdio.h>
unsigned long long factorial(int n) {
    if (n == 0 || n == 1)
    return 1;
    else
    return n * factorial(n - 1);
}
int main() {
    int num;
    unsigned long long fact;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);
    if (num < 0)
    printf("Factorial is not defined for negative numbers.\n");
    else {
        fact = factorial(num);
        printf("Factorial of %d = %llu\n", num, fact);
    }
    return 0;
}