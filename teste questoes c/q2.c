#include <stdio.h>//Inclus�o de biblioteca

void main () //Fun��o Principal
{
    int N, fatorial, i; //Declara��o de vari�veis

    fatorial = 1; //Inicializa as vari�veis fatorial e i com UM

    printf("\nInforme o numero para o fatorial: ");
    scanf("%d", &N); //Leitura do n�mero

    for(i = 1; i <= N; i++) //Executa enquanto o i for menor ou igual a 10
    {
        fatorial = fatorial * i; //Calcula o fatorial
    }

    printf("\nFatorial : %d\n\n", fatorial); //Mostra o fatorial calculado
}
