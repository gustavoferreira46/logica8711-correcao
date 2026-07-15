#include <iostream>


int main(){

    const int primeiroTermo = 1; //a1
    const int ultimoTermo = 100; //an
    const int n = 100; //quantidade total de numeros

    int soma = ((primeiroTermo + ultimoTermo) * n )/2;

    std::cout<<"a soma de todos os numeros de 1 a 100 e: "<<soma<<std::endl;
    
    return 0;
}