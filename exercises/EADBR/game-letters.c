#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*
    Jogo de cartas
   
*/



void main(){

setlocale(LC_ALL, ("Portuguese"));

srand(time(NULL));


  char faces [13] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'X', 'J', 'Q', 'K'};
    char nipes [4][10] = {"Espadas", "Paus", "Copas", "Ouros"};

    //resultado
    printf("%c de %s\n", faces[rand()%13], nipes[rand()%4]);


return 0;
}

