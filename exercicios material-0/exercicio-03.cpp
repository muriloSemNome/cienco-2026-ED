#include <iostream>
#include <locale>

using namespace std;

int main()
{
    float hora;
    int horasT;
    double salario;
    float salarioM;
    double salarioBruto;
    float imposto;

    setlocale(LC_ALL, "Portuguese");

    cout << "Digite o numero de horas trabalhadas: ";
    cin >> horasT;

    cout << "Digite o seu salário mínimo: ";
    cin >> salarioM;

    hora = (salarioM / 2);
    salarioBruto = horasT * hora;
    imposto = (salarioBruto * 3) / 100;
    salario = salarioBruto - imposto;

    cout << "Valor da hora trabalhada: " << hora << endl;
    cout << "Valor do salário bruto: " << salarioBruto << endl;
    cout << "Valor do Imposto de 3%: " << imposto << endl;
    cout << "Valor do salário a receber: " << salario << endl;

    return 0;
}
