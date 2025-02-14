#include <iostream>
#include <cstring>  // Para funções de manipulação de strings

using namespace std;

int main() {
    char string1[50], string2[50];

    // Lê as strings do usuário
    cout << "Digite a primeira string: ";
    cin.getline(string1, 50);

    cout << "Digite a segunda string: ";
    cin.getline(string2, 50);

    // Concatena string2 ao final de string1
    strcat(string1, string2);

    // Exibe a string concatenada
    cout << "String concatenada: " << string1 << endl;

    return 0;
}

