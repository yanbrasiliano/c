#include <stdio.h>

struct hour // estrutura global
{
	int hours;
	int minutes;
	int seconds;
};

void recHours(struct hour list[5]){

	int x;

	for (x = 0 ; x < 5; x++) {
		printf("\nEnter %i° hour(hh:mm:ss) ->  ", x + 1 );
		scanf("%i:%i:%i", &list[x].hours,
					 							&list[x].minutes,
												 &list[x].seconds);
		
	}
}	

void printHour(struct hour list[5]){

	for (int x = 0 ; x < 5; x++) {
		printf("\nThe %i° is -> %i:%i:%i\n", x + 1 
		 												, list[x].hours,
					 									list[x].minutes,
												 		list[x].seconds);
	}


}

int main(void)
{

	struct hour list[5];
	int x;

	recHours(list);
	printHour(list);

	return 0;
}