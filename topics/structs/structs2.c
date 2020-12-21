#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//programa para exemplificar uma forma diferente de chamar struct.

struct contact
{ // agenda.

	char name[20];
	char email[50];
	int age;
};

struct schedule
{
	struct contact contacts[100];
} x; // variável declarada.

int main(void)
{

	for (int i = 0; i < 3; ++i)
	{

		printf("\nName -> ");
		fgets(x.contacts[i].name, 20, stdin);

		printf("\nEmail -> ");
		fgets(x.contacts[i].email, 100, stdin);

		printf("\nAge -> ");
		scanf("%i", &x.contacts[i].age);
		getchar();
		printf("\n\n");
	}
	for (int i = 0; i < 3; ++i)
	{
				printf("=====================================\n");
		printf("Name >> %s", strtok (x.contacts[i].name, "\n"));
		printf("\n");
		printf("Email >> %s", strtok (x.contacts[i].email, "\n"));
		printf("\n");
		printf("Age >> %i", x.contacts[i].age);
		printf("\n");
	}
	return 0;
}