#include <stdio.h>

int main(void)
{

	int number = 10; // função sizeof retorna o valor em bytes da variável
	float note = 5.5;
	char words = 'd';
	double other = 12.3;
	

		printf("The variable 'number' have a value %d and takes up the space %ld\n", number, sizeof(number));
		printf("The variable 'note' have a value %.2f and takes up the space %ld\n", note, sizeof(note));
		printf("The variable 'words' have a value %c and takes up the space %ld\n", words, sizeof(words));
		printf("The variable 'other' have a value %.2f and takes up the space %ld\n", other, sizeof(other));
	
	
	
	return 0;
}