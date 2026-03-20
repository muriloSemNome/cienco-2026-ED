#include <iostream>
#include <locale>

using namespace std;

int main()
{
    int numero;

    setlocale(LC_ALL, "Portuguese");

    cout << "Digite um Número Entre 1 e 10: ";
    cin >> numero;

    while(numero < 1 || numero > 10)
    {
        cout << "Número Invalido!! Digite o Número Novamente: ";
        cin >> numero;
    }
    cout << "O Número Digitado foi " << numero << endl;
}
