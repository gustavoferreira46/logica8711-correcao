#include <iostream>
#include <tuple>
#include <string>


int main() {

std::tuple<int, std::string, double> aluno(1, "Gustavo", 9.5);

std::cout<<"ID: "<<std::get<0>(aluno)<<"\n";
std::cout<<"NOME "<<std::get<1>(aluno)<<"\n";
std::cout<<"NOTA :"<<std::get<2>(aluno)<<"\n"; 

    return 0;
}
