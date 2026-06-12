#include <iostream>
#include <string>
#include <cctype>

int main (){
   std::string palavra = "programacao";
   std::string adivinhada = "";
   int erros = 0;
   int maxErros = 6;
   bool ganhou = false;

   for (int i = 0; i <palavra.length(); i++){
        adivinhada += "_";
   }
std::cout<<" === JOGO DA FORCA === "<<std::endl;
std::cout<<"Adivinhe a palavra! "<<std::endl;
std::cout<<std::endl;

while (erros < maxErros && !ganhou){
        std::cout<<"Palavra: ";
        for(int i = 0; i <adivinhada.length(); i++){
                std::cout<<adivinhada[i]<< "_";
        }
        std::cout<<std::endl;
        std::cout<<"Erros: "<<erros<<"/"<<maxErros<<std::endl;

        char letra;
        std::cout<<"Digite uma letra: ";
        std::cin>>letra;
        letra = std::tolower(letra);

        std::cout<<std::endl;

        bool encontrou = false;

        for(int i = 0; i < palavra.length(); i++){
                if(palavra[i] == letra){
                        adivinhada[i] = letra;
                        encontrou = true;
                }
        }

                if(!encontrou){
                std::cout<<"Letra incorreta! "<<std::endl;
                        erros++;
                }else{
                        std::cout<<"Letra correta! "<<std::endl;
                }
                if(adivinhada == palavra){
                        ganhou = true; 
                }
}

        std::cout<<"======="<<std::endl;
        if(ganhou){
                std::cout<<"Parabens, voce ganhou! "<<std::endl;
                std::cout<<"A palavra era: "<<palavra<<std::endl;
        }else{
                std::cout<<"Voce perdeu! "<<std::endl;
                std::cout<<"A palavra era: "<<palavra<<std::endl;
        }



        return 0;
}