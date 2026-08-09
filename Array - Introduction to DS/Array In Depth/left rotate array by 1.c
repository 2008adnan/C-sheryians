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
    //store the first element in a temporary variable
    int temp = arr[0];
    //shift all elements to the left by one position
    for(int i=0;i<size-1;i++){
        arr[i] = arr[i+1];
    }
    arr[size-1] = temp; //store the first element in the last position of the array
    //print the rotated array
    for(int i=0;i<size;i++){
        printf("%d ", arr[i]);
    }

    return 0;
}