#include <iostream>
using namespace std;

int main() {
    const double MEDIA_MINIMA = 6.0;
    double nota = 7.2;

    bool resultado = nota >= MEDIA_MINIMA;
    cout << boolalpha;
    cout << "Aluno atingiu a média mínima: " << resultado << endl;
    return 0;
}