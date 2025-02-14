//Fa�a um programa para ler, em um vetor, a idade de 10 pessoas e depois calcular e
//mostrar quantas pessoas s�o �maior de idade� e quantas pessoas s�o �menor de
//idade�.

#include <stdio.h>

void main() {

    int idades[10];
    int maioresDeIdade = 0;
    int menoresDeIdade = 0;
    int i;

    // Solicita ao usu�rio para digitar as idades de 10 pessoas
    printf("Digite as idades de 10 pessoas:\n");
    // Loop para ler as 10 idades e armazen�-las no vetor
    for (i = 0; i < 10; i++) {
        printf("Idade %d: ", i + 1);
        scanf("%d", &idades[i]); // L� e armazena cada idade no vetor
    }

    // Loop para contar quantas pessoas s�o maior e menor de idade
    for (i = 0; i < 10; i++) {
        if (idades[i] >= 18) {
            maioresDeIdade++; // Incrementa o contador de maiores de idade
        } else {
            menoresDeIdade++; // Incrementa o contador de menores de idade
        }
    }

    // Exibe o n�mero de pessoas maior e menor de idade
    printf("N�mero de pessoas maior de idade: %d\n", maioresDeIdade);
    printf("N�mero de pessoas menor de idade: %d\n", menoresDeIdade);

}

