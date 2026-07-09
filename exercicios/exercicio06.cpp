//6. Contar elementos
//Leia um array com 10 números e exiba quantos elementos tem.

int main(){
    
       int numeros[10] = {1,2,3,4,5,6,7,8,9,10};
       sizeof(numeros)/sizeof(numeros[0]);
       std::cout<<"o array tem "<<sizeof(numeros)/ sizeof(numeros[0])<<" elementos"<<std::endl;

        
    return 0;
}