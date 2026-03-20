#include <iostream>
#include <locale>

using namespace std;

int main()
{
    double salario;
    double salarioNovo;
    double reajuste;

    setlocale(LC_ALL, "Portuguese");

    cout << "Salário Atual: ";
    cin >> salario;

    if(salario < 1000)
    {
        reajuste = (salario * 15) /100;
        salarioNovo = salario + reajuste;
        cout << "O seu Salário com o reajuste ficou em: " << salarioNovo << endl;
    }
    else if(salario >= 1000 && salario <= 1500)
    {
        reajuste = (salario * 10) /100;
        salarioNovo = salario + reajuste;
        cout << "O seu Salário com o reajuste ficou em: " << salarioNovo << endl;
    }
    else if(salario > 1500)
    {
        reajuste = (salario * 5) /100;
        salarioNovo = salario + reajuste;
        cout << "O seu Salário com o reajuste ficou em: " << salarioNovo << endl;
    }
    else
    {
        cout << "Invalido!!!" << endl;
    }
}

