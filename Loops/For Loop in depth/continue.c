#include<stdio.h>
int main(){
    int n;
    printf("enter number of times to repeat:");
    scanf("%d",&n);   // n = kitni baar loop chalega (upper limit)
    int e;
    printf("enter the number to skip:");
    scanf("%d",&e);   // e = jis number ko print nahi karna (skip karna hai)
    for(int i=1;i<=n;i++){
        if(i==e)  // jab i ki value e ke barabar ho jaye...
        continue;  // ...to ye line chalte hi loop turant agle iteration pe chala jata hai
                   // matlab neeche wali printf line skip ho jaati hai sirf isi ek baar ke liye
                   // (poora loop break nahi hota, sirf yeh wala round skip hota hai)
        printf("%d\n",i);   // ye sirf un numbers ke liye chalega jo 'e' ke equal nahi hain
    }

    return 0;
}