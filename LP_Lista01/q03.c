//Leia dois números inteiros e calcule e mostre a soma de seus quadrados.
#include<stdio.h>
void main()
{
    int n1, n2, soma;
    printf("\n Escreva os numero inteiros: ");
    scanf("%d %d", &n1,&n2);

    soma = (n1*n1)+(n2*n2);

    printf("\n A soma dos quadrados e: %d", soma);
}
