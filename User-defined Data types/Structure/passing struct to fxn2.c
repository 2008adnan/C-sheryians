#include<stdio.h>
struct A{
    int x;
}a,b;
//a is passed by value, b is passed by pointer
void increment(struct A a, struct A *b){
    a.x++; //only local copy of a is changed which came inside this fxn
    b->x++;  //Actual b is modified
}

int main(){
    a.x = 12;
    b.x = 15;
    increment(a,&b);
    printf("a.x = %d\t b.x = %d", a.x,b.x);
    return 0;
}