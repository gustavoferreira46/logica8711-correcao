#include <iostream>


    
int main(){
    int numeros;
    int contador = 0;

    
    
    for(int i = 1; i <= 10; i++){
        std::cout<<"digite um numero: ";
        std::cin>>numeros;
        if(numeros == 5){
            contador++;
        }
    }

    std::cout<<"o numero 5 aparece "<<contador<<" vezes no array"<<std::endl;
    return 0;
}