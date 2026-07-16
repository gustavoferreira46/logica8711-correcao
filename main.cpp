#include <iostream>

int encontrarMaior (int* arr, int tamanho){
    int maior = arr[0];
    for (int i = 1; i < tamanho; i++)
    if (arr[i] > maior){
        maior = arr[i];
    }
    return maior;
}
    
int main(){
    int arr[5] = {77,12,45,87,43};
    std::cout<<"o maior numero e "<<encontrarMaior(arr, 5)<<std::endl;
    
    return 0;
}