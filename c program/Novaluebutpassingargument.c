#include <stdio.h>

// function prototype
void sum(int, int);

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum(a, b);
    return 0;
}

void sum(int a, int b) {
    int c; // declare variable inside function body
    c = a + b;
    printf("\nSum is %d", c);
}
