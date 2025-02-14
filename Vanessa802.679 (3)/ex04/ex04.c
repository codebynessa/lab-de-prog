/*Faça um programa que leia uma lista de números cujo último número é zero. Ao
final, o programa deverá mostrar a soma de todos os números múltiplos de cinco da
lista.*/
#include<stdio.h>
void main()
{
    int numero, total_numeros = 0;
    float soma = 0.0, media;

    // Loop para ler os números até que seja digitado zero
    do {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero != 0) {
            soma += numero;  // Adiciona o número à soma
            total_numeros++;  // Incrementa o total de números
        }

    } while (numero != 0);

    // Calcula a média dos números (soma / total_numeros)
    if (total_numeros > 0) {
        media = soma / total_numeros;
        printf("A media dos numeros digitados é: %.2f\n", media);
    } else {
        printf("Nenhum numero foi digitado.\n");
    }

}
