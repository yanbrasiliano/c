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
		scanf("%i:%i:%i", &list[i].hour,
					 							&list[i].minutes,
												 &list[i].seconds);
		
	}
}	

void printHour(struct hour list[5]){
	
	for (x = 0 ; x < 5; x++) {
		printf("\nThe %i° is -> %i:%i:%i ", x + 1 
		 												&list[i].hour,
					 									&list[i].minutes,
												 		&list[i].seconds);


}

int main(void)
{

	struct hour list[5];
	int x;

	recHours(list);
	printHour(list);

	return 0;
}