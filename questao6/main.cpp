#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10, c = 15;

    cout << "Antes da troca: a = " << a << ", b = " << b << endl;

    int aux = a;
    a = b;
    b = aux;

    cout << "Depois da troca: a = " << a << ", b = " << b << endl;
    return 0;
}