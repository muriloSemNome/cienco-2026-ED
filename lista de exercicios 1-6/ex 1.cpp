#include <iostream>
using namespace std;

int main() {
    int idade;
    char doenca, fumante;
    float renda, valor;

    cout << "Idade: ";
    cin >> idade;

    cout << "Possui doenca pre-existente? (S/N): ";
    cin >> doenca;

    cout << "E fumante? (S/N): ";
    cin >> fumante;

    cout << "Renda mensal: ";
    cin >> renda;

    // Valor base
    if (idade <= 18) valor = 100;
    else if (idade <= 40) valor = 180;
    else if (idade <= 60) valor = 300;
    else valor = 500;

    // Acréscimos
    if (doenca == 'S' || doenca == 's') {
        if (idade <= 40) valor *= 1.3;
        else valor *= 1.5;
    }

    if (fumante == 'S' || fumante == 's') {
        if (idade <= 50) valor *= 1.2;
        else valor *= 1.4;
    }

    // Desconto
    if (renda < 2000) valor *= 0.8;
    else if (renda <= 5000) valor *= 0.9;

    cout << "Valor final do plano: R$ " << valor << endl;

    return 0;
}



---------------------------------------------------------

Exercício 2 — Classificação Completa de Triângulos

#include <iostream>
using namespace std;

int main() {
    float A, B, C;

    cout << "Digite os tres lados: ";
    cin >> A >> B >> C;

    // Verificar se forma triângulo
    if (A < B + C && B < A + C && C < A + B) {
        cout << "Forma um triangulo\n";

        // Classificação pelos lados
        if (A == B && B == C)
            cout << "Equilatero\n";
        else if (A == B || A == C || B == C)
            cout << "Isosceles\n";
        else
            cout << "Escaleno\n";

        // Encontrar maior lado
        float L = A;
        float x = B, y = C;

        if (B > L) { L = B; x = A; y = C; }
        if (C > L) { L = C; x = A; y = B; }

        // Classificação pelos ângulos
        if (L*L == x*x + y*y)
            cout << "Retangulo\n";
        else if (L*L > x*x + y*y)
            cout << "Obtusangulo\n";
        else
            cout << "Acutangulo\n";

    } else {
        cout << "Nao forma um triangulo\n";
    }

    return 0;
}

----------------------------------------------

Exercício 3 — Análise Completa de Sequência Numérica

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Quantidade (>=10): ";
    cin >> N;

    int num;
    int pares=0, impares=0;
    int positivos=0, negativos=0, zeros=0;
    int mult3=0, mult5=0, multAmbos=0;
    int maior, menor;
    float somaPares=0, somaImpares=0;

    for (int i = 0; i < N; i++) {
        cin >> num;

        if (i == 0) {
            maior = menor = num;
        } else {
            if (num > maior) maior = num;
            if (num < menor) menor = num;
        }

        // Par ou ímpar
        if (num % 2 == 0) {
            pares++;
            somaPares += num;
        } else {
            impares++;
            somaImpares += num;
        }

        // Positivo, negativo, zero
        if (num > 0) positivos++;
        else if (num < 0) negativos++;
        else zeros++;

        // Múltiplos
        if (num % 3 == 0) mult3++;
        if (num % 5 == 0) mult5++;
        if (num % 3 == 0 && num % 5 == 0) multAmbos++;
    }

    cout << "Pares: " << pares << " Impares: " << impares << endl;
    cout << "Positivos: " << positivos << " Negativos: " << negativos << " Zeros: " << zeros << endl;
    cout << "Multiplos de 3: " << mult3 << endl;
    cout << "Multiplos de 5: " << mult5 << endl;
    cout << "Multiplos de ambos: " << multAmbos << endl;
    cout << "Maior: " << maior << " Menor: " << menor << endl;

    if (pares > 0)
        cout << "Media pares: " << somaPares / pares << endl;
    if (impares > 0)
        cout << "Media impares: " << somaImpares / impares << endl;

    return 0;
}

------------------------------------------------

Exercício 4 — Sistema de Caixa com Controle Inteligente

#include <iostream>
using namespace std;

int main() {
    int opcao;
    float saldo = 1000, valor;
    float totalDep = 0, totalSaq = 0;
    float maiorDep = 0, maiorSaq = 0;
    int operacoes = 0;

    while (true) {
        cout << "\n1-Deposito 2-Saque 3-Consulta 4-Relatorio 0-Sair\n";
        cin >> opcao;

        if (opcao == 0) break;

        switch (opcao) {
            case 1:
                cin >> valor;
                if (valor > 0) {
                    saldo += valor;
                    totalDep += valor;
                    operacoes++;
                    if (valor > maiorDep) maiorDep = valor;
                }
                break;

            case 2:
                cin >> valor;
                if (valor > saldo) {
                    cout << "Saldo insuficiente\n";
                } else {
                    if (valor > saldo * 0.5)
                        cout << "Saque de alto valor\n";

                    saldo -= valor;
                    totalSaq += valor;
                    operacoes++;
                    if (valor > maiorSaq) maiorSaq = valor;
                }
                break;

            case 3:
                cout << "Saldo: " << saldo << endl;
                break;

            case 4:
                cout << "Total depositado: " << totalDep << endl;
                cout << "Total sacado: " << totalSaq << endl;
                cout << "Operacoes: " << operacoes << endl;
                cout << "Maior deposito: " << maiorDep << endl;
                cout << "Maior saque: " << maiorSaq << endl;
                break;
        }
    }

    return 0;
}

----------------------------------------------------

Exercício 5 — Análise e Reorganização de Vetor

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int v[50], novo[50];

    for (int i = 0; i < N; i++)
        cin >> v[i];

    int pares=0, impares=0, pos=0, neg=0, zero=0;
    int m2=0, m3=0, m5=0;
    int maior=v[0], menor=v[0];
    float soma=0;

    for (int i = 0; i < N; i++) {
        soma += v[i];

        if (v[i] % 2 == 0) pares++;
        else impares++;

        if (v[i] > 0) pos++;
        else if (v[i] < 0) neg++;
        else zero++;

        if (v[i] % 2 == 0) m2++;
        if (v[i] % 3 == 0) m3++;
        if (v[i] % 5 == 0) m5++;

        if (v[i] > maior) maior = v[i];
        if (v[i] < menor) menor = v[i];
    }

    // Reorganização
    int k = 0;
    for (int i = 0; i < N; i++)
        if (v[i] % 2 == 0)
            novo[k++] = v[i];

    for (int i = N-1; i >= 0; i--)
        if (v[i] % 2 != 0)
            novo[k++] = v[i];

    cout << "Media: " << soma / N << endl;

    cout << "Vetor reorganizado:\n";
    for (int i = 0; i < N; i++)
        cout << novo[i] << " ";

    return 0;
}

---------------------------------------------

Exercício 6 — Sistema de Gestão de Funcionários

#include <iostream>
using namespace std;

struct Funcionario {
    int id;
    string nome;
    float salario;
    int idade;
    int tempoEmpresa;
};

int main() {
    int N;
    cin >> N;

    Funcionario f[50];

    for (int i = 0; i < N; i++) {
        cin >> f[i].id >> f[i].nome >> f[i].salario >> f[i].idade >> f[i].tempoEmpresa;
    }

    float soma = 0, maior, menor;
    maior = menor = f[0].salario;

    for (int i = 0; i < N; i++) {
        soma += f[i].salario;

        if (f[i].salario > maior) maior = f[i].salario;
        if (f[i].salario < menor) menor = f[i].salario;
    }

    float media = soma / N;

    for (int i = 0; i < N; i++) {
        float aumento = 0;

        if (f[i].tempoEmpresa < 3) aumento += 0.05;
        else if (f[i].tempoEmpresa <= 10) aumento += 0.10;
        else aumento += 0.20;

        if (f[i].idade > 50) aumento += 0.05;
        if (f[i].salario < media) aumento += 0.05;

        f[i].salario *= (1 + aumento);
    }

    cout << "Funcionarios atualizados:\n";
    for (int i = 0; i < N; i++) {
        cout << f[i].nome << " - " << f[i].salario << endl;
    }

    return 0;
}
