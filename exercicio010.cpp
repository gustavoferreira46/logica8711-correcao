int main(){

    //10. Contar ocorrências
    //Leia 10 números e conte quantas vezes aparece o número 5.

    int numeros[10] = {1,2,3,4,5,6,7,8,9,5};

    int contador = 0;

    for(int i = 0; i < 10; i++){
        if(numeros[i] == 5){
            contador++;
        }
    }

    std::cout<<"O numero 5 aparece "<<contador<<" vezes no array."<<std::endl;

    return 0;
}