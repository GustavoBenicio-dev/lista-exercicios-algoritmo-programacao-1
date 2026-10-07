#include <iostream>
using namespace std;

int main() {
    const double TAXA_CONVERSAO = 5.35;
    double valorReais = 100.0;

    double valorDolar = valorReais / TAXA_CONVERSAO;
    cout << "Valor em dólares: " << valorDolar << endl;
    return 0;
}