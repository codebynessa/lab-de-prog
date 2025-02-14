#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream arquivo;  // usado para ler do arquivo
    int id, idade, numEstudantes = 0, idadeMaisVelho = 0;
    string nome, nomeMaisVelho;

    // abrindo o arquivo para leitura
    arquivo.open("estudantes.txt");
    if (!arquivo) {
        cout << "erro ao abrir o arquivo para leitura." << endl;
        return 1;
    }

    // lendo os registros do arquivo
    while (getline(arquivo, nome)) {
        arquivo >> id;
        arquivo.ignore();

        arquivo >> idade;
        arquivo.ignore();

        // verificando o estudante mais velho
        if (idade > idadeMaisVelho) {
            idadeMaisVelho = idade;
            nomeMaisVelho = nome;
        }

        numEstudantes++;  // contabilizando o n�mero de estudantes
        arquivo.ignore();  // ignora a linha em branco
    }

    arquivo.close();  // fecha o arquivo ap�s ler

    // exibindo o resultado
    cout << "\nnumero de estudantes lidos: " << numEstudantes << endl;
    cout << "\nestudante mais velho: " << nomeMaisVelho << ", idade: " << idadeMaisVelho << endl;

    return 0;
}

