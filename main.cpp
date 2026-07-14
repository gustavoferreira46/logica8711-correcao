#include <iostream>
#include<cmath>


int main(){

    const double pi = 3.14;
    

    int raio;
    std::cout<<"digite o raio do circulo: ";
    std::cin>>raio;
    
    double area = pi* (raio * raio);

    std::cout<<"a area do circulo e "<<area<<std::endl;

    

    return 0;
}