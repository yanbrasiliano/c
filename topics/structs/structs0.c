#include <stdio.h>

//struct básico para entendimento do tópico.

struct hour
{
	int hours;
	int minutes;
	int seconds;
};


int main(void)
{

	struct hour test(struct hour x);

	struct hour now;
	now.hours = 12;
	now.minutes = 10;
	now.seconds = 3;
	
	struct hour after;
	after = test(now);

	printf("%i:%i:%i\n", now.hours, now.minutes, now.seconds);
	printf("%i:%i:%i\n", after.hours, after.minutes, after.seconds);

	printf("Press ENTER for exit!");

	getchar();

	return 0;

}

struct hour test(struct hour x)
{

//printf("%i:%i:%i\n", x.hours,x.minutes,x.seconds);

x.hours = 10;
x.minutes = 5;
x.seconds = 3;

	return x;
}