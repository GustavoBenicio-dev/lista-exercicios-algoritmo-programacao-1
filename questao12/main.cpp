#include <iostream>
using namespace std;

int main() {
    int n1 = 20, n2 = 4;

    int resto = n1 % n2;
    cout << "Resto: " << resto << endl;

    if (resto == 0) {
        cout << n1 << " é divisível por " << n2 << endl;
    } else {
        cout << n1 << " não é divisível por " << n2 << endl;
    }
    return 0;
}