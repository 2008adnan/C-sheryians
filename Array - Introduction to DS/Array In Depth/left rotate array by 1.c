#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("Enter arr[%d] element: \n",i);
        scanf("%d", &arr[i]);
    }
    int temp = arr[0];
    for(int i=0;i<size-1;i++){
        arr[i] = arr[i+1];
    }
    arr[size-1] = temp;
    for(int i=0;i<size;i++){
        printf("%d ", arr[i]);
    }

    return 0;
}