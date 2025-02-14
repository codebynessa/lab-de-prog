/*Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por
mês e mais 5% do valor total das vendas por ele efetuadas. Faça um programa que leia o
salário fixo do funcionário e o valor total de suas vendas. Calcule e escreva o salário final do
vendedor.*/

#include<stdio.h>
void main()

{
    float sal_fixo, vendas, sal_final;
    printf("\n Informe o salario fixo: ");
    scanf("%g", &sal_fixo);
    printf("\n Informe o valor total das vendas : ");
    scanf("%g", &vendas);

    sal_final = sal_fixo + (1.05 * vendas);

    printf("\n O salario final R$ %g. \n", sal_final);


}


