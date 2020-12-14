#include <stdio.h>
#include <stdlib.h>

int main(void){
    // programa vai declarar um inteiro, um char e um real e ponteiro para os eles.
    //Associará as variáveias aos ponteiros e modificará os valores de cada variável usando os  ponteiros.
    // Após isso, imprimirá na tela o antes e o depois.

    int x;
    char y[50];
    float z;

    //Atribuindo valores aos ponteiros.
    int *pX = &x;
    char *pY = y;
    float *pZ = &z;

    //Inicio do programa
    printf("\nValue int: ", x);
    scanf("%d", &x);
    getchar();

    printf("Value char[MAX 50]: ", y);
    fgets(y, 50, stdin);
    //printf("\n");

    printf("Value float: ", z);
    scanf("%f", &z);
    getchar();

    printf("\n\n");

    system("clear");

    printf("\t\tBEFORE");

    //imprime os valores antes as mudanças que serão atribuídas.

    printf("\nTyped Value int %d and Address Memory %x.\n", x, &x);
    printf("Typed Value char %s.", y);
    printf("Typed Value float %.2f.\n", z);

    //novos valores

    pX = &x;
    pY = y;
    pZ = &z;

    *pX = *pX * 2;
    *pZ = *pZ * 10;
    pY = "New Word";

    printf("\n");
    printf("\t\tAFTER");

    printf("\nValue int %d and Address Memory %x", x, &x);
    printf("\nValue char[MAX 50]: %s.", pY);
    printf("\nValue float: %.2f.", z);

    printf("\n\n\n");

    printf("Ṕress Enter for Finish!");

    getchar();
    return 0;
}