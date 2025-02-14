//Construa um programa que leia dez números inteiros e identifique o maior número

#include <stdio.h>

void main() {
    int i, numero, maior_numero;

    // Inicializa a variável para armazenar o maior número
    printf("\nDigite o 1o numero: ");
    scanf("%d", &numero);
    maior_numero = numero;

    // Lê os outros nove números inteiros do usuário
    for (i = 1; i < 10; i++) {
        printf("\n Digite o %d numero: ", i+1);
        scanf("%d", &numero);

        // Atualiza o maior número se o número atual for maior que o maior número atual
        if (numero > maior_numero) {
            maior_numero = numero;
        }
    }

    // Exibe o maior número
    printf("\nO maior numero digitado e: %d\n", maior_numero);

}
