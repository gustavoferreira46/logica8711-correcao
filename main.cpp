#include <iostream>



    int main () {

        int idade;

        std::cout<<"Digite sua idade para verificar se voce pode se cadastrar: ";
        std::cin>>idade;

        if (idade >= 18 && idade < 60) {
            std::cout<<"Maior de idade, prosseguindo cadastro!"<<std::endl;

        }else if (idade >= 60 ){
        
                std::cout<<"terceira idade!!"<<std::endl;            
        
        }else{
            std::cout<<"Menor de idade!!  "<<std::endl;
        }
        

        return 0;
    }