#include<stdio.h>
int main(){
    printf("Input the size of the array: ");
    int i;
    scanf("%d",&i);
    int arr[i];
    for(int j=0; j<i; j++){
        printf("input arr[%d] element:\n", j);
        scanf("%d",&arr[j]);
    }
    printf("\n");
    printf("The elements of the array are: ");
    printf("\{");
    for(int j=0; j<i-1; j++){
        printf("%d, ", arr[j]);    
    }
    printf("%d", arr[i-1]);
    printf("\}");
    return 0;
}