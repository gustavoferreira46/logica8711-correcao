#include<iostream>      


int main(){
 
int numeros[] = {10,20,30,40,50,60,70,80};
int tamanho = 8;
int buscando;

std::cout<<"=== BUSCAR NUMERO ==="<<std::endl;
std::cout<<std::endl;

std::cout<<"Array: ";
for(int i = 0; i < tamanho; i++){
    std::cout<<numeros[i]<<" ";
}
std::cout<<std::endl;

std::cout<<"Digite o numero a buscar: ";
std::cin>>buscando;

int posicao = -1;

for(int i = 0; i < tamanho; i++){
        if(numeros[i] == buscando){
                posicao = i;
                break;
        }
}
std::cout<<std::endl;
if(posicao != -1){
        std::cout<<"encontrado na posicao "<<posicao<<std::endl;
}else{
        std::cout<<"nao encontrado"<<std::endl;
}
return 0;
}



