/*Tentando descobrir se um dado era viciado, um dono de cassino o lan�ou 15 vezes.
Para ajuda-lo, fa�a um programa que leia os 15 resultados dos lan�amentos efetuados e
calcule o n�mero de ocorr�ncias de cada face.*/

#include<stdio.h>
void main()
{

int resultados[6] = {0}; // Array para armazenar o n�mero de ocorr�ncias de cada face (�ndices de 0 a 5)
    int lancamentos = 0; // Contador de lan�amentos
    int resultado;

    // Loop para ler os resultados dos lan�amentos
    while (lancamentos < 15) { // Continua enquanto n�o foram feitos 15 lan�amentos
        lancamentos++; // Incrementa o contador de lan�amentos
        printf("\nDigite o resultado do %do lancamento: ", lancamentos);
        scanf("%d", &resultado);

        // Verifica se o resultado � v�lido (de 1 a 6) e incrementa o contador correspondente
        if (resultado >= 1 && resultado <= 6) {
            resultados[resultado - 1]++; // Incrementa o contador da face correspondente (�ndice - 1)
        } else {
            printf("\nResultado invalido. Digite um numero de 1 a 6.\n");
            lancamentos--; // Decrementa o contador para repetir a leitura deste lan�amento
        }
    }

    // Exibe o n�mero de ocorr�ncias de cada face
    for (int i = 0; i < 6; i++) {
        printf("\nFace %d: %d ocorrencias \n", i + 1, resultados[i]); // Exibe o n�mero de ocorr�ncias da face (�ndice + 1)
    }

}
