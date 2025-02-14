//Faça um programa para ler uma frase em maiúsculo e apresentá-la novamente em minúsculo.
#include <iostream>
#include <cstring>  //

using namespace std;

int main(void)
{
    char str[100];

    cout << "\nDigite uma frase em maiusculo: ";
    cin.getline(str, 100);


    for (int i = 0; i < strlen(str); i++) {
        str[i] = tolower(str[i]);
    }

    cout << "\n Frase em minusculo: " << str << endl;

    return 0;
}
