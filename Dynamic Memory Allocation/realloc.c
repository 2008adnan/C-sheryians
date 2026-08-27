#include<stdio.h>
#include<stdlib.h>
int main(){
    //allocate memory for 5 integers
    int *ptr = (int*)calloc(5, sizeof(int));
    //resize memory to hold 10 integers
    ptr = (int*)realloc(ptr, 10*sizeof(int));
    //check if reallocation was successfull
    if(ptr==NULL){
        printf("Memory Reallocation Failed");
    }
    //use reallocated memory 
    for(int i=0;i<10;i++){
        ptr[i]=i+1;
    }
    for(int i =0;i<10;i++){
        printf("%d ", ptr[i]);
    }
    //free memory
    free(ptr);
    ptr = NULL;

    return 0;
}