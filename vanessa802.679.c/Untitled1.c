#include <stdio.h>

int main(){
    int choice;
    printf("\nLegal! Temos algumas opcoes de lugar...\n");
    printf("\nQuero que voce escolha de acordo com o que voce tah afim de fazer hoje:\n");
    printf("\t1. Vibes bar (bandas vao tocar hoje)\n");
    printf("\t2. Eden beer (tomar alguma coisa e escutar musica)\n");
    printf("\t3. Acai no final da tarde\n");
    printf("\t4. Caminhar e conversar no parque do lago\n");

    printf("\nSua resposta: ");
    scanf("%d", &choice);
    printf("\n");
    switch (choice) {
        case 1:
            printf("Aeee...vamos curtir um rock hoje! Vai ser divertido (a partir das 21h)\n\n");
            printf("Vamos nos falando para combinar certinho..\n\n");
            break;
        case 2:
            printf("Massa! Vai ser divertido\n\n");
            printf("Vamos nos falando para combinar certinho...\n\n");
            break;
        case 3:
            printf("Legal! Vamos encontrar um lugar...\n\n");
            printf("Vamos nos falando para combinar certinho...\n\n");
            break;
        case 4:
            printf("Adoro esse lugar! Vai ser divertido haha\\n");
            printf("Vamos nos falando para combinar certinho...\n\n");
            break;
        default:
            printf("Escolha invalida. Tente novamente\n\n");
            break;
    }

    return 0;

}
