#include <iostream>


int main(){

    const int primeiroTermo = 1; //a1
    const int ultimoTermo = 100; //an
    const int n = 100; //quantidade total de numeros

    int soma = ((primeiroTermo + ultimoTermo) * n )/2;

       
    std::cout<<"numeros pares de 1 ate 100: "<<std::endl;
    for(int i = 2; i <= 100; i +=2){
        std::cout<<i<<" "<<std::endl;
    }

    return 0;
}