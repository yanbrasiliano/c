#include <stdio.h>
#include <stdlib.h>

float pitagoras(float base, float height)
{

    float calc = (base * height) / 2;
}

int main(void)
{
    // programa para calcular teorema de pitágoras
    float v1, v2, c;
    int x;
    do
    {
        printf("Welcome to Calculator PitagorasTheorem!");

        printf("\n\n");

        printf("Type value base: ");
        scanf("%f", &v1);
        getchar();

        printf("\n\n");

        printf("Type value height: ");
        scanf("%f", &v2);
        getchar();

        c = pitagoras(v1, v2);

        system("clear"); //for linux
        printf("This value Pitagoras Theorem is %.1f!", c);

        printf("\n\n");

        printf("To return menu press 1, or Exit press 2: ");
        scanf("%i", &x);
        getchar();

        printf("\n\n");
        system("clear"); //for linux
    } while (x != 2);
    ("\n\n");
    system("clear"); //for linux
    printf("Thanks!");
    printf("\n\n");

    return 0;
}
