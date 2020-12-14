#include <stdio.h>

//ordenar os números de forma crescente


void ordemCrescente(int vetor[], int n)
{

	int i, j, temp;

	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{

			if (vetor[i] > vetor[j])
			{
				temp = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = temp;
			}
		}
	}
}

int main(void)
{

	int vetor[10] = {3, 5, 6, 2, 1, 7, 8, 9, 10, 4};
	int i;

	void ordemCrescente(int vetor[], int n);

	ordemCrescente(vetor, 10);

	for (i = 0; i < 10; i++)
	{

		printf("%i\n\n", vetor[i]);
	}
	return 0;
}