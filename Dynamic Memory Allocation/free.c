#include<stdio.h>
#include<stdlib.h>
int main(){
    int x;
    printf("Enter the size you require: ");
    scanf("%d", &x);
    int *p = (int*)calloc(x,sizeof(int));
    for(int i=0; i<x;i++){
        printf("Enter p[%d] : ", i);
        scanf("%d", &p[i]);
    }
    for(int i =0 ; i<x;i++){
        printf("%d ", p[i]);
    }
    if(p==NULL){
        printf("Memory Allocation failed!");
        return 1;
    }

    free(p); // ab iske baad iski koi need nhi oth hum us allocated memory ko free kr denge for memory optimization
    p=NULL; // ab ye lgane ke baad hum variable p ka dubara khi use kr skte
    for(int i =0 ; i<x;i++){
        printf("\n%d ", p[i]);
    }
    return 0;
}