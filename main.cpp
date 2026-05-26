#include <iostream>

void imprimirAteN(int n) {
    for (int i = 1; i <= n; i++) {
        std::cout << i << " "; 
    }
} 

int main() {
    int numero;
    std::cout << "me diga um numero: " << std::endl;
    std::cin >> numero;

    imprimirAteN(numero);

    return 0;
}
