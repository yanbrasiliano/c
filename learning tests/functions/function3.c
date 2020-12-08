#include <stdio.h>

int varglobal = 2;

void test(void)
{

    int variavellocalautomatica = 5;
    variavellocalautomatica *= 3;

    static int variavellocalstatic = 5;
    variavellocalstatic *= 3;

    varglobal *= 5;

    printf("Local Automático >> %i\n", variavellocalautomatica);
    printf("Local Estático >> %i\n", variavellocalstatic);
    printf("Global >> %i\n", varglobal);
}

int main(void)
{
    // programa para testar static nas funções.

    printf("Global >> %i\n", varglobal);
    test();
    test();

    return 0;
}
