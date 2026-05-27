#include <iostream>



int encontrarMaior(int arr[], int tamanho){
int maior = arr[0];

for(int i = 1; i < tamanho; i++){
      if(arr[1] > maior){
          maior = arr[1];
      }
}
      return maior;
}

int main() {

int numeros[5];

    std::cout<<"Digite 5 numeros: "<<std::endl;
        for(int i = 0; i < 5; i++){
            std::cout<<"Digite o numero "<<(i + 1)<<": ";
            std::cin>>numeros[i];
        }

        std::cout<<"maior numero: "<<encontrarMaior(numeros, 5)<<std::endl;


    return 0;
}
