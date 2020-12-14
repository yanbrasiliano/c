#include <stdio.h>

//struct básico para entendimento do tópico.
int main()
{
	struct hour
	{
		int hours;
		int minutes;
		int seconds;
	};

	struct hour now;

	now.hours = 12;
	now.minutes = 10;
	now.seconds = 3;

	printf("%i:%i:%i\n\n", now.hours, now.minutes, now.seconds);

	printf("Press ENTER for exit!");

			getchar();

	return 0;
}