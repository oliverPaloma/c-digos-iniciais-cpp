#include <iostream>

int fatorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; ++i) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int numero;
    std::cout << "Digite um número para calcular o fatorial: ";
    std::cin >> numero;

    std::cout << "Fatorial de " << numero << " é " << fatorial(numero) << std::endl;

    return 0;
}