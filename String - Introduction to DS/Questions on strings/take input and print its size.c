#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    int size;
    printf("Enter a String: ");
    scanf("%[^\n]s", s);
    //size = strlen(s);   we can also use strlen() function to get the size of the string but here we are calculating it manually
    size = 0;
    int i=0;
    while(s[i] != '\0'){
        size++;
        i++;
    }
    printf("String is \"%s\" and its length is %d\n", s, size);
    return 0;
}