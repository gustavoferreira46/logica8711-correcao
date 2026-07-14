#include <iostream> 
#include <string> 
 

    int dobrarNum(int num){
        return num * 2;
    }

    int triploNum(int num) {
        return num * 3;
    }

    int quadrado(int num){
        return num * num;
    }

       

    int main () {   

        int num;
        std::cout<<"digite um numero para dobrar: ";
        std::cin>>num;
        

        std::cout<<"Digite outro numero para triplicar: ";
        std::cin>>num;
        

        std::cout<<"Digite o ultimo numero: ";
        std::cin>>num;


        std::cout<<"==== RESPOSTAS ==="<<std::endl;
        std::cout<<"o dobro de "<<num<<" e "<<dobrarNum(num)<<std::endl;
        std::cout<<"o triplo de "<<num<<" e "<<triploNum(num)<<std::endl; 
        std::cout<<"o quadrado de "<<num<<" e "<<quadrado(num)<<std::endl;
        
 

        return 0; 

    } 