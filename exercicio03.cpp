int encontrarMaior (int* arr, int tamanho){
    int maior = arr[0];
    for (int i = 1; i < tamanho; i++){
        if (arr[i] > maior){
            maior = arr[i];
        }
    }
    return maior;
}
     
    int main(){
    int arr[5] = {1,2,3,4,5};
    std::cout<<"o maior numero e "<<encontrarMaior(arr, 5)<<std::endl;


        return 0;
}

