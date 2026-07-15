#include <iostream>
#include<cmath>

void tabuada(int numero, int multiplicador){
    if(multiplicador == 0){
        return;
    }

    tabuada (numero, multiplicador - 1);

    std::cout<<numero<<" x "<<multiplicador<<" = "<<(numero * multiplicador)<<std::endl;
}
int main(){

    tabuada(7, 10);

    
    return 0;
}