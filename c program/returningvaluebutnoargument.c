#include<stdio.h>

// function prototype
int sum(void);

void main() {
    clrscr(); // Assuming clrscr() clears the screen, adjust as necessary
    int f;
    f = sum();
    printf("\nSum is %d", f);
}

int sum(void) {
    int a, b, c;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &a, &b);
    c = a + b;
    return c;
}
