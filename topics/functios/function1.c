#include <stdio.h>

//programa retorna o dobro de um número digitado - testando o básico de funções.
int num(int num1){

    return num1 * 2;
}


int main(void){
int n,r;

printf("\n\nEnter first number: ");
scanf("%d",&n);

r = num(n);

printf("DOUBLE IS: %d \n\n", r);


return 0;


}
