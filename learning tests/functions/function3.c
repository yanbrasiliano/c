#include <stdio.h>

void test(void)
{

    int variavellocalautomatica = 5;
     variavellocalautomatica*= 3;

    static int variavellocalstatic = 5;
    variavellocalstatic *= 3 ;

    printf("Local Automático >> %i\n",variavellocalautomatica);
    printf("Local Estático >> %i\n",variavellocalstatic);

}

int main(void)
{
    // programa para testar static nas funções.
   
    test();
    test();
    test();


    return 0;
}
