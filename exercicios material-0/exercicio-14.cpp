#include <iostream>
#include <locale>

using namespace std;

int main()
{
    int opcao;

    setlocale(LC_ALL, "Portuguese");

    do
    {
        cout << "\nMENU\n" << endl;
        cout << "1. Dizer Olá" << endl;
        cout << "2. Que Horas São?" << endl;
        cout << "3. Sair" << endl;
        cout << "Escolha uma opcão: ";
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            cout << "Olá! Tudo bem?" << endl;
            break;
        case 2:
            cout << "Tá na hora de tomar um cafézinho" << endl;
            break;
        case 3:
            cout << "Saindo do programa..." << endl;
            break;
        default:
            cout << "Opcao invalida! Tente novamente." << endl;
        }

    }
    while (opcao != 3);

    return 0;
}
