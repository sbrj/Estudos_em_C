#include <stdio.h>
#include <stdlib.h>

void funcaoApontada(int par);

int main()
{

    int (*functionPtr) = funcaoApontada;
    funcaoApontada(2);

    return 0;
}

void funcaoApontada(numero){
    if(numero%2==0){
        printf("é par");
    } else {
        printf("é impar");
    }
}
