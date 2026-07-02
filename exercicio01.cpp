// 1. Crie um programa que leia 5 números e exiba-os na tela.

 int main(){
 
    int numeros[5] = {1,2,3,4,5};
    for (int num: numeros){
       std::cout<<num<<std::endl;
   }

 return 0;
 }