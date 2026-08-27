#include<stdio.h>
#include<stdlib.h>
int main(){
    int x;
    printf("Enter the size you require: ");
    scanf("%d", &x);
    int *p = (int*)malloc(x*4);
    for(int i=0; i<x;i++){
        printf("Enter p[%d] : ", i);
        scanf("%d", &p[i]);
    }
    for(int i =0 ; i<x;i++){
        printf("%d\n", p[i]);
    }
    if(p==NULL){
        printf("Memory Allocation failed!");
        return 1;
    }
    return 0;
}