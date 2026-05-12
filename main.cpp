#include <iostream>
#include <string>




int main()
{

int num1, num2, soma, subt, mult;
float div;
int op;

std::cout<<"Digite aqui o valor para numero 1: "<<std::endl;
std::cin>>num1;


std::cout<<"Digite aqui o valor para numero 2: "<<std::endl;
std::cin>>num2;

std::cout<<"=====ESCOLHA A OPERACAO"<<std::endl;
std::cout<<"1 = soma"<<std::endl;
std::cout<<"2 = subtracao"<<std::endl;
std::cout<<"3 = multiplicacao"<<std::endl;
std::cout<<"4 = divisao"<<std::endl;
std::cin>>op;

switch (op)
{
     case 1:
     soma = num1 + num2;
std::cout<<"O resultado da soma e: "<<soma<<std::endl;
     break;
     case 2:
     subt = num1 - num2;
std::cout<<"O resultado da subtracao e: "<<subt<<std::endl;
     break;
     case 3:
     mult = num1 * num2;
std::cout<<"O resultado da multiplicacao e: "<<mult<<std::endl;
     break;
     case 4:
div = num1 / num2;
std::cout<<"O resultado da divisao e: "<<div<<std::endl;
}




     return 0;

}


