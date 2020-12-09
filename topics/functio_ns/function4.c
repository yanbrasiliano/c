#include <stdio.h>
// este programa pegará um valor negativo e retornará como positivo, caso solicitado, para fazer um multiplicação.
// servirá como teste para funções.

float sumvalues(float n1, float n2)
{
    float absolute(float x);

    if (n1 < 0)
    {
        n1 = absolute(n1);
    }

    if (n2 < 0)
    {
        n2 = absolute(n2);
    }

    return n1 * n2;
}

float absolute(float x)
{

    return x * -1;
}

int main(void)
{

float sumvalues(float n1, float n2);
   
   float a,b;
   float sum;
  

    //entrada de dados.
    printf("type two numbers: ");
    scanf("%f", &a);
    scanf("%f", &b);

    sum = sumvalues(a,b);

    printf("The sum is: %.1f", sum);
    
    return 0;
}