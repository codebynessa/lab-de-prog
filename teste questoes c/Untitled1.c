//Construa um programa que leia dez n�meros inteiros e identifique o maior n�mero

#include <stdio.h>

void main() {
    int i, numero, maior_numero;

    // Inicializa a vari�vel para armazenar o maior n�mero
    printf("\nDigite o 1o numero: ");
    scanf("%d", &numero);
    maior_numero = numero;

    // L� os outros nove n�meros inteiros do usu�rio
    for (i = 1; i < 10; i++) {
        printf("\n Digite o %d numero: ", i+1);
        scanf("%d", &numero);

        // Atualiza o maior n�mero se o n�mero atual for maior que o maior n�mero atual
        if (numero > maior_numero) {
            maior_numero = numero;
        }
    }

    // Exibe o maior n�mero
    printf("\nO maior numero digitado e: %d\n", maior_numero);

}
