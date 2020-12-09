#include <stdlib.h>
#include <stdio.h>

int main(void) {

int maior=0,menor=0,aux=0,contador=0;

do{
  

printf("\nEntre com os valores: ");
scanf("%d",&aux);

if(contador==0){
          maior=aux;
          menor=aux;
          contador++; 
}
else if(aux == -1){
          break;
}

else if(aux>maior){
          maior = aux;
}

else if (aux<menor){
          menor = aux;
}

}while(1);

printf("\n\nMaior: %d\nMenor: %d\n\n\n",maior,menor);

}
