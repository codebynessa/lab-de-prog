// Fa�a um programa para ler um vetor de 10 n�meros inteiros e depois exibi-lo em
//ordem inversa.

#include <stdio.h>
void main() {

    int numeros[10];
    int i;

    // Solicita ao usu�rio para digitar 10 n�meros inteiros
    printf("Digite 10 n�meros inteiros:\n");
    // Loop para ler os 10 n�meros e armazen�-los no vetor
    for (i = 0; i < 10; i++) {
        printf("N�mero %d: ", i + 1);
        scanf("%d", &numeros[i]); // L� e armazena cada n�mero no vetor
    }

    // Exibe os n�meros em ordem inversa
    printf("Os n�meros em ordem inversa s�o:\n");
    for (i = 9; i >= 0; i--) {
        printf("%d ", numeros[i]); // Exibe cada n�mero do vetor em ordem inversa
    }
    printf("\n"); // Adiciona uma nova linha ap�s a exibi��o dos n�meros

}
