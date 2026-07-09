//9. Inverter array
//Leia 5 números e exiba-os em ordem inversa.

int main(){
    
         int numeros[5] = {1,2,3,4,5};
    for (int i = 4; i >= 0; i--){
       std::cout<<numeros[i]<<std::endl;
   }
        
    return 0;
}