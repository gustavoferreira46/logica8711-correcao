
// 2. Soma simples
// Leia 5 números e calcule a soma total.
 int main(){
int numeros[5] = {1,2,3,4,5};
        int soma = 0;
       for (int i = 0; i < 5; i++){
        soma = soma + numeros[i];   
        
        std::cout << "a soma e " << soma << std::endl;
     }
     return 0;
     }