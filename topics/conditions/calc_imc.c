#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

// programa para calcular IMC
char name[30];
float weight,height,bmi;
int resp;

do {
system ("clear"); // apenas para gnu/linux
printf("\n\nEnter your name: ");
fgets(name,30,stdin);
name[strlen(name)-1] = '\0'; //remover o \n que ficou da leitura com fgets


system ("clear"); // apenas para gnu/linux
printf("\nHello %s, enter your weight in metro: ",name);
scanf("%f",&weight);
getchar();

system ("clear"); // apenas para gnu/linux
printf("\nNow, enter your height in kilogram: ");
scanf("%f",&height);
getchar();

bmi = height / (weight * weight);

if (bmi < 18.5) {

printf("\nHeight: %f \nYou're below the BMI!",bmi);

}else if(bmi >= 18.5 && bmi <= 24.9) {

printf("\nHeight: %f \nYour BMI is normal.",bmi);

}else if (bmi >= 24.9 && bmi <= 30){

printf("\nHeight: %f \nBe careful, you're overweight! ",bmi);

}else if (bmi > 30){

printf("\nHeight: %f, \nSee a doctor, your BMI points to obesity!\n\n",bmi);
}

printf("\n1- New Consultation ");
printf("\n2- Exit ");
printf("\nChoose option: ");
scanf("%d", &resp);
}while (resp != 2);

return 0;
} 
