#include <stdio.h>
int main(){
    int n =80;
    double d=n; //imlicit type converion
    printf("%.3lf\n", d);

    double r =30.78;
    int e=r;
    printf("%d\n",e);


    int a=12,b=5;
    float f = a/b;  //   int/int = int always
    float g = (float)a/b; //explicit type conversion [now 'a' is converted into float type]
    printf("%.2f\n%.3f\n",f,g);

    return 0;
}