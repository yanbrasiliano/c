#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(void)
{
setlocale(LC_ALL, ("Portuguese"));
//programa para função rand - jogo do dado.
int x;

do{
system("clear");
printf(" Dado virtual!\n\n ");
srand (time(NULL));
printf(" Face: %d\n\n", rand()%6 +1);

printf(" Digite 1 se desejar continuar jogando.\n");
printf(" Digite 2 se deseja sair.\n");
printf(" \t\tOpção: ");
scanf("%d", &x);

}while(x != 2);

return 0;
}


