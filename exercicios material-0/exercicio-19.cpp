#include <iostream>

using namespace std;

int main()
{
    int nota;
    int contador = 0;
    float soma = 0;
    float media = 0;

    cout << "Digite a Nota do Aluno: ";
    cin >> nota;

    while(nota >= 0 && nota <= 10)
    {
        soma = soma + nota;
        contador++;
        cout << "Digite a Nota do Aluno: ";
        cin >> nota;
    }
    media = soma / contador;
    cout << "E a Média das Notas foi de: " << media;
    return 0;
}
