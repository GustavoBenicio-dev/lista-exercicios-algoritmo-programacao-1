#include <iostream>
using namespace std;

int main() {
    double precoProdutoA = 45.90, precoProdutoB = 52.30;

    bool resultado = precoProdutoA < precoProdutoB;
    cout << boolalpha;
    cout << "O preço do produto A é menor que o preço do produto B: " << resultado << endl;
    return 0;
}