#include <stdio.h>//Inclusão de biblioteca

void main () //Função Principal
{
    int N, fatorial, i; //Declaração de variáveis

    fatorial = 1; //Inicializa as variáveis fatorial e i com UM

    printf("\nInforme o numero para o fatorial: ");
    scanf("%d", &N); //Leitura do número

    for(i = 1; i <= N; i++) //Executa enquanto o i for menor ou igual a 10
    {
        fatorial = fatorial * i; //Calcula o fatorial
    }

    printf("\nFatorial : %d\n\n", fatorial); //Mostra o fatorial calculado
}
