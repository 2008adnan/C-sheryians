#include <stdio.h>
int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int a[size];
    printf("Enter the elements of the array: ");
    for(int i=0; i<size; i++){
        printf("Element a[%d]:\n", i);
        scanf("%d", &a[i]);
    }
    for(int i=0; i<size-1;i++){
        for(int j= 0;j<size-1-i;j++){
        if(a[j]>a[j+1]){
            int temp = a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
    }
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    return 0;
} 