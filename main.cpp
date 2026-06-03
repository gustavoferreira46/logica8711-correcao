#include <iostream>
#include <string>

struct aluno {
    std::string nome;
    float nota1;
    float nota2;
};

float calcularMedia(aluno a){
        return(a.nota1 + a.nota2) / 2;
}

int main(){

 aluno a1;

std::cout<<"Digite sua primeira nota: "<<std::endl;
std::cin>>a1.nota1;
    std::cout<<"Digite sua segunda nota: "<<std::endl;
    std::cin>>a1.nota2;


    float media = calcularMedia(a1);

    std::cout<<a1.nome<<" - Media: "<<media<<std::endl;

    return 0;
}