#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int voto;
    int cand1 = 0, cand2 = 0, nulos = 0, brancos = 0, totalVotos = 0;

    cout << "--- Sistema de Votacao ---" << endl;
    cout << "1 ou 2: Candidatos | 3: Nulo | 4: Branco | 0: Encerrar" << endl;

    while (true) {
        cout << "Digite o codigo do voto: ";
        cin >> voto;

        if (voto == 0) break; // Finalizador

        switch (voto) {
            case 1:
                cand1++;
                totalVotos++;
                break;
            case 2:
                cand2++;
                totalVotos++;
                break;
            case 3:
                nulos++;
                totalVotos++;
                break;
            case 4:
                brancos++;
                totalVotos++;
                break;
            default:
                cout << "Codigo invalido! Tente novamente." << endl;
                break;
        }
    }

    if (totalVotos > 0) {

        cout << fixed << setprecision(2);

        cout << "\n--- Resultado Final ---" << endl;
        cout << "Total de votos: " << totalVotos << endl;
        cout << "(1) Candidato 1: " << (cand1 * 100.0) / totalVotos << "%" << endl;
        cout << "(1) Candidato 2: " << (cand2 * 100.0) / totalVotos << "%" << endl;
        cout << "(2) Votos Nulos: " << (nulos * 100.0) / totalVotos << "%" << endl;
        cout << "(3) Votos em Branco: " << (brancos * 100.0) / totalVotos << "%" << endl;
    } else {
        cout << "\nNenhum voto foi registrado." << endl;
    }

    return 0;
}
