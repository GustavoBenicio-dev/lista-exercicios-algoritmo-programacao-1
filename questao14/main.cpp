#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double valorProduto;
    int quantidade;

    cout << "Digite o valor do produto: ";
    cin >> valorProduto;
    cout << "Digite a quantidade comprada: ";
    cin >> quantidade;

    double valorTotal = valorProduto * quantidade;
    double desconto = valorTotal * 0.10;
    double valorFinal = valorTotal - desconto;

    cout << fixed << setprecision(2);
    cout << "Valor total: " << valorTotal << endl;
    cout << "Valor final com desconto: " << valorFinal << endl;
    return 0;
}