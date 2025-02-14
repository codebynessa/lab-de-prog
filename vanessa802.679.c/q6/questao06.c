/*Em uma empresa os funcionários renovaram o contrato por três anos. Na renovação o salário
será incrementado em 7%, 6% e 5%, respectivamente, para os próximos três anos. Em cada
ano o salário é reajustado sobre o salário do ano anterior. Faça um programa que leia o salário
atual do funcionário e mostre o salário para cada um dos três próximos anos.*/

#include<stdio.h>
void main()

{
    float sal_atual, sal_ano1, sal_ano2, sal_ano3;
    printf("\n Informe o salario atual: ");
    scanf("%g", &sal_atual);

    sal_ano1 = sal_atual * 1.07 ;
    sal_ano2 = sal_ano1 * 1.06 ;
    sal_ano3 = sal_ano2 * 1.05 ;

    printf("\n O salario no primeiro ano R$ %f \n", sal_ano1);
    printf("\n O salario no segundo ano R$ %f \n", sal_ano2);
    printf("\n O salario no terceiro ano R$ %f \n", sal_ano3);




}


