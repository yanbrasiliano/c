#include <stdio.h>
#include <stdlib.h>


int main(void){

//programa base para estrutura de repetição for e do/while - multiplica tabuada de 20.

int resp,num = 0;
do {
    system ("clear");
    printf("\t\t Multiplication Table x20\n");
    printf("\nHi, enter a number: ");
    scanf("%d", &num);

    for (int x = 0; x <=20;x++)
{
    printf("%d x %d = %d\n", num,x,num*x);
}
printf("\n1 - New Calc ");
printf("\n2 - Exit ");
printf("\nChoose option: ");
scanf("%d", &resp);
}while (resp != 2);
return 0;

}
