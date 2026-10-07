#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    cout << "Digite o primeiro número: ";
    cin >> n1;
    cout << "Digite o segundo número: ";
    cin >> n2;

    cout << "Soma: " << n1 + n2 << endl;
    cout << "Subtração: " << n1 - n2 << endl;
    cout << "Multiplicação: " << n1 * n2 << endl;
    cout << "Divisão: " << (double)n1 / n2 << endl;
    return 0;
}