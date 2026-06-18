#include<iostream>      
        int jogos;
        int main(){

        std::cout<<"============ calculador de publico ==========="<<std::endl;
        std::cout<<std::endl;

        std::cout<<"Quantos jogos foram realizados?"<<std::endl;
        std::cin>>jogos;

        int somaPublico = 0;

        for(int i = 1; i <= jogos; i++){
                int publico;
                std::cout<<"Quantas pessoas assistiram o jogo "<<i<<"?"<<std::endl;
                std::cin>>publico;
                somaPublico += publico;
        }

        int media = somaPublico / jogos;

        std::cout<<std::endl;
        std::cout<<" ====== RESULTADO ======"<<std::endl;       
        std::cout<<"Media de publico foi de "<<media<<" pessoas por jogo."<<std::endl;
        std::cout<<"Total de publico foi de "<<somaPublico<<" pessoas."<<std::endl;

        return 0;
        }