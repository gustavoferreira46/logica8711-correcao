//14. Soma de pares
//Leia 10 números e some apenas os números pares.


int main(){


  int numeros[10] = {1,2,3,4,5,6,7,8,9,10};
    int tamanho = 10;
    int somaPares = 0;
    std::cout<<"=== PARES === "<<std::endl;
    std::cout<<std::endl;

    std::cout<<"Pares: ";
    for(int i = 0; i < tamanho; i++){
        if(numeros[i] % 2 == 0){
            std::cout << numeros[i] << " ";
            somaPares += numeros[i];
        }
    }

std::cout<<std::endl;

std::cout<<"A soma dos numeros pares e: "<<somaPares<<std::endl;

    return 0;
}


    