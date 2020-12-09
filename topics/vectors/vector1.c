#include <stdio.h>
#include <string.h>

int main(void){

// programa para testar vetores/calcular média.
char name [20];
float note [3];
float average = 0;
float total = 0;

printf("\nname: ");
fgets(name,20,stdin); // entrada de string padrão.
name[strlen(name)-1] = '\0'; //remover o \n que ficou da leitura com fgets

     
for (int i = 0; i < 3; ++i){
     printf("\ntype notes: "); // entrada das notas do aluno.
    scanf("%f", &note[i]);
    getchar(); 

}

for (int i = 0; i < 3; i++){
    total+= note[i]; // somando para achar o total.
}


average = total / 3; // lógica da média.


printf("\n%s average is: %.2f\n", name,average);
name[strlen(name)-1] = '\0'; //remover o \n que ficou da leitura com fgets

printf("Press enter for exit!");
getchar(); // press enter for exit.
return 0;

}   