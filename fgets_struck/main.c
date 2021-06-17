#include <stdio.h>
//#include <conio.h> // not portable, do not use
#include <stdlib.h>

/*
Programa realiza uma alocacao dinamica por meio
de uma funcao que recebe a dimensao e retorna o vetor(ponteiro)
*/

#define NUM_CPF      (11)
#define MAX_NOME_LEN (50)

struct CLIENTES
{
    int ano_nasc;
    int cpf[NUM_CPF];
    float renda_m;
    char nome[ MAX_NOME_LEN ];
}; //Lista de Objetos

void soErros(char erro[20]){

    perror(erro);
    exit( EXIT_FAILURE );

}

int main(void)
{
    //Declaracao de Variaveis
    int cont=0;
    int num;
    int client, saida;
    int i;
    int j;
    int k;
    struct CLIENTES *vet = NULL;

    //Leitura de Dados
    printf("Digite o numero de Clientes: ");
    if( 1 != scanf("%d", &num) )
    { // scanf failed
        soErros("scanf for num failed" );
    }

    // implied else, scanf successful

    // clear stdin
    while( getchar() != '\n' );

    if( NULL == (vet = malloc(num*sizeof(struct CLIENTES)) ) )
    { // then malloc failed
        soErros("malloc for multiple struct CLIENTES failed");
    }

    // implied else, malloc successful

    while (cont != num)
    {
        printf("\nNome: ");
        fflush(stdout);
        if( NULL == fgets(vet[cont].nome, MAX_NOME_LEN, stdin) )
        { // fgets failed
            soErros("fgets failed");
        }

        // implied else, fgets successful

       // clear stdin
       //while( getchar() != '\n' );

        printf("\nAno de Nascimento: ");
        if( 1 != scanf("%d", &vet[cont].ano_nasc) )
        { // scanf failed
            soErros("scanf for ano_nasc failed");
        }

        // implied else, scanf successful

        printf("\nCPF: ");
        if( 1 != scanf("%d", vet[cont].cpf) )
        { // scanf failed
            soErros("scanf for cpf failed");
        }

        // implied else, scanf successful

        printf("\nRenda Mensal: ");
        if( 1 != scanf("%f", &vet[cont].renda_m) )
        { // scanf failed
            soErros("scanf for renda_m failed");
        }

        // implied else, scanf successful

        // clear stdin
        while( getchar() != '\n' );

        cont++;
    } // end while
    int escolha = 0;
    do{

        int *esc = &escolha;
        printf("\nDeseja saber sobre qual cliente?: ");

        for (i=0;i<num;i++)
        {
            printf("\n%d --- %s",i , vet[i].nome);
        } // end for

        if( 1 != scanf("%d", &esc) )
        { // scanf failed
            soErros("scanf for ano_nasc failed");
        } // end if

        printf("\nVocê escolheu o cliente %s", vet[escolha].nome);

        for(i=0;i<num;i++)
        {
            if(i == escolha){
                printf("\n0-Sair\n1-Nome\n2-Ano de Nascimento\n3-CPF\n4-Renda Mensal\n");
                if( 1 != scanf("%d", &client) )
                { // scanf failed
                    soErros("scanf for client failed");
                }

                // implied else, scanf successful

                switch( client )
                {
                case 0:
                    printf("Saindo do menu");
                    break;
                case 1:
                    printf("Nome: %49s", vet[i].nome );
                    break;

                case 2:

                    printf("Ano de Nascimento: %d", vet[i].ano_nasc );
                    break;

                case 3:
                    printf("CPF = ");
                    for(j=0; j< NUM_CPF; j++)
                    {
                        printf("%d", vet[i].cpf[j]);
                    }
                    printf( "\n" );
                    break;

                case 4:
                    printf("Renda Mensal: %f", vet[i].renda_m );
                    break;

                default:
                    printf("ERROR: invalid client value, range 1...4\n");
                    system("cls || clear");
                    break;
                }; // end switch
                printf( "\n" );
            } // end if
        } //end for
        printf("Continuar[1]\nSair[0]\n: ");
        if( 1 != scanf("%d", &saida) )
        {
            soErros("Erro de continuidade");
        } // end if

        switch( saida )
        {
        case 0:
            break;
        }
    } // end do
    while (saida);

    //Finalizando o Programa
    printf("\nFim do Programa!\n");
    free( vet );
    system( "pause" );
    return 0;
} // end function: main
