#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(void)
{
	int num1, num2;
	setlocale(LC_ALL, ("Portuguese"));

	printf("-------------------------------\n\n");
	printf("\tAKINATOR BASIC\n\n");
	printf("-------------------------------\n\n");
	printf(" Olá, vamos ver se você consegue adivinhar no número em que eu estou pensando?\n    Digite um número entre 1 e 5 para verificar: ");
	scanf("%d%", &num1);

	srand(time(NULL));
	num2 = rand() % 6;

	system("clear");

	printf("Você pensou no %d e eu pensei no %d!", num1, num2);

	return 0;
}
