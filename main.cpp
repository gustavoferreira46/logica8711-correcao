#include<iostream>
#include<string>

struct CampeonatosCopa{
        int ano;
        std::string campeao;
};

int main (){
        CampeonatosCopa copa[5] = {
                {2022, "Argentina"},
                {2018, "França"},
                {2014, "Alemanha"},
                {2010, "Espanha"},
                {2006, "Itália"},
        };

        std::cout<<"===== Campeoes da Copa ========"<<std::endl;
        std::cout<<std::endl;

        for(int i = 0; i < 5; i++){
                std::cout<<copa[i].ano<<" - "<<copa[i].campeao<<std::endl;
        }
        return 0;
}