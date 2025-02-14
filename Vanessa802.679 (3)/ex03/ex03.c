/*Fa�a um programa que leia um n�mero inteiro positivo n e imprima a soma dos n
primeiros n�meros pares maiores do que zero (Por exemplo, se for informado n = 4, o
programa deve imprimir o valor 20, pois 2 + 4 + 6 + 8 = 20).*/

#include<stdio.h>
void main()
{
    int n, i = 0, numero = 0, soma = 0;

    // Solicita ao usu�rio um n�mero inteiro positivo
    printf("\n Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    // Verifica se o n�mero � positivo
    if (n <= 0) {
        printf("O numero deve ser positivo.\n");
        return 1; // Retorna 1 para indicar erro
    }

    // Encontra e soma os primeiros n n�meros pares maiores que zero
    while (i < n) {
        numero += 2;  // Incrementa o n�mero par
        soma += numero;  // Soma o n�mero par � vari�vel de soma
        i++;  // Incrementa o contador
    }

    printf("\n A soma dos %d primeiros numeros pares maiores que zero2: %d\n", n, soma);

}
