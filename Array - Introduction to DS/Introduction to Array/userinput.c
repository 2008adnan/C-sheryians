#include <stdio.h>
int main(){
    int arr[3];
    printf("Enter 3 elements of array: ");
    for(int i=0;i<3;i++){
        scanf("%d",&arr[i]);
    }
    printf("The elements of array are: \n");
    for(int i=0;i<3;i++){
        printf("%d\n",arr[i]);
    }


    int arr1[] = {1,2,3,4,5}; // we can also initialize an array without specifying the size, in this case, the size will be determined by the number of elements provided.
    printf("The elements of the array are: \n");
    for(int i=0;i<5;i++){
        printf("%d\n",arr1[i]);
    }
    return 0;
}