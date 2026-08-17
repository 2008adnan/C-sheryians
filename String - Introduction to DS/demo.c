#include<stdio.h>
int main(){
    char str[100] = "Hello, World!";
    char str2[] = "Hello, World!";
    char str3[] = {'H', 'e', 'l', 'l', 'o', ',', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    char str4[14] = {'H', 'e', 'l', 'l', 'o', ',', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};

    // updating the string characters
    str[7] = 'C';
    str2[7] = 'C';


    printf("%s\n", str);
    printf("%s\n", str2);
    printf("%s\n", str3);
    printf("%s\n", str4);

    //access ing individual characters
    printf("%c\n", str[0]);
    printf("%c\n", str2[1]);
    return 0;
}