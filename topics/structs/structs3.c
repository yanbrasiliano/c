#include <stdio.h>

union numbers
{
	int num1, num2, num3, num4;
} n;

int main(void)
{
	int soma = 0;

	printf("\tENUM 1.0\n\n");
	n.num1 = 2;
	soma = soma + n.num1;
	printf("Value 'num1' is %d\n", n.num1);
	n.num2 = 4;
	soma = soma + n.num2;
	printf("Value 'num2' is %d\n", n.num2);
	n.num3 = 6;
	soma = soma + n.num3;
	printf("Value 'num3' is %d\n", n.num3);
	n.num4 = 8;
	soma = soma + n.num4;
	printf("Value 'num4' is %d\n", n.num4);
	
	printf("\n");

	printf("\tENUM 2.0\n\n");

	printf("Value 'num1' is %d\n", n.num1);
	printf("Value 'num2' is %d\n", n.num2);
	printf("Value 'num3' is %d\n", n.num3);
	printf("Value 'num4' is %d\n", n.num4);
	
	printf("\n");
	printf("Sum is: %d\n", soma);
	printf("Takes up the space 'n' is %ld\n", sizeof(n));
	printf("Total memory occupied is: %ld\n\n", sizeof(n) + sizeof(soma));

	return 0;
}