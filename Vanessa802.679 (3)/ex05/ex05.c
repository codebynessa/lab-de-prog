/*Tentando descobrir se um dado era viciado, um dono de cassino o lançou 15 vezes.
Para ajuda-lo, faça um programa que leia os 15 resultados dos lançamentos efetuados e
calcule o número de ocorrências de cada face.*/

#include<stdio.h>
void main()
{

int resultados[6] = {0}; // Array para armazenar o número de ocorrências de cada face (índices de 0 a 5)
    int lancamentos = 0; // Contador de lançamentos
    int resultado;

    // Loop para ler os resultados dos lançamentos
    while (lancamentos < 15) { // Continua enquanto não foram feitos 15 lançamentos
        lancamentos++; // Incrementa o contador de lançamentos
        printf("\nDigite o resultado do %do lancamento: ", lancamentos);
        scanf("%d", &resultado);

        // Verifica se o resultado é válido (de 1 a 6) e incrementa o contador correspondente
        if (resultado >= 1 && resultado <= 6) {
            resultados[resultado - 1]++; // Incrementa o contador da face correspondente (índice - 1)
        } else {
            printf("\nResultado invalido. Digite um numero de 1 a 6.\n");
            lancamentos--; // Decrementa o contador para repetir a leitura deste lançamento
        }
    }

    // Exibe o número de ocorrências de cada face
    for (int i = 0; i < 6; i++) {
        printf("\nFace %d: %d ocorrencias \n", i + 1, resultados[i]); // Exibe o número de ocorrências da face (índice + 1)
    }

}
