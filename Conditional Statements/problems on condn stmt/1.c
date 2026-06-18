#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    // Taking input from the user
    scanf(" %c", &ch);
    
    // Convert to lowercase for easier comparison
    ch = tolower(ch);

    // Check if the input is a valid alphabet
    if (ch >= 'a' && ch <= 'z') {
        // Check for vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("Vowel");
        } else {
            printf("Consonant");
        }
    } else {
        printf("Invalid input\n");
    }

    return 0;
}