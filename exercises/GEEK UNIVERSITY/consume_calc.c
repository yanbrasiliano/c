#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{

float km,l,r;
char nome[30];
int x;  
// programa calcula consumo de gasolina baseado nas informações inseridas.

do{
printf("\n\nHello, what is your name?  ");
fgets(nome,30,stdin);
nome[strlen(nome)-1] = '\0'; //remover o \n que ficou da leitura com fgets

printf("\n\nWelcome %s, how many miles does the route have? ",nome);
scanf("%f",&km);
getchar(); // ler buffer que fica para limpar o teclado.

printf("\n\nHow many liters of gasoline will be consumed? ");
scanf("%f",&l);
getchar(); // ler buffer que fica para limpar o teclado.


 r = km/l;
 
 if (r < 8) 
 {
 
 printf("\n\n%s, Sell your car immediately!\n\n\n ",nome);  
 
 
 }
 
 else if (r > 8 & r < 12) 
 {
 
 printf("\n\n%s,This car economic, congratulations!\n\n\n",nome );

 }

else if (r > 12) 
 {
 
 printf("\n\n%s,This car is very economic, congratulations!\n\n\n",nome);
 
 }


printf("\n\nIf you want to make one more query, type 1 or type 2:  "); 
scanf("%d",&x);
getchar(); // ler buffer que fica para limpar o teclado.
system("clear"); // limpar tela - mesma ideia do cls no windows.
} while(x != 2);

system("clear"); // limpar tela - mesma ideia do cls no windows.
printf("\n\nThanks %s\n\n", nome);


return 0;
}
