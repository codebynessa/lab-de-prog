/*Fa�a um programa que leia a quantidade atual em estoque, quantidade m�xima em estoque e
quantidade m�nima em estoque de um produto. O programa deve calcular e mostrar a quantidade
m�dia ((quantidade m�dia = quantidade m�xima + quantidade m�nima)/2). Se a quantidade em
estoque for maior ou igual a quantidade m�dia escrever a mensagem �N�o efetuar compra�, sen�o
escrever a mensagem �Efetuar compra�.*/


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

