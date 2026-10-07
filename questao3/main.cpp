#include <iostream>
using namespace std;

int main() {
    int horasTrabalhadas = 40;
    double valorHora = 25.50;

    double salarioSemanal = horasTrabalhadas * valorHora;
    cout << "Salário semanal: " << salarioSemanal << endl;
    return 0;
}