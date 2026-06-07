#include <stdio.h>
int main() {
    int  i = 12l;  /* here the l in 12l is a integer literal we can also use 
    L in place of l as 12L */
    float f = 3.14f; /* here the f in 3.14f is a float literal we can also use F in place of f as 3.14F */
    printf("integer value %i \n",i);
    printf("float value %.1f \n",f);

    int nalla = 012; /* here the 0 in 012 is a octal literal and the value of 012 in octal is 10 in decimal */
    printf("%i\n",nalla);

    int takla = 013;
    printf("%i\n",takla); /* here the 0 in 013 is a octal literal and the value of 013 in octal is 11 in decimal */

    int chalu = 0b100; /* here the 0b in 0b100 is a binary literal and the value of 0b100 in binary is 4 in decimal */
    printf("%i\n",chalu);

    int bada = 0x1F; /* here the 0x in 0x1F is a hexadecimal literal and the value of 0x1F in hexadecimal is 31 in decimal */
    printf("%i\n",bada);

    return 0;
}