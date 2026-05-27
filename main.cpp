#include <iostream>

bool ehPrimo(int numero){
    if(numero <= 1){
        return false;
    }
    
    for(int i = 2; i < numero; i++){
        if(numero % i == 0){
            return false;
        }
    }
    return true; 
}

int main() {
    int numero;

    std::cout<<"Digite um numero: "<<std::endl;
    std::cin>>numero; 

    if(ehPrimo(numero)){
      std::cout<<numero<<" e primo!"<<std::endl;
     }else{
        std::cout<<numero<<" Nao e primo!"<<std::endl;
     }

    return 0;
}
