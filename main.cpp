#include <iostream>


int main(){

int numero = 42;
int* ptr = &numero;

std::cout<<"Acessar via variavel: "<<numero<<std::endl;
std::cout<<"acessar via ponteiro: "<<*ptr<<std::endl;
    return 0;
}

