//Faça um programa para ler um vetor de 10 números inteiros aleatórios e, em
//seguida, determinar e mostrar o maior valor do vetor.

#include <stdio.h>
void main() {
    // Declara um vetor de 10 inteiros para armazenar os números
    int numeros[10];
    // Declara uma variável para armazenar o maior valor
    int maiorValor;
    // Declara uma variável de controle para os loops
    int i;

    // Inicializa o gerador de números aleatórios com a semente baseada no tempo atual
    srand(time(0));

    // Gera e armazena 10 números inteiros aleatórios no vetor
    printf("Vetor de numeros inteiros aleatorios:\n");
    for (i = 0; i < 10; i++) {
        numeros[i] = rand() % 100; // Gera um número aleatório entre 0 e 99
        printf("%d ", numeros[i]); // Exibe o número gerado
    }
    printf("\n");

    // Inicializa o maior valor com o primeiro elemento do vetor
    maiorValor = numeros[0];

    // Loop para encontrar o maior valor no vetor
    for (i = 1; i < 10; i++) {
        if (numeros[i] > maiorValor) {
            maiorValor = numeros[i]; // Atualiza o maior valor se encontrar um valor maior
        }
    }

    // Exibe o maior valor encontrado
    printf("O maior valor no vetor: %d\n", maiorValor);

}

