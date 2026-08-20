#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int s = strlen(str);
    for(int i=0; i<s; i++){
        if(str[i] != ' '){
            if(str[i]>='a' && str[i]<='z'){
                str[i] = str[i] - 32; // Convert lowercase to uppercase
            }
            else if(str[i]>='A' && str[i]<='Z'){
                str[i] = str[i] + 32; // Convert uppercase to lowercase
            }
        }
    }

    printf("Toggled string: %s", str);
    return 0;
}