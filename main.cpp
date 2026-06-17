#include <iostream>
#include <string>

struct jogador{
        std::string nome;
        std::string time;
        int gols;
};

int main (){

        jogador jogadores[5];

        std::cout<<"====== COPA - RANKING DE GOLEADORES ======"<<std::endl;
        std::cout<<std::endl;

        for(int i = 0; i < 5; i++){

                std::cout<<"jogador "<<(i + 1)<<": "<<std::endl;
                std::cout<<"nome: ";
                std::cin>>jogadores[i].nome;
                std::cout<<"gols: ";
                std::cin >> jogadores[i].gols;
                std::cout<<"time: ";
                std::cin>>jogadores[i].time;
                std::cout<<"gols: ";
                std::cout<<std::endl;
        }

        std::cout<<"====== RANKING ======"<<std::endl;
        std::cout<<std::endl;

        for(int i = 0; i < 5 - 1; i++){
                for(int j = 0; j < 5 - 1; j++){
                        if(jogadores[i].gols < jogadores[j + 1].gols){
                                jogador temp = jogadores[i];
                                jogadores [j] = jogadores[j + 1];
                                jogadores [j+ 1] = temp;
                        }
                }
        }
        for(int i = 0; i < 5; i++){
                std::cout<<(i + 1)<<"º - "<<jogadores[i].nome
                <<" - "<<jogadores[i].time<<") - "
                <<jogadores[i].gols<<" gols"<<std::endl;
        }
        return 0;
}
