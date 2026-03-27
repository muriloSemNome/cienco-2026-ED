#include <iostream>
#include <locale>

using namespace std;

int main()
{
    int numero;
    int tabuada;
    setlocale(LC_ALL, "Portuguese");

    cout << "Digite um Número: ";
    cin >> numero;

    for(int i = 1; i <= 10; i++)
    {
        tabuada = numero * i;
        cout << "A Tabuada do " << numero << endl;
        cout << numero << " x " << i << " = " << tabuada << endl;
    }
    return 0;
}

