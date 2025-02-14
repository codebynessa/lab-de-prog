#include <iostream>
#include <cstring>  // Para manipular strings

using namespace std;

int main() {
    char frase[100], caractere;
    int contador = 0;

    // Entrada da frase e do caractere
    cout << "Digite uma frase: ";
    cin.getline(frase, 100);

    cout << "Digite o caractere a ser contado: ";
    cin >> caractere;

    // Contagem do caractere
    for (int i = 0; i < strlen(frase); i++) {
        if (frase[i] == caractere) {
            contador++;
        }
    }

    // Exibe o resultado
    cout << "O caractere '" << caractere << "' aparece " << contador << " vezes na frase." << endl;

    return 0;
}

