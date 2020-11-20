#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

char name [40];
int opt,pc;
//programa para simular pedra, papel ou tesoura.
void main()
{
setlocale(LC_ALL, ("Portuguese"));
//pedra, papel ou tesoura.

printf("\t\t___JoKenPo___\n\n");
//identificação do usuário e suas escolhas
do {
printf(" Olá, digite aqui seu nome para comerçarmos: ");
scanf("%s", &name);
system("clear");
printf("\nOlá %s, escolha entre entre as opções abaixo e vamos competir!\n\n", name);
printf("1 - Pedra\n");
printf("2 - Papel\n");
printf("3 - Tesoura\n");
printf("Opção: ");
scanf("%d", &opt);
switch (opt)
{
    case 1:
    system("clear");
            printf(" Você escolheu Pedra!\n");
    break;

    case 2:
    system("clear");
            printf(" Você escolheu Papel!\n");
    break;

    case 3:
    system("clear");
           printf(" Você escolheu Tesoura!\n");
    break;

    default:
        printf("Opção invalida!\n");
}
}while(opt==4);
//lógica da maquina

srand (time(NULL));
pc=("%d", rand()%3 +1);

switch (pc)
{
    case 1:
           printf("A maquina escolheu PEDRA!\n");
    break;

    case 2:
           printf("A maquina escolheu PAPEL!\n");
    break;

    case 3:
           printf("A maquina escolheu TESOURA!\n");
    break;

}

//lógica para determinar vencedor.
    if (opt==pc)
{
    printf(" EMPATE!\n\n");
}

    else if ((opt==1 & pc==3) | (opt==2 & pc==1) |
(opt==3 & pc==2))

{
    printf(" Você venceu!!\n\n");

}

    else
{
    printf(" A maquina venceu!\n\n");
}

return 0;
}



