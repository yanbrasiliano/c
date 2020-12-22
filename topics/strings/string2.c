#include <stdio.h>

int main(void){

void concatString(char s1[], char s2[], char s3[], int t1, int t2);

char p1 [] = {'H', 'e', 'l','l','o', ' '};
char p2 [] = {'W','o','r','l','d'};
char nWord [11];


concatString (p1,6,p2,5,nWord);

for (int i = 0; i < 11; i++){

printf("%c", nWord[i]);

}


printf("\n");

	return 0;

}


void concatString(char s1[], char s2[], char s3[], int t1, int t2){

int i,j;

	for (i = 0; i < t1 ; ++i){
	s3[i] = s1[i];
	}
	for (j = 0; j < t2 ; ++j){
	s3[t1 + j] = s2[j];
	}

}