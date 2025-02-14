/*Faça um programa que leia a quantidade atual em estoque, quantidade máxima em estoque e
quantidade mínima em estoque de um produto. O programa deve calcular e mostrar a quantidade
média ((quantidade média = quantidade máxima + quantidade mínima)/2). Se a quantidade em
estoque for maior ou igual a quantidade média escrever a mensagem “Não efetuar compra”, senão
escrever a mensagem “Efetuar compra”.*/


#include<stdio.h>
void main()
{
    int atual, max, min, med;
    printf("\n Informe a quantidade atual: ");
    scanf("%d", &atual);
    printf("\n Informe a quantidade maxima: ");
    scanf("%d", &max);
    printf("\n Informe a quantidade minima: ");
    scanf("%d", &min);

    med = (max + min)/2;

    if(atual >= med)
    {
        printf("Nao efetuar compra");
    }
    else{
        printf("Efetuar compra");
    }
}

