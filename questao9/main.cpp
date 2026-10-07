#include <iostream>
using namespace std;

int main() {
    const long VELOCIDADE_LUZ = 300000;
    int tempoSegundos = 10;

    long distancia = VELOCIDADE_LUZ * tempoSegundos;
    cout << "Distância percorrida: " << distancia << " km" << endl;
    return 0;
}