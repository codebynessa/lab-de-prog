/*Em uma empresa os funcion�rios renovaram o contrato por tr�s anos. Na renova��o o sal�rio
ser� incrementado em 7%, 6% e 5%, respectivamente, para os pr�ximos tr�s anos. Em cada
ano o sal�rio � reajustado sobre o sal�rio do ano anterior. Fa�a um programa que leia o sal�rio
atual do funcion�rio e mostre o sal�rio para cada um dos tr�s pr�ximos anos.*/

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


