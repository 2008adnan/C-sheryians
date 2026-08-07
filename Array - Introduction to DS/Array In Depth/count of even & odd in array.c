#include<stdio.h>
int main(){
    float sum =0;
    printf("Input the size of the array: ");
    int i;
    scanf("%d",&i);
    int arr[i];
    for(int j=0; j<i; j++){
        printf("input arr[%d] element:\n", j);
        scanf("%d",&arr[j]);
    }
    int even = 0, odd = 0;
    for(int k= 0;k<i;k++){
        if(arr[k]%2==0){
            even += 1;
        }else{
            odd += 1;
        }
    }
    printf("The count of even numbers in the array is: %d\n", even);
    printf("The count of odd numbers in the array is: %d\n", odd);
    return 0;
}
    