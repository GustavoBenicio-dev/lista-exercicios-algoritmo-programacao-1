#include <iostream>
using namespace std;

int main() {
    const double LIMITE_CHEQUE_ESPECIAL = 500;
    double saldoConta = 320.50;

    bool resultado = saldoConta > LIMITE_CHEQUE_ESPECIAL;
    cout << boolalpha;
    cout << "O saldo é maior que o limite do cheque especial: " << resultado << endl;
    return 0;
}