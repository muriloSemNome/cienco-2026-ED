#include <iostream>

using namespace std;

int main() {
    int idade, opiniao;
    int totalPessoas = 0;
    int somaIdades = 0;
    int otimo = 0, bom = 0, regular = 0, ruim = 0;

    cout << "Pesquisa de Cinema " << endl;
    cout << "Opnioes: 1-Otimo, 2-Bom, 3-Regular, 4-Ruim" << endl;
    cout << "Digite idade negativa para encerrar." << endl;

    while (true) {
        cout << "\nDigite a idade: ";
        cin >> idade;

        if (idade < 0) {
            break;
        }

        cout << "Digite a opiniao (1 a 4): ";
        cin >> opiniao;

        totalPessoas++;
        somaIdades += idade;

        if (opiniao == 1) otimo++;
        else if (opiniao == 2) bom++;
        else if (opiniao == 3) regular++;
        else if (opiniao == 4) ruim++;
        else cout << "Opcao invalida, mas o voto foi contado no total." << endl;
    }

    cout << "\n--- Resultados da Pesquisa ---" << endl;

    if (totalPessoas > 0) {

        cout << "Total de pessoas: " << totalPessoas << endl;

        double mediaIdade = (double)somaIdades / totalPessoas;
        cout << "Media de idade: " << mediaIdade << " anos" << endl;

        cout << "Porcentagens:" << endl;
        cout << "   Otimo:   " << (otimo * 100.0) / totalPessoas << "%" << endl;
        cout << "   Bom:     " << (bom * 100.0) / totalPessoas << "%" << endl;
        cout << "   Regular: " << (regular * 100.0) / totalPessoas << "%" << endl;
        cout << "   Ruim:    " << (ruim * 100.0) / totalPessoas << "%" << endl;
    } else {
        cout << "Nenhum dado foi coletado." << endl;
    }

    return 0;
}

