#include<stdio.h>
int main(){
    int size;
    printf("Size of array:");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++){
        printf("Enter element array[%d]:\n",i);
        scanf("%d",&a[i]);
    }
    printf("Enter element you're searching for:\n");
    int search;
    scanf("%d",&search);
    int found = -1;
    for(int j=0;j<size;j++){
        if(a[j]==search){
            found = j;
            break;
        }
    }
    if(found == -1){
        printf("Element not found\n");
    }
    else{
        printf("Element found at index %d\n",found);
    }
    return 0;
}