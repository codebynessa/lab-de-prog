/* Fa�a um programa que leia a idade de v�rias pessoas e calcule e mostre no final a
maior idade. O programa deve encerrar quando for informado uma idade igual zero. */

#include<stdio.h>
void main()
{
/*A maior_idade � inicializada com 0, pois ainda n�o foi digitada nenhuma idade*/
int idade, maior_idade = 0;

/*perguntar repetidas vezes a idade de uma pessoa*/
    do {
        printf("\nDigite a idade: ");
        scanf("%d", &idade);

/*se a idade digitada � maior que a maior_idade registrada at� o momento, atualiza o
 valor de maior_idade com o novo valor digitado.*/
           if (idade > maior_idade) {
            maior_idade = idade;
        }

    } while (idade != 0);
/*continuar� a executar enquanto a idade digitada for diferente de zero*/
/*o loop continua at� que o usu�rio insira zero*/

    printf("\nA maior idade: %d\n", maior_idade);
}

