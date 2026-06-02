#include <iostream>
#include <string>
#include <cctype>

bool ehpalindromo(std::string s, int inicio, int fim){
    if (inicio >= fim){
        return true;
    }
    if(s[inicio] != s[fim]){
            return false;
    }
    return ehpalindromo(s, inicio + 1, fim -1);
}


int main(){

std::string palavra;

  
    std::cout<<"Digite uma palavra: "<<std::endl;
    std::cin>>palavra;
    
    
    for(char &c : palavra){
        c = std::tolower(c);
    }
         
    

    if(ehpalindromo(palavra, 0, palavra.length() - 1)){
        std::cout<<"E palindromo!"<<std::endl;
    }else{
            std::cout<<"nao e palindromo"<<std::endl;
    }

    return 0;
}

