#include <iostream>
#include <locale>

using namespace std;

int main()
{
    int  numero;
    setlocale(LC_ALL, "Portuguese");

    cout << "Digite um numero: ";
    cin >> numero;

    if(numero % 2 == 1)
    {
        cout << numero << " é Par!";
    }
}

