#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter a String: ");
    fgets(s, sizeof(s), stdin);

    // Remove the trailing newline
    s[strcspn(s, "\n")] = '\0';

    int len = strlen(s);
    int flag = 1;
    int i = 0;
    int j = len - 1;

    while (i < j) {
        if (s[i] != s[j]) {
            flag = 0;
            break;
        }
        i++;
        j--;
    }

    printf(flag == 1 ? "String is Palindrome\n" : "String is not Palindrome\n");

    return 0;
}