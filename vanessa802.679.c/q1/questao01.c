/*Faça um programa que leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a
expressa apenas em dias. Obs: Considere todos os meses com 30 dias.*/


#include<stdio.h>
void main()

{
    int idade, anos, meses, dias;
    printf("\n Informe a idade: ");
    scanf("%d", &anos);
    printf("\n Informe os meses: ");
    scanf("%d", &meses);
    printf("\n Informe os dias: ");
    scanf("%d", &dias);

    idade = dias + (anos * 365) + (meses*30);

    printf("\n Sua idade em dias é:%d\n", idade);



}
