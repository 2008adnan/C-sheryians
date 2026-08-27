#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("Enter size you need :");
    scanf("%d", &n);
    int *p = (int*)calloc(n, sizeof(int));
    if(p==NULL){
        printf("Memory Allocation Failed");
    }
    p[0] = 27;
    p[3] = 57;
    p[5] = 45;
    for(int i =0;i<n;i++){
        printf("%d ", p[i]);
    }
    return 0;
}