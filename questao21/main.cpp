#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;

    cout << boolalpha;
    cout << "Igual: " << (a == b) << endl;
    cout << "Diferente: " << (a != b) << endl;
    cout << "Maior: " << (a > b) << endl;
    cout << "Menor: " << (a < b) << endl;
    return 0;
}