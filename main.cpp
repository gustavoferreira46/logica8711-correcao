#include <iostream> 

#include <string> 

 

 

    int main () { 

 

        std::string palavra; 

        std::string Pletra; 

        std::string Uletra; 

 

        std::cout << "Digite uma palavra: "; 

        std::cin >> palavra; 

 

        std::cout<<"a palavra digitada foi: "<<palavra<<std::endl; 

 

        if (palavra.length() > 0) { 

            Pletra = palavra[0]; 

            std::cout << "A primeira letra da palavra e: " << Pletra << std::endl; 

        } 

 

        if (palavra.length() > 0) { 

            Uletra = palavra[palavra.length() - 1]; 

            std::cout << "A ultima letra da palavra e: " << Uletra << std::endl; 

        } 

 

        return 0; 

    } 