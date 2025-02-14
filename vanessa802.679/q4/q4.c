//Faça um programa para ler um vetor de 10 números inteiros, como também, ler um
//número inteiro x. A seguir, o programa deve calcular e mostrar quantas vezes o
//número x aparece no vetor.
#include <stdio.h>

void main() {
    // Declara um vetor de 10 inteiros para armazenar os números
    int numeros[10];
    // Declara uma variável para armazenar o número x
    int x;
    // Declara uma variável para contar quantas vezes x aparece no vetor
    int contador = 0;
    // Declara uma variável de controle para os loops
    int i;

    // Solicita ao usuário para digitar 10 números inteiros
    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]); // Lê e armazena cada número no vetor
    }

    // Solicita ao usuário para digitar o número x
    printf("Digite um número inteiro (x): ");
    scanf("%d", &x);

    // Loop para contar quantas vezes x aparece no vetor
    for (i = 0; i < 10; i++) {
        if (numeros[i] == x) {
            contador++; // Incrementa o contador se x for encontrado no vetor
        }
    }

    // Exibe o número de vezes que x aparece no vetor
    printf("O número %d aparece %d vezes no vetor.\n", x, contador);
}

