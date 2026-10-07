#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double peso = 72.345;
    double altura = 1.756;

    cout << fixed << setprecision(2);
    cout << "Peso: " << peso << " kg" << endl;
    cout << "Altura: " << altura << " m" << endl;
    return 0;
}