#include<stdio.h>
int main(){
    printf("Input the size of array:");
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Input arr[%d] element:\n",i);
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++){
        if(j%2==0){
            printf("%d ",arr[j]);
        }
    }
    return 0;
}