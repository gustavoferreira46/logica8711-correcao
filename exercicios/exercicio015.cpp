#include<iostream>      

//15. Contar positivos e negativos
//Leia 10 números e conte quantos são positivos e quantos são negativos.

int main(){

    int numeros[10] = {1, -2, 3, -4, 5, -6, 7, -8, 9, 10};
    int tamanho = 10;
    int positivo = 0;
    int negativo = 0;

     std::cout<<"=== POSITIVOS === "<<std::endl;
    std::cout<<std::endl;

    std::cout<<"Positivos: ";
    for(int i = 0; i < tamanho; i++){
        if(numeros[i] > 0){
            std::cout<<numeros[i]<<" ";
            positivo++;
        }
    }

    std::cout<<std::endl;
    std::cout<<"=== NEGATIVOS === "<<std::endl;
    std::cout<<std::endl;

    std::cout<<"Negativos: ";
    for(int i = 0; i < tamanho; i++){
        if(numeros[i] < 0){
            std::cout<<numeros[i]<<" ";
            negativo++;
        }
    }
    std::cout<<"\n";
    std::cout << "Tem " << positivo << " numeros positivos e " << negativo << " numeros negativos." << std::endl;


    return 0;
}

   