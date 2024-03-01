#include <stdio.h>

int findSmallest(int num1, int num2, int num3); // Function prototype

int main() {
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int smallest = findSmallest(num1, num2, num3);

    printf("The smallest number is: %d\n", smallest);

    return 0;
}

int findSmallest(int num1, int num2, int num3) {
    int smallest = num1;

    if (num2 < smallest) {
        smallest = num2;
    }
    if (num3 < smallest) {
        smallest = num3;
    }

    return smallest;
}
