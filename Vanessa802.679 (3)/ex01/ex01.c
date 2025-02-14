/*Faça um programa que leia a altura de 10 pessoas e calcule e mostre quantas destas
pessoas possui altura maior que 1.80m.*/

#include<stdio.h>
void main()
{
    float altura; /*para armazenar a altura de cada pessoa*/
    int cont = 0; /*para contar quantas pessoas têm altura maior que 1,80m*/
    int i = 0; /* contador para o loop.*/

    /*solicita a altura de cada pessoa e verifica se é maior que 1,80m.*/
    do {
        i++;
        printf("\nDigite a altura da pessoa %d: ", i);
        scanf("%f", &altura);

        if (altura > 1.80) { /*se a altura é maior que 1,80m, incrementa cont.*/
            cont++;
        }
    } while (i < 10); /*O loop é repetido enquanto i for menor que 10.*/

    printf("\nQuantidade de pessoas com altura maior que 1.80m: %d\n", cont);
}


