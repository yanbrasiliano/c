#include <stdio.h>
#include <stdlib.h>

int main()
{
    //programa recebe valores na matriz e retorna quantos são maiores que 10 e quais são os valores das matrizes.
    //         l  c
    int array[3][3];
    int i, j, x;
    int cont = 0;

    do
    {
        //entrando com valores.
        for (i = 0; i < 3; i++)     // loop da coluna
            for (j = 0; j < 3; j++) // loop da linha
            {
                printf("Enter the values line [%d] and column [%d] : ", i, j);
                scanf("%d", &array[i][j]);
            }

        system("clear"); // cls no windows; limpar tela.

        for (i = 0; i < 3; i++)
            for (j = 0; j < 3; j++)
            {
                printf("Values Array [%d] [%d] = %d \n", i, j, array[i][j]);
            }
        //contagem
        for (i = 0; i < 3; i++)
            for (j = 0; j < 3; j++)
            {

                if (array[i][j] > 10)
                {
                    cont++;
                }
            }

        printf("\n\nThere're %d value(s) greater than 10 \n\n", cont);

        printf("Type 1 to return or 2 to exit: ");
        scanf("%d", &x);

    } while (x != 2);

    return 0;
}