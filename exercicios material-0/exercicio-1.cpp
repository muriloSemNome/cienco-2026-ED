#include <iostream>

using namespace std;

int main(){

 float peso, altura, imc;

    cout << "Digite o seu Peso: ";
    cin >> peso;

    cout << "Digite a sua Altura: ";
    cin >> altura;

    imc = peso / (altura * altura);

    if(imc < 20)
    {
        cout << "Abaixo do Peso";
    }
    else if(imc >=20 && imc < 25)
    {
        cout << "Peso Ideal";
    }
    else
    {
        cout << "Acima do Peso";
    }







}
