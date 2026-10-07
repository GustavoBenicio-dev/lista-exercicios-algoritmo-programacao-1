#include <iostream>
using namespace std;

int main() {
    double salario = 2000.0;

    double aumento = salario * 0.15;
    double salarioReajustado = salario + aumento;

    cout << "Salário reajustado: " << salarioReajustado << endl;
    return 0;
}