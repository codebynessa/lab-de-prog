/*A fábrica de refrigerantes Meia-Cola vende seu produto em três formatos: lata de 350 ml,
garrafa de 600 ml e garrafa de 2 litros. Faça um programa que leia uma determinada
quantidade de refrigerante de cada formato e calcule a quantidade de litros de refrigerante que
foram vendidos.*/

#include<stdio.h>
void main()

{
    float lata, g1, g2, litros;
    printf("\n Informe a quantidade de latas de 350ml: ");
    scanf("%g", &lata);
    printf("\n Informe a quantidade de garrafas de 600ml : ");
    scanf("%g", &g1);
    printf("\n Informe a quantidade de garrafas de 2 litros : ");
    scanf("%g", &g2);


    litros = lata*0.35 + g2*0.6 + g2*2;

    printf("\n Foram vendidos %g litros. \n", litros);


}

