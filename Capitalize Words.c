/*Question 4: Capitalize Words
Write a program that accepts a string as input, capitalizes the first letter of each word in the
string, and then returns the result string.*/


#include <stdio.h>
#include <ctype.h>

void capitalizeWords(char *str) {
    int i;

    str[0] = toupper(str[0]);

    for (i = 1; str[i] != '\0'; i++) {
    	
        if (str[i] == ' ') {
            str[i + 1] = toupper(str[i + 1]);
        }
    }
}

int main() {
    char input[100];

    printf("Enter a string: ");
    scanf("%[^\n]", input);

    capitalizeWords(input);

    printf("Modified string: %s\n", input);

    return 0;
}