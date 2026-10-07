#include <iostream>
using namespace std;

int main() {
    int dividendo = 17, divisor = 5;

    int quociente = dividendo / divisor;
    int resto = dividendo % divisor;

    cout << "Quociente: " << quociente << endl;
    cout << "Resto: " << resto << endl;
    return 0;
}