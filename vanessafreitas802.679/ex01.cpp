/*Desenvolva um programa em C++ para auxiliar em cálculos de desconto em compras. Utilize funções e
faça uso da passagem de parâmetros por referência para realizar as operações necessárias. A seguir, são
apresentadas as especificações do programa:*/


#include <iostream>
using namespace std;

// funcao para calcular o desconto usando passagem por referencia
void calcularDesconto(float valorTotal, float taxaDesconto, float &desconto, float &valorFinal) {
    if (valorTotal < 0 || taxaDesconto < 0 || taxaDesconto > 100) {
        cout << "Erro: Valor total e taxa de desconto devem ser validos.\n";
        return;
    }
    desconto = valorTotal * (taxaDesconto / 100);
    valorFinal = valorTotal - desconto;
}

// funcao para exibir o resultado
void exibirResultado(float valorOriginal, float desconto, float valorFinal) {
    cout << "\nValor original: " << valorOriginal << endl;
    cout << "Desconto(15%): " << desconto << endl;
    cout << "Valor final: " << valorFinal << endl;
}

int main() {
    float valorTotal, taxaDesconto, desconto, valorFinal;

    //entrada de dados
    cout << "\nCALCULO DE DESCONTO EM COMPRAS" <<endl;
    cout << "\ndigite o valor total da compra: ";
    cin >> valorTotal;
    cout << "digite a taxa de desconto (%): ";
    cin >> taxaDesconto;

    // chamando funcao para calcular o desconto
    calcularDesconto(valorTotal, taxaDesconto, desconto, valorFinal);

    // exibindo os resultados
    exibirResultado(valorTotal, desconto, valorFinal);

    return 0;
}

