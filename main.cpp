#include <iostream>

int main (){

  int numero, sorteado = 73;

  do{
     std::cout<<"advinhe: ";
     std::cin>>numero;
     if (numero < sorteado) std::cout<<"Maior!"<<std::endl;
     else if(numero > sorteado) std::cout<<"menor!"<<std::endl;
  }while(numero != sorteado);

std::cout<<"Acertou!!"<<std::endl;

return 0;
  }
     
     




