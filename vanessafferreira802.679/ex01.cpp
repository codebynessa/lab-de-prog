#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream arquivo;  // Usado para gravar no arquivo
    string nome, cpf, dataNascimento, endereco;
    char continuar = 's';  // Vari�vel para perguntar se o usu�rio deseja continuar

    // Abrindo o arquivo para escrita
    arquivo.open("pessoas.txt");
    if (!arquivo) {
        cout << "erro ao abrir o arquivo para escrita." << endl;
        return 1;
    }

    // loop para receber dados das pessoas
    while (continuar == 's' || continuar == 'S') {
        // recebendo dados
        cout << "digite o nome: ";
        getline(cin, nome);

        cout << "digite o CPF: ";
        getline(cin, cpf);

        cout << "digite a data de nascimento: ";
        getline(cin, dataNascimento);

        cout << "digite o endere�o: ";
        getline(cin, endereco);

        // escrevendo os dados no arquivo
        arquivo << "nome: " << nome << endl;
        arquivo << "CPF: " << cpf << endl;
        arquivo << "data de nascimento: " << dataNascimento << endl;
        arquivo << "enderecoo: " << endereco << endl;
        arquivo << "-------------------------" << endl;

        // perguntar se o usu�rio deseja continuar
        cout << "deseja cadastrar outra pessoa? (s/n): ";
        cin >> continuar;
        cin.ignore();
    }

    arquivo.close();  // fecha o arquivo ap�s escrever
    cout << "arquivo 'pessoas.txt' gravado com sucesso." << endl;

    return 0;
}
