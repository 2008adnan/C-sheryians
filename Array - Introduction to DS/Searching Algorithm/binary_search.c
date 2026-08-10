#include<stdio.h>
int main(){
    int a[] = {11,16,19,67,90,105};
    printf("Enter element you're searching for:\n");
    int search;
    scanf("%d",&search);
    int found = -1;
    int start = 0, end = sizeof(a)/sizeof(a[0]) - 1;
    while(start<=end){
        int mid=(start+end)/2;
        if(a[mid] == search){
            found = mid;
            break;
        }else if(a[mid]<search){
            start = mid+1;
        }else{  //mtlb sirf ek codn bachi ki a[mid]>search wo idhr consider hogyi
            end = mid-1;
        }
    }

    printf(found ==-1? "Element not found\n": "Element found at index %d\n",found);
    return 0;
}