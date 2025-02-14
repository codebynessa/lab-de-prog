/*Faça um programa que leia o tempo de serviço e o salário de um funcionário e calcule e mostre um
reajuste salarial de acordo com a seguinte situação: se o funcionário possui tempo de serviço
inferior a 10 anos, o reajuste será de 8%, caso contrário, o reajuste salarial será de 10%.*/


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

