//Fa�a um programa para ler um vetor de 10 n�meros inteiros, como tamb�m, ler um
//n�mero inteiro x. A seguir, o programa deve calcular e mostrar quantas vezes o
//n�mero x aparece no vetor.
#include <stdio.h>

void main() {
    // Declara um vetor de 10 inteiros para armazenar os n�meros
    int numeros[10];
    // Declara uma vari�vel para armazenar o n�mero x
    int x;
    // Declara uma vari�vel para contar quantas vezes x aparece no vetor
    int contador = 0;
    // Declara uma vari�vel de controle para os loops
    int i;

    // Solicita ao usu�rio para digitar 10 n�meros inteiros
    printf("Digite 10 n�meros inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("N�mero %d: ", i + 1);
        scanf("%d", &numeros[i]); // L� e armazena cada n�mero no vetor
    }

    // Solicita ao usu�rio para digitar o n�mero x
    printf("Digite um n�mero inteiro (x): ");
    scanf("%d", &x);

    // Loop para contar quantas vezes x aparece no vetor
    for (i = 0; i < 10; i++) {
        if (numeros[i] == x) {
            contador++; // Incrementa o contador se x for encontrado no vetor
        }
    }

    // Exibe o n�mero de vezes que x aparece no vetor
    printf("O n�mero %d aparece %d vezes no vetor.\n", x, contador);
}

