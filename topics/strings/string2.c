#include <stdio.h>


int tString(char string[]){

	int numString = 0;


	while (string[numString] != '\0'){
		numString++;

	}
	return numString;
}

int main(void){

int tString(char string[]);
char name[20];




printf("type word(string): ");
scanf("%s", &name);


int num = tString(name);

printf(" The %s have %i chars. \n",name, num);

return 0;

}