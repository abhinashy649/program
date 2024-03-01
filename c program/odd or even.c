#include <stdio.h>

void checkOddEven(int num); // Function prototype

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    checkOddEven(num);

    return 0;
}

void checkOddEven(int num) {
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }
}
