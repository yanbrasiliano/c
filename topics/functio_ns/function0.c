#include <stdio.h>

//função retorna maior entre dois números.
float num(float num1, float num2)
{

    if (num1 > num2)
    {

        printf(" Number %f is bigger. ", num1);
    }
    else
    {
        printf("Number %f is bigger. ", num2);
    }
    return 0;
}
int main(void)
{
    float n, r, c;

    printf("\n\nEnter first number: ");
    scanf("%f", &n);

    printf("\n\nEnter second number: ");
    scanf("%f", &r);

    c = num(n, r);
    printf("\n\n");

    printf("The largest number between %.1f and %.1f: %.1f \n",n, r, c);
    printf("\n\n");
    return 0;
}
