#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

char name [20];
int num;

// programa converte valores x em valores y que estão na tabela ASCII
    printf(" \t\tCONVERTER NUMBER IN CHAR -  TABELA ASCII\n ");
    printf(" \n\nHi, Enter your name: ");
    fgets (name,20,stdin);
    name[strlen(name)-1] = '\0'; //remover o \n que ficou da leitura com fgets

        system("clear");// in linux


    printf(" \n\nHello %s,Enter the number here to know its representation in the ASCII table: ",name);
    scanf("%d", &num);

        system("clear"); // in linux

    printf("\n\n %s, The number %d represents %c in the ASCII table\n\n",name,num,(char)num);



return 0;

}
