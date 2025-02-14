//Fa�a um programa para ler, em um vetor, o peso de 10 pessoas e depois calcular e
//mostrar o menor peso dentre todos que foram lidos.

#include <stdio.h>

void main() {

    float pesos[10];
    float menorPeso;
    int i;

    printf("\nDigite os pesos de 10 pessoas:\n");   // Solicita ao usu�rio para digitar os pesos de 10 pessoas

    for (i = 0; i < 10; i++) {     // Loop para ler os 10 pesos e armazen�-los no vetor

        printf("Peso %d: ", i + 1);
        scanf("%f", &pesos[i]); // L� e armazena cada peso no vetor
    }

    // Inicializa o menor peso com o primeiro elemento do vetor
    menorPeso = pesos[0];

    // Loop para encontrar o menor peso no vetor
    for (i = 1; i < 10; i++) {
        // Se o peso atual � menor que o menor peso conhecido, atualiza o menor peso
        if (pesos[i] < menorPeso) {
            menorPeso = pesos[i]; // Atualiza o menor peso
        }
    }

    // Exibe o menor peso encontrado
    printf("\nO menor peso �: %.2f\n", menorPeso);

}
