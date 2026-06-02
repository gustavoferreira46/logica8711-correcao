#include <iostream>
#include <string>
#include <cctype>
bool ehpalindromo(std:: string s){
    int inicio = 0;
    int fim = s.length() - 1;

    while(inicio < fim){
    if(s[inicio] != s [fim]){
            return false;
    }
    inicio ++;
    fim--;
    }
    return true;
}

int main(){
    std::string palavra;
    std::cout<<"Digite uma palavra: "<<std::endl;
    std::cin>>palavra;
    for( int i = 0; i< palavra.length(); i++){
            palavra[i] = std::tolower(palavra[i]);
    }

    if(ehpalindromo(palavra)){
        std::cout<<"E palindromo!"<<std::endl;
    }else{
            std::cout<<"nao e palindromo"<<std::endl;
    }

    return 0;
}

