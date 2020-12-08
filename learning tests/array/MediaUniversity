#include <stdio.h>

// este programa armazenará duas médias distintas em uma matriz e retornará a maior média, junto com a mátricula.

int main()
{
    int i, j, M[2][4], maior;
    float mediaritm = 0;

    //primeira parte

    for (i = 0; i < 2; i++)
    { /* Apenas dois alunos, conforme o vetor [2] */

        printf("Registration [%d] : ", i /*,j*/);

        scanf("%d", &M[i][0]); /* matricula */

        printf("Average Tests ------ : ");

        scanf("%d", &M[i][1]); /* primeira media */

        printf("Average Works --- : ");

        scanf("%d", &M[i][2]); /* segunda media */

        M[i][3] = (M[i][1] + M[i][2]) / 2; /* nota final  */
    }

    //segunda parte

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            M[i][3] = (M[i][1] + M[i][2]) / 2;
            mediaritm = (M[i][1] + M[i][2]) / 4;
        }
    }

    //terceira parte

    maior = M[0][3];
    int x = 0;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j <= 3; j++)
        {
            if (maior < M[i][3])
            {
                maior = M[i][3];
                x = i;
            }
        }
    }

    //resultados

    printf("\nThe highest final note is from the student with the registration: %d", M[x][0]);

    printf("\n\nArithmetic average: %.2f ", mediaritm);

    printf("\n\n\n");

    return 0;
}