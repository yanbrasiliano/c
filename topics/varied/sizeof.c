#include <stdio.h>

int main(void)
{

	int number = 10;
	float note = 5.5;
	char words = 'd';
	double other = 12.3;


	printf("The variable 'number' have a value %d and takes up the space %lf", number,sizeof(number));
	printf("The variable 'number' have a value %.2f and takes up the space %lf", note,sizeof(note));
	printf("The variable 'number' have a value %c and takes up the space %lf", words,sizeof(words));
	printf("The variable 'number' have a value %.2f and takes up the space %lf", other,sizeof(other));
			return 0;
}