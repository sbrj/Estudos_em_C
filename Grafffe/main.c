#include <stdio.h>
#include <stdlib.h>


char funcaoRetorno(char que_chega[20]){
    printf("%s\n", que_chega);
    que_chega = "que vai";
    return strcpy(que_chega, que_chega);
}

int main()
{
    /* Comentários em C

    C não é uma lingua indentada. pode escrever onde quiser, o que quiser!

    Constants não podem ser modificados - como uma tupla em python e deve estar toda em MAIUSCULA

    no 'scanf' o caracter & só é necessário quando trabalhar com números, inteiros ou float


    char characterName[] = "Luana";
    int characterAge = 35;
    double characterFloat = 40.00;
    const int CONSTANT = 20;
    int ageInput;
    double notaFloat;
    char simple;
    char name[20];


    printf("Hello world!, my name is %s\n", characterName);
    printf("And my age is %i\n", characterAge);
    printf("E a cinturinha é %f\n", characterFloat);
    printf("Meu %s favorito e o: %d e %i e %f\n", "numero", 500, 250, 199.99);
    printf("Caracteres que não podem mudar %d\n", CONSTANT);
    printf("Digite a nota: ");
    scanf("%lf", &notaFloat);
    printf("Sua nota é %f\n", notaFloat);
    printf("Digite sua idade: ");
    scanf("%d", &ageInput);
    printf("Sua idade e: %d\n", ageInput);

    printf("Digite um caracter  simples: ");
    scanf("%c", &simple);
    printf("Seu caracter e %c\n", simple);
    printf("Digite seu nome: ");
    scanf("%s", name);
    printf("Seu nome e %s", name);


    */
    /*
    char color[20];
    char pluralNoun[20];
    char nome[20];

    printf("Digite seu nome: ");
    fgets(nome, 20, stdin);
    printf("Enter a color: ");
    scanf("%s", color);
    printf("Enter a plural noun: ");
    scanf("%s", pluralNoun);
    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I fucking dont care about %s", nome);

    */

    char retorna[20];
    int numeros[] = {2,5,7,8,9};
    numeros[0] = 4;
    printf("%d\n", numeros[0]);
    nova_funcao("Say Hi", 40);


    strcpy(retorna, funcaoRetorno("filho"));
    printf("%s", retorna);

    statement(6,3);
    return 0;
}

void nova_funcao(char arg[], int num){
    printf("%s -- %d\n", arg, num);
}

void statement(int num1, int num2){
    if(!num1<num2){
        printf("Num 1 > que num 2");
    }
}


