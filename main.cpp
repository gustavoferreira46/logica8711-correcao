#include <iostream>
#include <tuple>
#include <string>


int main() {

std::string nome;
int idade;
double altura;

std::cout<<"Digite o seu nome: "<<std::endl;
std::getline(std::cin, nome);

std::cout<<"Digite sua idade: "<<std::endl;
std::cin>>idade;

std::cout<<"digite sua altura: "<<std::endl;
std::cin>>altura;

std::tuple<std::string, int, double> pessoa = std::make_tuple(nome, idade, altura);

std::cout<<"\n --------- dados salvos na tupla ---------"<<std::endl;

std::cout<<"nome: "<<std::get<0>(pessoa)<<std::endl;
std::cout<<"Idade: "<<std::get<1>(pessoa)<<std::endl;
std::cout<<"altura: "<<std::get<2>(pessoa)<<std::endl;

    return 0;
}
