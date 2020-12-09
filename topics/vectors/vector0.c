#include <stdio.h>
#include <stdlib.h>

int main(void){
//programa para testar valores no vetor e multiplicar vetores diferentes.
    int A[10];
    int B[10];
    int i;

    //entrada de dados.
    for (i = 0; i <= 9; i++)
    {

        printf("Enter the values for array A: ", A[i]);
        scanf("%d", &A[i]);
    }

    system("clear"); // cls no windows - limpar tela.

    //saída de dados.
   /* for (i = 0; i <= 9; i++)
    {

        printf("\nValues Array [%d]: %d \n  ", i, A[i]);
    } */

    system("clear"); // cls no windows - limpar tela.

    //multiplicação de array A x array B.
    for (i = 0; i <= 9; i++)
    {

        B[i] = A[i] * 2;

        printf("\tArray [%d] x Array B(2x) = %d\n", A[i], B[i]);
    }

    return 0;
}