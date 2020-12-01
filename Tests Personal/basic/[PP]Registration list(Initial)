#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (void) {
    setlocale(LC_ALL, "Portuguese");

    // <.Listagem de Cadastrados.>  programa lista informações cadastradas.

    char nome1[40], nome2[40], nome3[40];
    char sexo1,sexo2, sexo3;
    float nota1,nota2,nota3;

do{
    printf("Cadastrando 1° pessoa\n");
    printf("--------------------------\n");
    printf("NOME: ");
    fgets(nome1,40,stdin);
    nome1[strlen(nome1)-1] = '\0'; //remover o \n que ficou da leitura com fgets
    printf("SEXO [M/F]: ");
    sexo1 = getchar();
    printf("NOTA: ");
    scanf("%f", &nota1);
    getchar(); // ler buffer que fica para limpar o teclado.

    printf("--------------------------\n");

    printf("Cadastrando 2° pessoa\n");
    printf("--------------------------\n");
    printf("NOME: ");
    fgets(nome2,40,stdin);
    nome2[strlen(nome2)-1] = '\0'; //remover o \n que ficou da leitura com fgets
    printf("SEXO [M/F]: ");
    sexo2 = getchar();
    printf("NOTA: ");
    scanf("%f", &nota2);
    getchar(); // ler buffer que fica para limpar o teclado.

    printf("--------------------------\n");

    printf("Cadastrando 3° pessoa\n");
    printf("--------------------------\n");
    printf("NOME: ");
    fgets(nome3,40,stdin);
    nome3[strlen(nome3)-1] = '\0'; //remover o \n que ficou da leitura com fgets

    printf("SEXO [M/F]: ");
    sexo3 = getchar();
    printf("NOTA: ");
    scanf("%f", &nota3);
    getchar(); // ler buffer que fica para limpar o teclado.

    system("clear"); // limpar tela - mesma ideia do cls no windows.

    printf("Listagem Completa\n\n");
    printf("------------------------------\n");
    printf("NOME   SEXO  NOTA\n");
    printf(" %s    %c   %.2f\n",nome1,sexo1,nota1);
    printf(" %s   %c   %.2f\n",nome2,sexo2,nota2);
    printf(" %s   %c   %.2f\n",nome3,sexo3,nota3);
    printf("------------------------------\n");
    
    }
