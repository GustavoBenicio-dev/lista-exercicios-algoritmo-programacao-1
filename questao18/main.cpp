#include <iostream>
using namespace std;

int main() {
    double base, altura;

    cout << "Digite a base do retângulo: ";
    cin >> base;
    cout << "Digite a altura do retângulo: ";
    cin >> altura;

    double perimetro = 2 * (base + altura);
    double area = base * altura;

    cout << "Perímetro: " << perimetro << endl;
    cout << "Área: " << area << endl;
    return 0;
}