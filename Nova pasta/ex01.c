#include <stdio.h>

void main() {
    int m, n;

    // Solicitando ao usu�rio o n�mero de linhas e colunas da matriz
    printf("\nDigite o n�mero de linhas da matriz (m): ");
    scanf("%d", &m);
    printf("\nDigite o n�mero de colunas da matriz (n): ");
    scanf("%d", &n);

    float A[m][n];  // Definindo a matriz A
    float V[n];     // Definindo o vetor V
    float R[m];     // Definindo o vetor resultado R

    // Solicitando ao usu�rio para inserir os elementos da matriz A
    printf("\nDigite os elementos da matriz A:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("\nA[%d][%d]: ", i, j);
            scanf("%f", &A[i][j]);
        }
    }

    // Solicitando ao usu�rio para inserir os elementos do vetor V
    printf("\nDigite os elementos do vetor V:\n");
    for (int j = 0; j < n; j++) {
        printf("\nV[%d]: ", j);
        scanf("%f", &V[j]);
    }

    // Calculando o produto da matriz A pelo vetor V
    for (int i = 0; i < m; i++) {
        R[i] = 0;  // Inicializando o elemento R[i]
        for (int j = 0; j < n; j++) {
            R[i] += A[i][j] * V[j];
        }
    }

    // Imprimindo o vetor resultado R
    printf("\nO produto da matriz A pelo vetor V: \n");
    for (int i = 0; i < m; i++) {
        printf("%f\n", R[i]);
    }

}
