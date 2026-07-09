#include<iostream>
#include<vector>

int main(){ex20

    std::vector<int> numeros;

    std::cout<<"========= LIMPAR VECTOR ========="<<std::endl;

    numeros.push_back(10);
    numereos.push_back(20);
    numeros.push_back(30);

    std::cout<<"Tamanho antes: "<<numeros.size()<<std::endl;

    numeros.clear();

    std::cout<<"Tamanho depois: "<<numeros.size()<<std::endl;
    std::cout<<"Vector vazio?"<<{numeros.empty() ? "Sim" : "Nao"}<<std::endl;
    return 0;
}