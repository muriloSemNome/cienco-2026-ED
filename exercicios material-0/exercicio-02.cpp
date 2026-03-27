#include <iostream>
#include <locale>

using namespace std;

int main()
{
    int idade;

    setlocale(LC_ALL, "Portuguese");

    cout << "Digite a sua Idade: ";
    cin >> idade;

    if(idade >= 5 && idade <= 7)
    {
        cout << "Você foi classificado para a categoria: infantil A!";
    }
    else if(idade < 5)
    {
        cout << "Você não foi classificado!";
    }
    else if(idade <=10)
    {
        cout << "Você foi classificado para a categoria: infantil B!";
    }
    else if(idade <= 13)
    {
        cout << "Você foi classificado para a categoria: juvenil A!";
    }
    else if(idade <= 17)
    {
        cout << "Você foi classificado para a categoria: juvenil B!";
    }
    else if(idade > 17)
    {
        cout << "Você foi classificado para a categoria: senior!";
    }
    else
    {
        cout << "Invalido!!!";
    }
    return 0;
}
