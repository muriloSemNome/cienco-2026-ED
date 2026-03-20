#include <iostream>
#include <locale>

using namespace std;

int main() {
    int n1, n2, n3;
    setlocale(LC_ALL, "Portuguese");

    cout << "Digite trs numeros inteiros distintos: ";
    cin >> n1 >> n2 >> n3;

    if (n1 > n2 && n1 > n3) {
        cout << "O maior numero é: " << n1 << endl;
    } else if (n2 > n3) {
        cout << "O maior numero é: " << n2 << endl;
    } else {
        cout << "O maior numero é: " << n3 << endl;
    }

    return 0;
}
