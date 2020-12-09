#include <stdio.h>

int main(void)
{
    int saque = 0;
//programa para simular saque em caixa eletrônco.
    do
    {
        printf("\n\nEnter the takeoff value: R$ ");
        scanf("%d", &saque);

        if (saque <= 0)
            printf("\nYou cant draw a negative or zero value.");
        else if (saque % 5 == 0)
            break;
        else
            printf("\nYou cant draw %d: ", saque);
    } while (0 == 0);

    printf("\n\tYou withdrew %d: ", saque);

    printf("\n\t%d notes of 50", saque / 50);
    saque = saque % 50;
    printf("\n\t%d notes of 20", saque / 20);
    saque = saque % 20;
    printf("\n\t%d notes of 10", saque / 10);
    saque = saque % 10;
    printf("\n\t%d notes of 5", saque / 5);
    saque = saque % 5;

    getchar();
    getchar();
    return 0;
}