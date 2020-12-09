#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void){
char name[30],product[20],state[10];
float t,value,x;
int y;
//programa para calcular valores de importação e envio - baseado nas informações inseridas pelo usuário.

do{
printf("\n\n=====================================================================================================\n\n");
printf("\tCALC ++ - AUTHOR: hiyan \n");
printf("\nDescription: This program calculates the unit value of the desired product, varying by the import value. \n");
printf("\n\n======================================================================================================\n\n");

printf("\n\nWelcome! Your name: ");
fgets(name,30,stdin);
name[strlen(name)-1] = '\0'; //remover o \n que ficou da leitura com fgets


printf("\n\nHello %s, Which do your product? ",name);
fgets(product,20,stdin);
product[strlen(product)-1] = '\0'; //remover o \n que ficou da leitura com fgets

printf("\n\nWhat is the value? in REAL:R$ ");
scanf("%f",&value);
getchar();

printf("\n\nWhat is the shipping state? ");
fgets(state,10,stdin);
state[strlen(state)-1] = '\0'; //remover o \n que ficou da leitura com fgets


printf("\n\nWhat is the state import rate? ");
scanf("%f",&t);
getchar();

x = value +(value * t/100); 

printf("\n\n%s, the value unit of %s with the import rate the %s is: R$%.2f\n\n\n",name,product,state,x);


printf("\n\nIf you want to make one more query, type 1 or type 2:  "); 
scanf("%d",&y);
getchar(); // ler buffer que fica para limpar o teclado.
system("clear");
}while(y !=2);
     
     system("clear");
    printf("\n\nThanks %s\n\n",name);
    
return 0;
}
