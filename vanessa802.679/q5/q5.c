//Fa�a um programa para ler um vetor de 10 n�meros inteiros e, em seguida, calcular
//e mostrar a quantidade de n�meros que s�o pares.

#include <stdio.h>
void main() {
    // Declara um vetor de 10 inteiros para armazenar os n�meros
    int numeros[10];
    // Declara uma vari�vel para contar a quantidade de n�meros pares
    int contadorPares = 0;
    // Declara uma vari�vel de controle para os loops
    int i;

    // Solicita ao usu�rio para digitar 10 n�meros inteiros
    printf("Digite 10 n�meros inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("N�mero %d: ", i + 1);
        scanf("%d", &numeros[i]); // L� e armazena cada n�mero no vetor
    }

    // Loop para contar quantos n�meros pares existem no vetor
    for (i = 0; i < 10; i++) {
        if (numeros[i] % 2 == 0) {
            contadorPares++; // Incrementa o contador se o n�mero for par
        }
    }

    // Exibe a quantidade de n�meros pares no vetor
    printf("A quantidade de n�meros pares no vetor �: %d\n", contadorPares);

}

