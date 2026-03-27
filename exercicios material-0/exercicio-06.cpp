#include <iostream>
#include <locale>

using namespace std;

int main()
{
    int quadrado;

    setlocale(LC_ALL, "Portuguese");

    for(int i = 1; i <= 20; i++)
    {
        quadrado = i * i;
        cout << "O Quadrado de " << i << " é " << quadrado << endl;
    }
    return 0;
}
