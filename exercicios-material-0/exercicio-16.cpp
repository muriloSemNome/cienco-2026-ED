
#include <iostream>
#include <locale>

using namespace std;

int main()
{
    int numero;
    int soma = 0;
    setlocale(LC_ALL, "Portuguese");

    cout << "Digite um Número Entre 1 e 10: ";
    cin >> numero;

    while(numero >= 1 && numero <= 10)
    {
    soma = soma + numero;

    cout << "Digite um Número Entre 1 e 10: ";
    cin >> numero;
    }
    cout << "A Soma dos Números é " << soma << endl;
    return 0;
}

