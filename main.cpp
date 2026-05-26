#include <iostream>

int main (){

int numero;
int contador = 0;

while(true){
  std::cout<<"Digite um numero (0 pra parar): ";
  std::cin>>numero;

    if(numero == 0){
          break;
    }

      contador++;
}

std::cout<<"Voce digitou "<<contador<<" Numeros!"<<std::endl;


return 0;
  }
     
     




