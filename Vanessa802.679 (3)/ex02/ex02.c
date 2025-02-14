/* Faça um programa que leia a idade de várias pessoas e calcule e mostre no final a
maior idade. O programa deve encerrar quando for informado uma idade igual zero. */

#include<stdio.h>
void main()
{
/*A maior_idade é inicializada com 0, pois ainda não foi digitada nenhuma idade*/
int idade, maior_idade = 0;

/*perguntar repetidas vezes a idade de uma pessoa*/
    do {
        printf("\nDigite a idade: ");
        scanf("%d", &idade);

/*se a idade digitada é maior que a maior_idade registrada até o momento, atualiza o
 valor de maior_idade com o novo valor digitado.*/
           if (idade > maior_idade) {
            maior_idade = idade;
        }

    } while (idade != 0);
/*continuará a executar enquanto a idade digitada for diferente de zero*/
/*o loop continua até que o usuário insira zero*/

    printf("\nA maior idade: %d\n", maior_idade);
}

