/*Fa�a um programa que leia o valor do sal�rio de uma pessoa e o valor de um financiamento
pretendido. Caso o financiamento seja menor ou igual a 5 vezes o sal�rio da pessoa, o programa
dever� escrever �Financiamento Concedido�, caso contr�rio ele dever� escrever �Financiamento
Negado�.*/


#include<stdio.h>
void main()
{
    float sal, fin;
    printf("\n Informe o valor do seu salario: ");
    scanf("%g", &sal);
    printf("\n Informe o valor do financiamento: ");
    scanf("%g", &fin);
    if(fin<=5*sal)
    {
        printf("\nFinanciamento concedido");
    }
    else{
        printf("\nFinanciamento negado");
    }
}

