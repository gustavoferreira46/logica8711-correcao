#include <iostream>
#include<cmath>

int calcularCubo(int num){
    return static_cast<int>(pow(num, 3));
}

int main(){

int a;

std::cout<<"Digite um numero inteiro: ";
std::cin>>a;

int cubo = calcularCubo(a);

std::cout<<"O cubo do número "<<a<<" é: "<<cubo<<std::endl;


    return 0;
}