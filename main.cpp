#include <iostream>


    
int main(){
    int numeros [8] = {12, 87, 45, 3, 99, 28, 61, 7};
    

    for(int num:numeros){
        std::cout<<"posicao correta: "<<num<<std::endl;
       
    }
    
    for(int i = 7; i >= 0; i--){
        std::cout<<"invertido: "<<numeros[i]<<std::endl;
    }

    return 0;
}