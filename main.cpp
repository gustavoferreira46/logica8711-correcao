#include<iostream>
#include<string>

int main (){

        std::string time1, time2;
        int gols1, gols2;

        std::cout<<" =======COMPARADOR DE PLACAR ======= "<<std::endl;
        std::cout<<std::endl;

        std::cout<<"time 1: ";
        std::cin>>time1;
        std::cout<<"Gols time 1: ";
        std::cin>>gols1;

        std::cout<<"time 2: ";
        std::cin>>time2;
        std::cout<<"Gols time 2: ";
        std::cin>>gols2;

        std::cout<<std::endl;
        std::cout<<" =======RESULTADO DO JOGO ======= "<<std::endl;
        std::cout<<time1<<" "<<gols1<<" x "<<gols2<<" "<<time2<<std::endl;
        std::cout<<std::endl;

        if (gols1 > gols2){
                std::cout<<"o time vencedor foi: "<<time1<<"!!!"<<std::endl;
                std::cout<<"o time perdedor foi: "<<time2<<std::endl;
        }
        else if (gols2 > gols1){
                std::cout<<"o time vencedor foi: "<<time2<<"!!!"<<std::endl;
                 std::cout<<"o time perdedor foi: "<<time1<<std::endl;
        }

        else{
                std::cout<<"o jogo empatou!!"<<std::endl;
        }

        return 0;
}