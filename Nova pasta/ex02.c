#include <stdio.h>

void main()
{
    // Definindo a matriz de custos (4x4 neste caso)
    int matriz[4][4] = {
        {4, 1, 2, 3},
        {5, 2, 1, 400},
        {2, 1, 3, 8},
        {7, 1, 2, 5}
    };

    // Definindo o vetor de itinerário
    int itinerario[] = {0, 3, 1, 3, 3, 2, 1, 0};
    int k = sizeof(itinerario) / sizeof(itinerario[0]); // Calcula o tamanho do itinerário

    int custo_total = 0;

    // Calculando o custo total do itinerário
    for (int i = 0; i < k - 1; i++) {
        int origem = itinerario[i];
        int destino = itinerario[i + 1];
        custo_total += matriz[origem][destino];
    }

    // Imprimindo o custo total
    printf("\nO custo total do itinerario e: %d\n", custo_total);

}
