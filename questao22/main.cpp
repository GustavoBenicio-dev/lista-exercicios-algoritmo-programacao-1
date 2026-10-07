#include <iostream>
using namespace std;

int main() {
    int idadePessoa1 = 30, idadePessoa2 = 25;

    bool resultado = idadePessoa1 >= idadePessoa2;
    cout << boolalpha;
    cout << "A idade da primeira pessoa é maior ou igual à da segunda: " << resultado << endl;
    return 0;
}