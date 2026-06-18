#include <stdio.h>
void program(){
    float m;
    printf("Enter original amount to be paid:");
    scanf("%f", &m);
    if(m<0){
        printf("Enter Valid Amount");
    }else if(m>0 && m<=5000){
        printf("Amount to be paid: %.2f",m);
    }else if(m>5000 && m<=7000){
        float discount = 0.05*m;
        float pay = m-discount;
        printf("The amount to be payed after applying 5%% discount is %.2f", pay);        
    }else if(m>7000 && m<=9000){
        float discount = 0.1*m;
        float pay = m-discount;
        printf("The amount to be payed after applying 10%% discount is %.2f", pay);        
    }else{
        float discount = 0.2*m;
        float pay = m-discount;
        printf("The amount to be payed after applying 20%% discount is %.2f", pay);        
    }
}
int main(){
    program();
    return 0;
}
