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
    for (int j=0;j<i;j++){
        sum += arr[j];
    }
    float avg = sum/i;
    printf("The sum of the array elements is: %.0f\n", sum);
    printf("The average of the array elements is: %.2f\n", avg);
    return 0;
}