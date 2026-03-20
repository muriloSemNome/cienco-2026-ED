#include <iostream>
#include <locale>

using namespace std;

int main()
{
    int PE;
    double valor;
    double valorT;
    double disconto;
    double acrescimo;

    setlocale(LC_ALL, "Portuguese");

    cout << "Digite o valor a pagar: ";
    cin >> valor;
    cout << endl;
    cout << "Selecione 1 para a condição de pagamento abaixo\n";
    cout << "À vista em dinheiro ou cheque, com 10% de disconto.";
    cout << endl;
    cout << endl;
    cout << "Selecione 2 para a condição de pagamento abaixo\n";
    cout << "À vista com cartão de crédito, com 5% de disconto.";
    cout << endl;
    cout << endl;
    cout << "Selecione 3 para a condição de pagamento abaixo\n";
    cout << "Em 2 vezes, preço normal de etiqueta sem juros";
    cout << endl;
    cout << endl;
    cout << "Selecione 4 para a condição de pagamento abaixo\n";
    cout << "Em 3 vezes, preço normal de etiqueta com acréscimo de 10%";
    cout << endl;
    cout << endl;
    cout << "Qual será a forma de pagamento: ";
    cin >> PE;

    switch(PE)
    {
        case 1:
            disconto = (valor * 10) / 100;
            valorT = valor - disconto;

            cout << "O valor total é de " << valorT << endl;

        case 2:
            disconto = (valor * 5) / 100;
            valorT = valor - disconto;

            cout << "O valor total é de " << valorT << endl;

        case 3:
            valorT = valor / 2;

            cout << "O valor total é de " << valorT << " em 2 vezes." << endl;

        case 4:
            acrescimo = (valor *10) / 100;
            valorT = (valor + acrescimo) / 3;

            cout << "O valor total é de " << valorT << " em 3 vezes." << endl;
    }
    return 0;
}
