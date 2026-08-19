#include<stdio.h>
#include<string.h>
int main(){
    char s1[100], s2[100];
    printf("Enter first String: ");
    fgets(s1, sizeof(s1), stdin);
    printf("Enter second String: "); 
    fgets(s2,sizeof(s2),stdin);
    if(strcmp(s1,s2) == 0){
        printf("Strings are equal\n");
    }
    else{
        printf("Strings are not equal\n");
    }
    return 0;

}