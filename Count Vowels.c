/*Question 6: Count Vowels
Write a program that counts the number of vowels in a sentence.*/


#include <stdio.h>
#include <ctype.h>

int countVowels(const char *sentence) {
    int count = 0;

    while (*sentence) {
        char currentChar = tolower(*sentence);

        if (currentChar == 'a' || currentChar == 'e' || currentChar == 'i' ||
            currentChar == 'o' || currentChar == 'u') {
            count++;
        }

        sentence++;
    }

    return count;
}

int main() {
    char sentence[1000];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    int vowelCount = countVowels(sentence);

    printf("Number of vowels in the sentence: %d\n", vowelCount);

    return 0;
}