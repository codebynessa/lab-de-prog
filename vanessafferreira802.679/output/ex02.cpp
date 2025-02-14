#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream arquivo;  // Usado para gravar no arquivo
    ifstream leitura;  // Usado para ler do arquivo
    int id, idade, numEstudantes = 0, idadeMaisVelho = 0;
    string nome, nomeMaisVelho;
    char continuar = 's';  // Variável para perguntar se o usuário deseja continuar

    // Abrindo o arquivo para escrita
    arquivo.open("C:\\Users\\vf230\\Documents\\vanessafferreira802.679\\output\\output\\estudantes.txt");
    if (!arquivo) {
        cout << "Erro ao abrir o arquivo para escrita." << endl;
        return 1;
    }

    // Loop para receber dados dos estudantes
    while (continuar == 's' || continuar == 'S') {
        // Recebendo dados do estudante
        cout << "Digite o ID do estudante: ";
        cin >> id;
        cin.ignore();  // Limpa o buffer do teclado

        cout << "Digite o nome do estudante: ";
        getline(cin, nome);  // Usando getline para permitir nomes com espaços

        cout << "Digite a idade do estudante: ";
        cin >> idade;
        cin.ignore();  // Limpa o buffer

        // Escrevendo os dados no arquivo
        arquivo << "ID: " << id << endl;
        arquivo << "Nome: " << nome << endl;
        arquivo << "Idade: " << idade << endl << endl;

        numEstudantes++;  // Contabilizando o número de estudantes

        // Perguntar se o usuário deseja continuar
        cout << "Deseja cadastrar outro estudante? (s/n): ";
        cin >> continuar;
        cin.ignore();  // Limpa o buffer
    }

    arquivo.close();  // Fecha o arquivo após escrever

    cout << "Arquivo 'estudantes.txt' gravado com sucesso." << endl;

    // Agora, vamos abrir o arquivo para leitura
    leitura.open("C:\\Users\\vf230\\Documents\\vanessafferreira802.679\\output\\output\\estudantes.txt");
    if (!leitura) {
        cout << "Erro ao abrir o arquivo para leitura." << endl;
        return 1;
    }

    // Lendo os registros do arquivo
    while (getline(leitura, nome)) {
        // Lê o ID
        leitura >> id;
        leitura.ignore();  // Ignora o '\n'

        // Lê a idade
        leitura >> idade;
        leitura.ignore();  // Ignora o '\n'

        // Verificando o estudante mais velho
        if (idade > idadeMaisVelho) {
            idadeMaisVelho = idade;
            nomeMaisVelho = nome;
        }

        leitura.ignore();  // Ignora o espaço em branco entre os registros
    }

    leitura.close();  // Fecha o arquivo após ler

    // Exibindo o resultado
    cout << "\nNúmero de estudantes lidos: " << numEstudantes << endl;
    cout << "Estudante mais velho: " << nomeMaisVelho << ", Idade: " << idadeMaisVelho << endl;

    return 0;
}
