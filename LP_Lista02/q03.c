/*Um posto est� vendendo Gasolina com os seguintes descontos: at� 20 litros, desconto de 4% por
litro e acima de 20 litros, desconto de 6% por litro. Fa�a um programa que leia o n�mero de litros
vendidos de gasolina e mostre o valor a ser pago pelo cliente. Considere que o pre�o do litro da
gasolina � R$ 5,40.*/




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
