#include <iostream>
#include <cstring>  // Para manipular strings

using namespace std;

int main() {
    char nomes[10][50];
    int maior = 0, menor = 50, qtdeA = 0, qtdeVogais = 0;
    char nomeMaior[50], nomeMenor[50];

    // Leitura dos 10 nomes
    for (int i = 0; i < 10; i++) {
        cout << "Digite o nome " << i+1 << ": ";
        cin.getline(nomes[i], 50);

        int tamanho = strlen(nomes[i]);

        // Verifica o nome mais longo
        if (tamanho > maior) {
            maior = tamanho;
            strcpy(nomeMaior, nomes[i]);
        }

        // Verifica o nome mais curto
        if (tamanho < menor) {
            menor = tamanho;
            strcpy(nomeMenor, nomes[i]);
        }

        // Conta os nomes que terminam com 'A'
        if (nomes[i][tamanho - 1] == 'A' || nomes[i][tamanho - 1] == 'a') {
            qtdeA++;
        }

        // Conta as vogais
        for (int j = 0; j < tamanho; j++) {
            char c = tolower(nomes[i][j]);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                qtdeVogais++;
            }
        }
    }

    // Exibe os resultados
    cout << "Nome mais longo: " << nomeMaior << endl;
    cout << "Nome mais curto: " << nomeMenor << endl;
    cout << "Quantidade de nomes que terminam com 'A': " << qtdeA << endl;
    cout << "Quantidade total de vogais digitadas: " << qtdeVogais << endl;

    return 0;
}

