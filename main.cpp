#include <iostream>

void dividir(int a, int b, int * quociente, int* resto){
        *quociente = a / b;
        *resto = a % b;
}

int main(){

int q, r;

dividir (17, 5, &q, &r);
std::cout<<"Quociente: "<<q<<", resto: "<<r<<std::endl;


    return 0;
}

