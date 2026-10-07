#include <iostream>
using namespace std;

int main() {
    const int TEMPERATURA_CONGELAMENTO = 0;
    int temperaturaAtual = 15;

    bool resultado = temperaturaAtual > TEMPERATURA_CONGELAMENTO;
    cout << boolalpha;
    cout << "A temperatura atual é maior que a de congelamento: " << resultado << endl;
    return 0;
}