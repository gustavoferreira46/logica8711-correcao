#include <iostream>


    
int main(){
    int ingressos[5] = {6000, 8000, 10000, 12000, 15000};
    int jogos = 5;

double somaIngressos = 0;

for(int i = 0; i < jogos; i++){
    somaIngressos += ingressos[i];
}
    double media = somaIngressos / jogos;

    std::cout<<"a media de ingressos foi de "<<media<<std::endl;
    return 0;
}