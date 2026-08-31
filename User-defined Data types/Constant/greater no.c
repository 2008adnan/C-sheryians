#include<stdio.h>
#define max(a,b) a>b ? a:b  //function defined
#define NUM 55
#define show(a,b)                                  \
            do{                                    \
                printf("a = %d\t b = %d\n",a,b);   \
            }while(0)         
            
#define min(a,b)\
            do{\
                if(a<b){\
                    printf("min = %d\n",a);\
                }else{\
                    printf("min = %d\n",b);\
                } \
            }while(0)

int main(){
    printf("Maximum = %d\n", max(7,8));
    show(10,20);
    min(34,21);

    int num = 89;
    printf("NUM = %d\n", NUM);
    printf("num = %d\n", num);
    return 0;
}