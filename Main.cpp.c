#include<iostream>
#include<vector>

int main(){

    std::vector<int>numeros;

    std::cout<<" ====== VECTOR (Arraylist em C++) ====== "<<std::endl;

    numeros.push_back(10);
    numereos.push_back(20);
    numeros.push_back(30);

    std::cout<<"Numeros: ";
    for(int i = 0; i < numeros.size(); i++){
        std::cout<<numeros[i]<<" ";
    }
    std::cout<<std::endl;

    std::cout<<"Tamanho: "<<std::endl;

    std::cout<<"Apos remover o ultimo: ";
    for(int i = 0; i < numeros.size(); i++){
        std::cout<<numeros[i]<<" ";
    }
    return 0;
}