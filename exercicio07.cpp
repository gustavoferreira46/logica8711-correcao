//7. Exibir pares
//Leia 10 números e exiba apenas os pares.

int main(){
    int numeros[10] = {1,2,3,4,5,6,7,8,9,10};
    int tamanho = 10;

    std::cout<<"=== PARES === "<<std::endl;
    std::cout<<std::endl;

    std::cout<<"Pares: ";
    for(int i = 0; i < tamanho; i++){
        if(numeros[i] % 2 == 0){
            std::cout<<numeros[i]<<" ";
        }
    }
   


    return 0;
}
