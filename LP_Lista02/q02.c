/*Fa�a um programa que leia o tempo de servi�o e o sal�rio de um funcion�rio e calcule e mostre um
reajuste salarial de acordo com a seguinte situa��o: se o funcion�rio possui tempo de servi�o
inferior a 10 anos, o reajuste ser� de 8%, caso contr�rio, o reajuste salarial ser� de 10%.*/


#include<stdio.h>
void main()
{
    float tempo, sal, reajus;
    printf("\n Informe o tempo de servico em anos: ");
    scanf("%g", &tempo);
    printf("\n Informe o valor do seu salario: ");
    scanf("%g", &sal);
    if(tempo<10)
    {
        reajus=sal*1.08;
        printf("\n Valor do reajuste e R$ %g", reajus);
    }
    else{
        printf("Financiamento negado");
    }
}

