#include <iostream>
using namespace std;

int main() {
    double alturaPessoa1 = 1.80, alturaPessoa2 = 1.65;

    cout << boolalpha;
    cout << "Igual: " << (alturaPessoa1 == alturaPessoa2) << endl;
    cout << "Diferente: " << (alturaPessoa1 != alturaPessoa2) << endl;
    cout << "Maior: " << (alturaPessoa1 > alturaPessoa2) << endl;
    cout << "Menor: " << (alturaPessoa1 < alturaPessoa2) << endl;
    cout << "Maior ou igual: " << (alturaPessoa1 >= alturaPessoa2) << endl;
    cout << "Menor ou igual: " << (alturaPessoa1 <= alturaPessoa2) << endl;
    return 0;
}