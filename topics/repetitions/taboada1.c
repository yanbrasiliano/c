#include <stdio.h>
#include <stdlib.h>

int main(void)
{

//programa base para estrutura de repetição com while e do/while. Multiplica tabuada de 10

int resp,num,x = 0;
do {
    system ("clear");
    printf("\t\t Multiplication Table x10\n");
    printf("\nHi, enter a number: ");
    scanf("%d", &num);

while(x <=10){
    printf("%d x %d = %d\n", num,x,num*x);
    x++;
}
printf("\n1 - New Calc ");
printf("\n2 - Exit ");
printf("\nChoose option: ");
scanf("%d", &resp);
}while (resp != 2);
return 0;

}
