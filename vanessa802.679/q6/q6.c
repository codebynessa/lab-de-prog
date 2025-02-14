//Fa�a um programa para ler um vetor de 10 n�meros inteiros aleat�rios e, em
//seguida, determinar e mostrar o maior valor do vetor.

#include <stdio.h>
void main() {
    // Declara um vetor de 10 inteiros para armazenar os n�meros
    int numeros[10];
    // Declara uma vari�vel para armazenar o maior valor
    int maiorValor;
    // Declara uma vari�vel de controle para os loops
    int i;

    // Inicializa o gerador de n�meros aleat�rios com a semente baseada no tempo atual
    srand(time(0));

    // Gera e armazena 10 n�meros inteiros aleat�rios no vetor
    printf("Vetor de numeros inteiros aleatorios:\n");
    for (i = 0; i < 10; i++) {
        numeros[i] = rand() % 100; // Gera um n�mero aleat�rio entre 0 e 99
        printf("%d ", numeros[i]); // Exibe o n�mero gerado
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

