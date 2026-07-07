//check if number is prime or not
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int fc=0;
    for(int i=1; i<=n; i++){
        if(n % i == 0){
            fc ++;
        }
    }
    printf("%s" ,(fc>2)?"NOT":"YES");
    
    return 0;
}
    
