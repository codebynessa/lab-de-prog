#include <iostream>
#include <cstring>  // Para funções de manipulação de strings

using namespace std;

int main() {
    char str[100];

    // Entrada da string
    cout << "Digite uma string: ";
    cin.getline(str, 100);

    // Exibe a string invertida
    for (int i = strlen(str) - 1; i >= 0; i--) {
        cout << str[i];
    }
    cout << endl;

    return 0;
}

