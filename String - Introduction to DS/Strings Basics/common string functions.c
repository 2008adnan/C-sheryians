#include <stdio.h> 
#include <string.h>

int main(){
    char name[50] = "Adnan";
    int size = strlen(name);
    printf("%d\n", size);
    char name2[50] = "Ahmad";
    strcpy(name, name2);
    printf("%s %s\n", name, name2);
    int result = strcmp(name, name2); 
    printf("%d\n", result);
    strcat(name, name2);
    printf("%s\n", name);
    return 0;
}