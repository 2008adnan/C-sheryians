#include<stdio.h>
#include <string.h>
int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    int size = strlen(str);

    for(int i =0;i<size;i++){
        if(str[i] == '\0' || str[i] == '\n')
            continue;
        int c=1;
        for(int j=i+1;j<size;j++){
            if(str[i]==str[j]){
                c++;
                str[j]='\0';
            }
        }
        printf("Character '%c' appears %d times\n", str[i], c);
    }
    return 0;
}