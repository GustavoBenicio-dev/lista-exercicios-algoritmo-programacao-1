#include <iostream>
using namespace std;

int main() {
    int vitoriasTimeA = 10, vitoriasTimeB = 10;

    bool resultado = vitoriasTimeA == vitoriasTimeB;
    cout << boolalpha;
    cout << "Os times têm o mesmo número de vitórias: " << resultado << endl;
    return 0;
}