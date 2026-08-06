#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
     for (int i=0;i<n;i++){
        printf("Enter element number %d:",i+1);
        scanf("%d",&arr[i]);
    }
    int size = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0], index = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
            index = i;
        }
    }
    printf("Max element %d found at index %d\n",max,index);
    return 0;
}