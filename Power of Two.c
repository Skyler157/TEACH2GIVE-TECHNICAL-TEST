/*Question 3: Power of Two
Write a program that takes an integer as input and returns true if the input is a power of two.*/


#include <stdio.h>
#include <stdbool.h>

bool isPowerOfTwo(int n) {
    if (n <= 0) {
        return false;
    }
    
    return (n & (n - 1)) == 0;
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isPowerOfTwo(num)) {
        printf("%d is a power of two.\n", num);
    } else {
        printf("%d is not a power of two.\n", num);
    }

    return 0;
}