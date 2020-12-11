#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int n, x;
    int fat = 1;

    do
    {
        printf("Type number: ");//entre com número.
        scanf("%i", &n);

        printf("\n");
                //lógica do programa.
        for (fat = 1; n >= 1; --n) // inicia o fat com 1, n maior ou igual a um e, caso a lógica estiver ok, diminui -1 do n  até findar o fatorial.
        {

            fat *= n; // faz o fatorial.
        }

        printf("Calculated Factorial: %d\n", fat); // resultado.
             printf("Press 1 - Return Main or Press 2 - Exit: ");
        scanf("%d", &x);
           system("clear"); // cls no windows - limpar tela.
    } while (x != 2); // digitar 2 para sair e 1 para retornar ao ínicio.

    system("clear");// cls no windows - limpar tela.
    printf("tks!\n");

    return 0;
}