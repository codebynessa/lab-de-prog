/*Um determinado restaurante cobra R$ 60,00 por cada quilo de refeição. Faça um programa
que leia o peso do prato servido pelo cliente (em quilos) e mostre o valor a pagar. */

#include<stdio.h>
void main()

{
    float kg, total;
    printf("\n Informe o peso em kg: ");
    scanf("%g", &kg);

    total = 60 * kg;

    printf("\n O valor a ser pago R$:%g \n", total);


}

