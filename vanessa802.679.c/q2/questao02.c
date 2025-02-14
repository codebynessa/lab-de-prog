/*Faça um programa que calcule e apresente o valor do volume de uma lata de óleo, utilizando a
fórmula:
VOLUME = 3.14159 * RAIO2* ALTURA.*/

#include<stdio.h>
void main()

{
    float raio, altura, volume;
    printf("\n Informe o raio: ");
    scanf("%g", &raio);
    printf("\n Informe a altura: ");
    scanf("%g", &altura);

    volume = 3.14159 * raio * raio * altura;

    printf("\n O volume da lata de óleo é :%g \n", volume);



}

