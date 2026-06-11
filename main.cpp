#include <iostream>

void quickshort(int* arr, int esquerda, int direita){
        if(esquerda >= direita) return;

        int pivo = arr[direita];
        int i = esquerda - 1;

        for(int j = esquerda; j < direita; j++){
            if(arr[j] <= pivo){
                i++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        int temp = arr[i + 1];
        arr[i + 1] = arr[direita];
        arr[direita] = temp;

        quickshort(arr, esquerda, i);
        quickshort(arr, i + 2, direita);
}

int main(){

        int arr[] = {5, 2, 9, 1, 5, 6, 8};
        int tamanho = 7;

        quickshort(arr, 0, tamanho - 1);

        for(int i = 0; i < tamanho; i++){
                std::cout<<arr[i]<<" ";
        }

        return 0;
}

