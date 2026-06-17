#include<iostream>
#include<string>

struct Apostaa{
        std::string time;
        int valor;
        int odd;
};

int main(){
        std::cout<<"====== CALCULADORA DE ApostaAS ======"<<std::endl;
        std::cout<<std::endl;

       Apostaa Apostaa;

        std::cout<<"Time: ";
        std::cin>>Apostaa.time;

        std::cout<<"valor da Apostaa (R$): ";
        std::cin>>Apostaa.valor;

        std::cout<<"odd (multiplicador): ";
        std::cin>>Apostaa.odd;

        int ganho = Apostaa.valor * Apostaa.odd;
        int lucro = ganho - Apostaa.valor;

        std::cout<<std::endl;

        std::cout<<std::endl;
        std::cout<<"====== RESULTADO ======"<<std::endl;
        std::cout<<"voce Apostaou R$ "<<Apostaa.valor<<" no time "<<Apostaa.time<<" com odd "<<Apostaa.odd<<std::endl;
        std::cout<<"se o time vencer, voce ganha R$ "<<ganho<<" e tem um lucro de R$ "<<lucro<<std::endl;
}