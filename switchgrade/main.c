#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade = 'B';

    switch(grade){
    case 'A' :
        printf("Mandou bem!");
        break;
    case 'B':
        printf("mandou B");
        break;
    default :
        printf("N�o acertou o lance!")
    }

    return 0;
}
