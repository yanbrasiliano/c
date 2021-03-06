#include <stdio.h>
#include <stdlib.h>
#define VAR 2; // este valor não ocupa a memória pois está no pré processamento do programa.

//função para multiplicar valores.
int mult(int value)
{

    return value * VAR;
}

int main(void){
  //programa para mostrar função, define e operadores ternários.
    
    int value, m;
    // diferente do define, este valor vai ocupar um espaço na memória, pois está dentro do processamento.
    const float value2 = 8.5;
    printf("\nEnter with the value at R$: ");
    scanf("%f", &value);

    m = mult(value);

    system("clear");

    printf("This value is: %d\n", m);

    //Utilizando operadores ternários
    //Condição ? comando para condição verdadeira : comando para condição falsa.
    m >= 20 ? m++ : m--; // m++ = m = m+1 e m-- = m - 1.

    printf("\nValue Increased is: %d\n", m);

    float new_value = m * value2;

    printf("\nThis is new value multiplied by 8: %.2f\n", new_value);
    printf("\nThis is new value pre increased: %.2f\n", ++new_value); // incrementa um valor antes e depois exibe o valor.
    
    
    for (int i = 0; i <=5; i++){

        printf("\nLoop is %d\n", i);

    }
    
    
    return 0;
}