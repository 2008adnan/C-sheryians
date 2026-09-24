#include<stdio.h>

enum val{
    n1 = 36, n2 = 79, n3, n4 = 100 //jab hum n3 ko define nahi karte to ye automatically n2+1 ka value le lega yani 80, aur n4 ka value 100 hoga
};   //we can define it here of inside the main function also
enum var{
    m1,m2,m3 //jab hum m1 ko define nahi karte to ye automatically 0 ka value le lega, aur m2 ka value 1 hoga, aur m3 ka value 2 hoga
};
int main(){
    int num = n1;
    enum val num2 = n3;
    printf("num = %d\n", num);
    printf("num2 = %d\n", num2);

    printf("m1 = %d\n", m1);
    printf("m2 = %d\n", m2);
    printf("m3 = %d\n", m3);
    return 0;
}