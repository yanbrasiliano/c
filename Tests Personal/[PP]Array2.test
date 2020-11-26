#include <stdio.h>

int main (void) {

int x, *ptrx, **pptrx;
// programa para testar ponteiro para ponteiro.


//inicializando a variável.

x = 2;
printf("\nThe value x is: %d\n",x);
printf("Address Memory: %x\n",&x );

//atribuindo valores aos ponteiros

ptrx = &x; // ptrx aponta para x.
pptrx = &ptrx; // pptrx apontando para ptrx.

*ptrx = *ptrx * 2;

printf("\nThe value x is: %d\n",x);
printf("Address Memory: %d\n",&x);
printf("Variable Value x Pointed to *ptrx = %d\n", *ptrx);
printf("Address Memory *ptrx = %x\n", &ptrx);


**pptrx = **pptrx * *ptrx;

printf("\nThe value x is: %d\n", x);
printf("Variable Value Appointed by **pptrx = %x\n", pptrx);
printf("Variable Value Reference =  %d", **pptrx);

printf("xxxx  = %x\n", &pptrx);

printf("\n\n\n\n\n");


    return 0;
}