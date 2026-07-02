// 8. Exibir ímpares
//Leia 10 números e exiba apenas os ímpares.


 int main(){

     int numeros[10] = {1,2,3,4,5,6,7,8,9,10};
    int tamanho = 10;

    std::cout<<"=== IMPARES === "<<std::endl;
    std::cout<<std::endl;

 std::cout<<"impares ";
    for(int i = 0; i < tamanho; i++){
        if(numeros[i] %2 != 0){
            std::cout<<numeros[i]<<" ";
        }
    }

    return 0;
    }