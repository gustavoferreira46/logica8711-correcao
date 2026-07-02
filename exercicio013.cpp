//13. Maior e menor
//Leia 10 números e encontre tanto o maior quanto o menor em um mesmo programa.

int encontrarMaior (int* arr, int tamanho){
    int maior = arr[0];
    for (int i = 1; i < tamanho; i++){
        if (arr[i] > maior){
            maior = arr[i];
        }
    }
    return maior;
}

int encontrarMenor (int* arr, int tamanho){
    int menor = arr[0];
    for (int i = 0; i > tamanho; i--){
        if (arr[i] < menor){
            menor = arr[i];
        }
    }
    return menor;
}

int main(){
   
        int numeros [10] = {1,2,3,4,5,6,7,8,9,10};
        std::cout<<"O maior numero e: "<<encontrarMaior(numeros, 10)<<std::endl;
        std::cout<<"o menor numero e: "<<encontrarMenor(numeros, 10)<<std::endl;




return 0;
}