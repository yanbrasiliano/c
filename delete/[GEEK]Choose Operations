#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() 
{
char name[20];
int  a,b,c,d,x,e,f,g,y,p,h,j,z,v,m;

setlocale(LC_ALL, "Portuguese");

// lê a opção e realiza a operação desejada.

printf("\nWelcome! Enter your name: ");
fgets(name,20,stdin);
name[strlen(name)-1] = '\0'; //remover o \n que ficou da leitura com fgets

do{
printf("\n 1 - Soma de 2 números. ");
printf("\n 2 - Diferença entre 2 números - maior para o menor. ");
printf("\n 3 - Produto entre 2 números. ");
printf("\n 4 - Divisão entre 2 números - denominador diferente de 0. ");
printf("\n\nHi %s, choose the option: ",name);
scanf("%d",&x);
getchar(); // ler buffer que fica para limpar o teclado.

switch(x) {

case 1:
system("clear");
printf("\nEnter first number: ");
scanf("%d",&a);
getchar(); // ler buffer que fica para limpar o teclado.
printf("\nEnter second number: ");
scanf("%d",&b);
getchar(); // ler buffer que fica para limpar o teclado.

e = a + b;
printf("\n\nThe result of the sum is: %d\n\n",e); 
break;
 
case 2:
system("clear");
printf("\nEnter first number: ");
scanf("%d",&c);
getchar(); // ler buffer que fica para limpar o teclado.
printf("\nEnter second number: ");
scanf("%d",&f);
getchar(); // ler buffer que fica para limpar o teclado.

g = c - f;
printf("\n\nThe result of the subtraction is: %d\n\n",g);
break;

case 3:
system("clear");
printf("\nEnter first number: ");
scanf("%d",&y);
getchar(); // ler buffer que fica para limpar o teclado.
printf("\nEnter second number: ");
scanf("%d",&p);
getchar(); // ler buffer que fica para limpar o teclado.

h = y * p;
printf("\n\nThe result of the product is: %d\n\n",h);
break;

case 4:
system("clear");
printf("\nEnter first number: ");
scanf("%d",&z);
getchar(); // ler buffer que fica para limpar o teclado.
printf("\nEnter second number: ");
scanf("%d",&v);
getchar(); // ler buffer que fica para limpar o teclado.

j = z/v;
printf("\n\nThe result of the division is: %d\n\n",j);

break;

default:
printf("\n\nError 555 - number invalid, return menu!");
     
}

printf("\n\nEnter 1 for return or Enter 2 for exit: ");
scanf("%d",&m);
getchar(); // ler buffer que fica para limpar o teclado.

}while(m != 2);
system("clear");
printf("\n\nThanks, Goodbye!\n\n");

return 0;
}
