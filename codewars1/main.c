#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

bool interface(char base[5]);
int getLoop(char arr[5]);
int individualInt(char unico);
bool numeroNarcisista(int total, int entrada);

bool numeroNarcisista(total, entrada){

    bool VouF;

    if(total == entrada){
        VouF = true;
    } else {
        VouF = false;
    }

    return VouF;
}

int individualInt(char unico){

    int numero_inteiro;
    numero_inteiro = unico - '0';

    return numero_inteiro;
}

int getLoop(char arr[5]){

    int len_str, i;
    len_str = strlen(arr);

    int individual_int;
    int total = 0, valor = 0;
    char que_vai[5];

    strcpy(que_vai, arr);

    for(i=0; i<len_str; i++){
        individual_int = individualInt(que_vai[i]);
        valor = pow(individual_int, len_str);
        total += valor;
    };

    return total;
}

bool interface(char base[5]){

    bool resposta;
    int total;
    int entrada;
    char base_copy[5];

    // faz uma copia de base
    strcpy(base_copy, base);

    // chama a funcao getLoop, que retorna o valor total da soma das potencias das unidades
    total = getLoop(base);

    // converte a cópia de base para inteiro
    entrada = atoi(base_copy);

    // chama a funcao NumeroNarcisista para conferir se total bate com entrada e retorna um bool
    resposta = numeroNarcisista(total, entrada);

    return resposta;
}

int main()
{
    char arr[5];
    char copia_arr[5];
    bool response;

    // recebe uma entrada do usuário: um numero em formato string
    fgets(arr, 6-1, stdin);

    // faz uma cópia da entrada do usuário
    strcpy(copia_arr, arr);

    // funcao que chama a interface do programa e retorna um bool
    response = interface(copia_arr);

    if(response == true){
        printf("True");
    } else {
        printf("False");
    };

    return 0;
}
