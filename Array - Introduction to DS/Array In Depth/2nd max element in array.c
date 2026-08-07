#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("Enter arr[%d] element:\n",i);
        scanf("%d", &arr[i]);
    }
    int max = 0,secm=0;
    max = arr[0]>arr[1]?arr[0]:arr[1];
    secm = arr[0]<arr[1]?arr[0]:arr[1];
    for(int j=2;j<size;j++){
        if(arr[j]>max){
            secm = max;
            max = arr[j];
        }else if(arr[j]>secm){
            secm = arr[j];
        }
    }
    printf("Second Max element is %d ", secm);
    return 0;
}