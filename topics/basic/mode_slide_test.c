#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int n;
int main(void){
setlocale(LC_ALL, ("Portuguese"));
//programa cria um slide com texto pré determinado.
    printf("FOTOSSÍNTESE\n\n");
    printf("próximo...\n\n");
    scanf("%d", &n);

    system("clear");

    printf("A água e os sais minerais absorvidos pelas raízes sobem através dos vasos lenhosos do caule e chegam às folhas.\n\n");
    printf("próximo...\n\n");
    scanf("%d", &n);

    system("clear");

    printf("Nas folhas, existe uma substância verde, a clorofila, que absorve a energia luminosa do sol. Ao mesmo tempo, por meio dos estômatos presentes nas folhas, a planta absorve gás carbônico doar.\n\n");
    printf("próximo...\n\n");
    scanf("%d", &n);

    system("clear");

    printf("Usando a energia solar, o gás carbônico e o hidrogênio contido na água retirada do solo,após complicadas reações químicas, a planta produz açúcares (glicose).\n\n");
    printf("próximo...\n\n");
    scanf("%d", &n);

    system("clear");

    printf("FIM!\n\n");

return 0;
}
