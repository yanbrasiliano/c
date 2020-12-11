
#include <stdio.h>
int main(void)
{
    // programa para testar vetores/calcular média.


    //                l  c     
    float notasAlunos[4][4]= {0}; // notas dos alunos.
    float mediasAlunos[4]= {0}; // média dos alunos.
    float media= 0; // variável para calcular média.


            //lógica do programa
            
           for (int aluno = 0; aluno  < 4; aluno++) {
           printf ("Insert notes student %d here >>", aluno + 1); // inserção de dados dos alunos
               
               for (int notas = 0; notas < 4; notas++) {
               scanf ("%f", &notasAlunos[aluno][notas]); // leitura da inserção d dados
               media += notasAlunos[aluno][notas]; // adiciona o valor da variável notasAlunos
               }
                     mediasAlunos[aluno] = media / 4; // calculo da média.
                     media = 0; // reseta a a variável para retornar ao começo.
           }
           
               for (int contador = 0; contador < 4; ++contador) {
               printf ("A media do aluno %d: %.2f\n", contador + 1, mediasAlunos[contador]);
           }
           
return 0;
}