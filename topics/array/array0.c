#include <stdio.h>
#include <stdlib.h>

int main(void){
 
 //programa recebe valores na array e retorna os valores e sua localização
    //        l  c
    int array[3][3];
    int i, j;

    //entrando com valores.
    for (i = 0; i < 3; i++)     // loop da coluna
        for (j = 0; j < 3; j++) // loop da linha
        {
            printf("Enter the values line [%d] and column [%d] : ", i, j);
            scanf("%d", &array[i][j]);
        }

    system("clear"); // cls no windows; limpar tela.

    //saída do resultado
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            printf("\nValues Array [%d] [%d] = %d: \n", i, j, array[i][j]);
        }

    return 0;
}