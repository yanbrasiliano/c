#include <stdio.h>
#include <stdlib.h>

void Date(int day, int month, int year);
//programa recebe data e retorna ela por extenso.
int main(void){
	int day, month, year;
	
	printf("\nDay(1-31): ");
	scanf("%i", &day);

	//limpa o buffer de entrada.
     getchar();

	printf("\nMonth(1-12): ");
	scanf("%i", &month);
    
    //limpa o buffer de entrada.
    getchar();

	printf("\nYear(xxxx): ");
	scanf("%i", &year);

	Date(day, month, year);

	return 0;
}

void Date(int day, int month, int year){
	const char* months[] = {"January", "February", "March", "April",
                               "May", "June", "July", "August",
                               "Setember", "October", "November", "December"};
    system ("clear"); //gnu-linux

	printf("The Date is: %s %dth, %d\n", months[month - 1], day , year);

   
}