#include <stdio.h>
#include <stdlib.h> // lib para o rand
#include <time.h> // lib para o time.

// programa para testar função srand.
int main(void)
{

	//inicializa a função srand
	srand((unsigned)time(NULL));

	printf("\n\n");
	printf("random number between 0 and 10: %d\n\n", rand()%9 +1);
	printf("\n\n");

	return 0;
}