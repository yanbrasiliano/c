#include <stdio.h>

// teste para funções recursivas.

int fatorial(int x){
    
    int result;

    
    if (x == 0){

        result =1;

    }else {
        result = x * fatorial(x -1);
    }
    return result;
}

int main(void){

    int v;


    printf("type int number: ");
    scanf("%d", &v);

    int result = fatorial(v);

    printf("factorial %d is %d.\n\n", v,result);

    return 0;
}