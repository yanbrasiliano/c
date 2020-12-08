#include <stdio.h>


//programa receberá 2 números inteiros e calculará a soma dos pares do intervalo destes números e a multiplicação dos impáres do intervalo destes números.

int main() {

int n1 = 0,n2 = 0,impar = 1,par = 0;

printf("Enter first number: ");
scanf("%d",&n1);
printf("Enter second number: ");
scanf("%d",&n2);

int soma = n1 + n2;

if(n2<=n1){
printf("%d can't be bigger %d\n\n",n1,n2);
return 0;
}

if(soma % 2 == 0){
          printf("%d is PAR\n",soma);
}

else{
          printf("%d is IMPAR\n",soma);
}

for (int cont = n1; cont <= n2; cont++) {
        if (cont % 2 == 0) par += cont;
        else impar *= cont;
    }
    printf("The sum of par numbers is: %d\n", par);
    printf("The multiplication impar numbers is:%d\n", impar);

return 0;
}
