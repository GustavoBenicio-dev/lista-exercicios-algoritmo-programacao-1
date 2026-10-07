#include <iostream>
using namespace std;

int main() {
    int segundosTotais;

    cout << "Digite a quantidade de segundos: ";
    cin >> segundosTotais;

    int horas = segundosTotais / 3600;
    int minutos = (segundosTotais % 3600) / 60;
    int segundos = segundosTotais % 60;

    cout << horas << "h " << minutos << "m " << segundos << "s" << endl;
    return 0;
}