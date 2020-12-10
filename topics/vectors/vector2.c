#include <stdio.h>
int main(void)
{

    // programa para testar vetores/calcular média.

    const int bimonthly = 4; // número de bimestres.

    const int num_students = 4; // quantidade de estudantes.

    float notasAlunos[num_students][bimonthly]; // notas dos alunos.

    float mediaTotal[num_students]; // média dos alunos.

    float media = 0; // variável para calcular média.

    printf("\nInsert 4 notes student 1 here: "); //insira os dados.

    //lógica do programa.
    for (int aluno = 0; aluno < num_students; ++aluno)
    { // for para linha.
        for (int notas = 0; notas < bimonthly; ++notas)
        { // for para linha coluna.

            scanf("%f", &notasAlunos[aluno][notas]); // lerá as notas dos alunos 4 vezes.
            media += notasAlunos[aluno][notas];      // fará a soma das médias.
        }
        mediaTotal[aluno] = media / bimonthly;                  // fará a divisão para achar o total.
        media = 0;                                              // reseta a variável média para iniciar o próximo aluno.
        printf("Insert 4 notes student %i here: ", aluno + 2); // aluno começa com 0, quando ele chega a esta parte do programa, ele está com 1, mas seu valor definido é 0. aluno + 2 trará o número atual que a variável se encontra mais o número dois, automatizando os valores de entrada.
            
    }

    for (int aluno = 0; aluno < num_students; ++aluno)
    {
        printf("\nAverage student %i is %.2f", aluno + 1, mediaTotal[aluno]);
      

    }

    return 0;
}