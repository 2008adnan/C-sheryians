#include<stdio.h>
int main(){
    printf("Input the size of the array: ");
    int i;
    scanf("%d",&i);
    int arr[i];
    for(int j=0;j<i;j++){
        printf("Input arr[%d] element:\n",j);
        scanf("%d",&arr[j]);
    }
    int inc =1;
    for(int k=0;k<i-1;k++){
        if(arr[k+1]<arr[k]){
            inc =0;
            break;
        }
    }
    if(inc==0){
        printf("not increasing\n");

    }else{
        printf("increasing\n");
    }
    return 0;
}