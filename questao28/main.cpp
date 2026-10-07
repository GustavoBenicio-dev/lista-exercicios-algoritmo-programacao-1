#include <iostream>
using namespace std;

int main() {
    const int ESTOQUE_MINIMO = 10;
    int estoqueAtual = 7;

    bool resultado = estoqueAtual <= ESTOQUE_MINIMO;
    cout << boolalpha;
    cout << "O estoque está menor ou igual ao mínimo: " << resultado << endl;
    return 0;
}