#include <stdio.h>
#include <string.h>

int main(void){

    //programa para teste de string - retorna as letras da string .
    char name [] = "Testando";
    int i;
    int cont = 0;


    for (i = 0; i <= 7; i++){

        printf("The element value %d of string = %c\n", i, name[i]);
        cont++;
    }
        printf("Number of characters is: %d \n",cont);
        printf("Number of characters use strlen: %d \n",strlen(name));
    return 0;
}