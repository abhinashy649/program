#include <stdio.h>

int main() {
    char alphabet;

    printf("Alphabets from A to Z are:\n");

    for (alphabet = 'A'; alphabet <= 'Z'; ++alphabet) {
        printf("%c ", alphabet);
    }

    printf("\n");

    return 0;
}
