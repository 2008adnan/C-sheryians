#include<stdio.h>
int main(){
    printf("Input the size of the array: ");
    int size;
    int k;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("Enter arr[%d]:\n",i);
        scanf("%d",&arr[i]);
    } 
    printf("Enter how many times you want to rotate the array to left:\n");
    scanf("%d",&k);
    for(int i=1;i<=k;i++){
        int temp = arr[0];
    for(int i=1;i<size;i++){
        arr[i-1]= arr[i];
    }       
    arr[size-1]= temp;
    }
    for(int i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}