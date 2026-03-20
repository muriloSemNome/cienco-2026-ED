#include <iostream>

using namespace std;

int main()
{
    int numero;

    cout << "Digite um Numero: ";
    cin >> numero;

    for(int i = numero; i >= 0; i--)
    {
        cout << i << endl;
    }
    return 0;
}
