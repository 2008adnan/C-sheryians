#include<stdio.h>
int main(){
    int T;
    scanf("%d",&T);
    for(int B =1;B<=T;B++){
        int N;
        scanf("%d",&N);
        int arr[N];
        for(int i =0;i<N;i++){
            scanf("%d",&arr[i]);
        }
        for(int i =0;i<N;i++){
            int min = arr[i];
            int minindex =i;
            for(int j=i+1;j<N;j++){
                if(arr[j]<min){
                    min = arr[j];
                    minindex = j;
                }
            }
            int temp = arr[i];
            arr[i] =arr[minindex];
            arr[minindex] = temp;
        }
        for(int i =0;i<N;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
    return 0;
}