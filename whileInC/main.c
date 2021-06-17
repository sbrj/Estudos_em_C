#include <stdio.h>
#include <stdlib.h>

int main()
{

    int secretNumber = 5;
    int guess;
    int guesscount = 0;
    int guesslimit = 3;
    int outofguesses = 0;
    int i;
    int numeros[] = {1,2,3,4,5,6};
    printf("Welcome to the game\n");
    printf("You have 3 shoots to try\n");
    while(guess != secretNumber && outofguesses == 0){
            if(guesscount < guesslimit){
                    printf("Entre com um numero: ");
                    scanf("%d", &guess);
                    guesscount++;
            }
            else {
                outofguesses = 1;
            }
    }

    if (outofguesses == 1){
                printf("out of %d\n", outofguesses);
            }

    for(i = 1; i<=5; i++){
        printf("%d\n", numeros[i]);
    }

    return 0;
}
