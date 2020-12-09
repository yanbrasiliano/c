#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void){

char name[30];
int n1,n2;
float r;

printf("\n===================================\n");
printf("|                                 |");
printf("\n===================================\n");
printf("|      The Order Program          |");
printf("\n===================================\n");
printf("|                                 |");
printf("\n===================================\n");


printf("\n\nHi, Enter your name here: ");
fgets(name,30,stdin);
name[strlen(name)-1] = '\0'; //remover o \n que ficou da leitura com fgets

printf("\nHi %s, Enter first number: ",name);
scanf("%d",&n1);
getchar();
printf("\nEnter second number: ");
scanf("%d",&n2);
getchar(); // ler buffer que fica para limpar o teclado.

//sum +
r = n1 + n2;
printf("\nThe sum is: %.0d",(int)r);

//sub - 
r = n1 - n2;
printf("\nThe subtraction is: %.0d",(int)r);

//mult - 
r = n1 * n2;
printf("\nThe multiplication is: %.0d",(int)r);

//div - 
r = (float)n1/n2;
printf("\nThe division is: %.2f",r);

//mod
if(n1 % 2 == 0)
{
     printf("\nFirst number is PAR!!");     
}else
{ 
     printf("\nFirst number is IMPAR!!");
}
if(n2 % 2 == 0  ) 
{
     printf("\nSecond number is PAR!!\n\n\n"); 
}else
{
         printf("\nSecond number is IMPAR!!\n\n\n");  
}
     
return 0;
}
