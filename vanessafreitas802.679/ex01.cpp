/*Desenvolva um programa em C++ para auxiliar em c�lculos de desconto em compras. Utilize fun��es e
fa�a uso da passagem de par�metros por refer�ncia para realizar as opera��es necess�rias. A seguir, s�o
apresentadas as especifica��es do programa:*/


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

