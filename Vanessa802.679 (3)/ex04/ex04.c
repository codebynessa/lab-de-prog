/*Fa�a um programa que leia uma lista de n�meros cujo �ltimo n�mero � zero. Ao
final, o programa dever� mostrar a soma de todos os n�meros m�ltiplos de cinco da
lista.*/
#include<stdio.h>
void main()
{
    int numero, total_numeros = 0;
    float soma = 0.0, media;

    // Loop para ler os n�meros at� que seja digitado zero
    do {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero != 0) {
            soma += numero;  // Adiciona o n�mero � soma
            total_numeros++;  // Incrementa o total de n�meros
        }

    } while (numero != 0);

    // Calcula a m�dia dos n�meros (soma / total_numeros)
    if (total_numeros > 0) {
        media = soma / total_numeros;
        printf("A media dos numeros digitados �: %.2f\n", media);
    } else {
        printf("Nenhum numero foi digitado.\n");
    }

}
