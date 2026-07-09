#include<iostream>
#include<vector>

int main(){//ex16

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
    

    int posicao;
    std::cout<<"Digite a posicao : "<<std::endl;
    std::cin>>posicao;
    numeros.erase(numeros.begin() + posicao);

    std::cout<<"Apos remover o ultimo: ";
    for(int i = 0; i < numeros.size(); i++){
        std::cout<<numeros[i]<<" ";
    }


    return 0;
}