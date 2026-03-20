#include <iostream>

using namespace std;

int main() {
    int numero, altura;
    int maiorNum, maiorAlt;
    int menorNum, menorAlt;

    cout << "Digite o numero e a altura (cm) de 10 alunos:" << endl;

    for (int i = 0; i < 10; i++) {
        cout << "Aluno " << i + 1 << ": ";
        cin >> numero >> altura;

        if (i == 0) {
            maiorNum = numero;
            maiorAlt = altura;
            menorNum = numero;
            menorAlt = altura;
        } else {


            if (altura > maiorAlt) {
                maiorAlt = altura;
                maiorNum = numero;
            }

            if (altura < menorAlt) {
                menorAlt = altura;
                menorNum = numero;
            }
        }
    }

    cout << "\n--- Resultados ---" << endl;
    cout << "Mais alto: Aluno " << maiorNum << " com " << maiorAlt << "cm" << endl;
    cout << "Mais baixo: Aluno " << menorNum << " com " << menorAlt << "cm" << endl;

    return 0;
}

