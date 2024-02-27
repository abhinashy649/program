#include <stdio.h>

int main() {
    char alphabet;

    printf("Alphabets from a to z are:\n");

    for (alphabet = 'a'; alphabet <= 'z'; ++alphabet) {
        printf("%c ", alphabet);
    }

    printf("\n");

    return 0;
}
