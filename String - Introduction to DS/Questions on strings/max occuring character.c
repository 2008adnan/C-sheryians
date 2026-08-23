#include<stdio.h>
#include <string.h>
int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    int size = strlen(str);

    int max=0;
    char ans;

    for(int i =0;i<size;i++){
        if(str[i] == '\0' || str[i] == '\n')
            continue;
        int c=1;
        for(int j=i+1;j<size;j++){
            if(str[i]==str[j]){
                c++;
            }
        }
        if(c>max){
            max = c;
            ans = str[i];
        }else if(c==max && str[i]<ans){
            ans = str[i];
        }
    }
    printf("Max occurring character is '%c' and it appears %d times\n", ans, max);
    return 0;
}