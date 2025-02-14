// Faça um programa para ler um vetor de 10 números inteiros e depois exibi-lo em
//ordem inversa.

#include <stdio.h>
void main() {

    int numeros[10];
    int i;

    // Solicita ao usuário para digitar 10 números inteiros
    printf("Digite 10 números inteiros:\n");
    // Loop para ler os 10 números e armazená-los no vetor
    for (i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]); // Lê e armazena cada número no vetor
    }

    // Exibe os números em ordem inversa
    printf("Os números em ordem inversa são:\n");
    for (i = 9; i >= 0; i--) {
        printf("%d ", numeros[i]); // Exibe cada número do vetor em ordem inversa
    }
    printf("\n"); // Adiciona uma nova linha após a exibição dos números

}
