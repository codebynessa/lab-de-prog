/* Faça um programa que leia a idade de várias pessoas e calcule e mostre no final a
maior idade. O programa deve encerrar quando for informado uma idade igual zero. */

#include<stdio.h>
void main()
{
    int age, max_age = 0;


    } while
        printf("Enter an age (-1 to stop): ");
        scanf("%d", &age);

        if (age == -1) {
            break;
        }

        if (age > max_age) {
            max_age = age;
        }
    }

    printf("The maximum age was %d.\n", max_age);

    return 0;
}

