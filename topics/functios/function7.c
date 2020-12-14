#include <stdio.h>

//chamar matriz em função

void funcPrint(int x[3][3]){

	int i, j;

	for (i = 0; i < 3; i++){
			for (j = 0; j < 3; j++){
					printf("%i", x[i][j]);
		}
		printf("\n");
	}
}
int main(void)
{

	int matriz[3][3] = {3, 5, 6, 2, 1, 7, 8, 9, 4};
	int i, j;

	void funcPrint(int vetor[3][3]);

	funcPrint(matriz);

	return 0;
}