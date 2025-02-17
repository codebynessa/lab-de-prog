/*Faça um programa que leia o valor do salário de uma pessoa e o valor de um financiamento
pretendido. Caso o financiamento seja menor ou igual a 5 vezes o salário da pessoa, o programa
deverá escrever “Financiamento Concedido”, caso contrário ele deverá escrever “Financiamento
Negado”.*/


#include<stdio.h>
void main()
{
    float sal, fin;
    printf("\n informe o valor do seu salario: ");
    scanf("%g", &sal);
    printf("\n informe o valor do financiamento: ");
    scanf("%g", &fin);
    if(fin<=5*sal)
    {
        printf("\nfinanciamento concedido");
    }
    else{
        printf("\nfinanciamento negado");
    }
}

