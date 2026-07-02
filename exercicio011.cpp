//11. Buscar elemento
//Leia 10 números e procure por um número específico. Se encontrar, exiba a posição.

int main(){
    int numeros [10] = {1,2,3,4,5,6,7,8,9,10};
    int procurado = 5;

    for(int i = 0; i < 10; i++){

        if(numeros[i] == procurado){
            std::cout<<"o numero procurado "<<procurado<<" esta na posicao "<<i<<std::endl;

        }else{
            std::cout<<"o numero procurado "<<procurado<<" nao esta no array"<<std::endl;
        }
    }

return 0;
}