#include <stdio.h> 


int main(void) {
int n,i,r = 0;
//programa para descobrir números primos.
printf("Hello,enter your number: ");
scanf("%d",&n);
// Este programa dirá se o número é primo ou não.
 for (i = 2; i <= n/2; i++) {
    if(n % i == 0) {
   r++;
   break;
   }
 }
if (r == 0){
printf("%d is prime number!\n\n",n);
} else {
printf("%d is no prime number!\n\n",n);
}

return 0; 

}
