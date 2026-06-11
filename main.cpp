<<<<<<< HEAD
#include<iostream>
#include<string>

void torreDeHanoi(int n, std::string origem, std::string destino, std::string auxiliar) {
    if (n == 1) {
        std::cout << "Mover disco 1 de " << origem << " para " << destino << std::endl;
        return;
    }
    torreDeHanoi(n - 1, origem, auxiliar, destino);
    std::cout << "Mover disco " << n << " de " << origem << " para " << destino << std::endl;
    torreDeHanoi(n - 1, auxiliar, destino, origem);
}
int main(){
    int numDiscos;
    std::cout << "Digite o número de discos: ";
    std::cin >> numDiscos;

    std::cout<<"\nSequencia de movimentos: "<<std::endl;
    torreDeHanoi(numDiscos, "A", "C", "B");

    std::cout<<"\nTotal de movimento: "<<(1 << numDiscos) - 1 << std::endl; 
}
=======
#include <iostream>
#include <string>




int main(){

    int idade = 38;

    std::string resultado = (idade >= 18) ? "maior de idade !" : "menor de idade!";

    std::cout<<resultado<<std::endl;



    return 0;
}

>>>>>>> 08d7f8d5bebcf8523b8d4adf4f04617216161083
