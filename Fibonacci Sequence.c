/*Question 2: Fibonacci Sequence
Write a program to generate the Fibonacci sequence up to 100. */

#include <stdio.h>

int main() {
    int i1 = 0, i2 = 1, nextTerm = 0;

    printf("Fibonacci Sequence up to 100:\n");

    while (nextTerm <= 100) {
        printf("%d, ", nextTerm);
        i1 = i2;
        i2 = nextTerm;
        nextTerm = i1 + i2;
    }

    return 0;
}