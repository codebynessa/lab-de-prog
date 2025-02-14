/*Um posto está vendendo Gasolina com os seguintes descontos: até 20 litros, desconto de 4% por
litro e acima de 20 litros, desconto de 6% por litro. Faça um programa que leia o número de litros
vendidos de gasolina e mostre o valor a ser pago pelo cliente. Considere que o preço do litro da
gasolina é R$ 5,40.*/




#include<stdio.h>
void main()
{
    float l, v;
    printf("\n Informe a quantidade de litros: ");
    scanf("%f", &l);

    if(l<20)
    {
        v=l*0.96*5.4;
        printf("O valor sera:%f", v);
    }
    else{
            v=0.94*l*5.4;
        printf("O valor sera: %f", v);
    }
}
