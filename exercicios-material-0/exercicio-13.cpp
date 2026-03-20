#include <iostream>
#include <locale>

using namespace std;

int main()
{
    float nota;

    setlocale(LC_ALL, "Portuguese");

    cout << "Digite a sua nota: ";
    cin >> nota;

    if(nota >= 6)
    {
        cout << "Aprovado!!";
    }
    else if(nota >= 4 && nota <= 5.9)
    {
        cout << "Recuperação!!";
    }
    else
    {
        cout << "Reprovado!!";
    }
    return 0;
}
