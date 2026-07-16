#include <iostream>


    
int main(){
    int numero [10] = {12, 87, 45, 3, 99, 28, 61, 7, 74, 50};
    int contador = 0;

    for(int i = 0; i < 10; i++){
        if(numero[i] > 50){
            std::cout<<numero[i]<<" ";
            contador++;
        }
    }


    return 0;
}