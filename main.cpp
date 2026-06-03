#include <iostream>
#include <string>

struct pessoa{
    std::string nome;
    int idade;
    float altura;
};

int main(){

pessoa p1 {"junior", 20, 1.80};
pessoa p2 {"carlos", 19, 1.70};

std::cout<<p1.nome<<" tem "<<p1.idade<<" anos e mede "<<p1.altura<<" m "<<std::endl;
std::cout<<p2.nome<<" tem "<<p2.idade<<" anos e mede "<<p2.altura<<"m ";


    return 0;
}

