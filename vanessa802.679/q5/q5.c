//Faça um programa para ler um vetor de 10 números inteiros e, em seguida, calcular
//e mostrar a quantidade de números que são pares.

#include <stdio.h>
void main() {
    // Declara um vetor de 10 inteiros para armazenar os números
    int numeros[10];
    // Declara uma variável para contar a quantidade de números pares
    int contadorPares = 0;
    // Declara uma variável de controle para os loops
    int i;

    // Solicita ao usuário para digitar 10 números inteiros
    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]); // Lê e armazena cada número no vetor
    }

    // Loop para contar quantos números pares existem no vetor
    for (i = 0; i < 10; i++) {
        if (numeros[i] % 2 == 0) {
            contadorPares++; // Incrementa o contador se o número for par
        }
    }

    // Exibe a quantidade de números pares no vetor
    printf("A quantidade de números pares no vetor é: %d\n", contadorPares);

}

