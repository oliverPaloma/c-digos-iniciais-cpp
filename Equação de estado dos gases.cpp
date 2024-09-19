#include <iostream>

int main() {
    
    const double R = 0.0821; // Constante dos gases (L·atm/(mol·K))

    double V, T, n;

    std::cout << "Digite o volume (em litros): ";
    std::cin >> V;
    std::cout << "Digite a temperatura (em Kelvin): ";
    std::cin >> T;
    std::cout << "Digite o número de mols de gás: ";
    std::cin >> n;

    // Pressao = (nRT) / V
    double P = (n * R * T) / V;

   
    std::cout << "A pressão do gás é: " << P << " atm" << std::endl;

    return 0;
}
