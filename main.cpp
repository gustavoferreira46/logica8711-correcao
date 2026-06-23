#include<iostream>      


int main(){

        int fila [10];
        int fim = -1;
        int inicio;
        int opcao;

        std::cout<<"=== FILA COM MENU ==="<<std::endl;

        while (true){
                std::cout<<"Escolha uma opção:"<<std::endl;
                std::cout<<"1 - enfileirar"<<std::endl;
                std::cout<<"2 - desenfileirar"<<std::endl;
                std::cout<<"3 - exibir fila"<<std::endl;
                std::cout<<"4 - Sair"<<std::endl;
                std::cout<<"Escolha: ";
                std::cin>>opcao;

                if(opcao == 1){
                        if(fim < 10){
                                int valor;
                                std::cout<<"Digite o valor"<<std::endl;
                                std::cin>>valor;
                                fim++;
                                std::cout<<"Valor enfileirado com sucesso!"<<std::endl;
                        }else{
                                std::cout<<"fila cheia!"<<std::endl;
                        }
                }
          else if(opcao == 2){
        if(inicio < fim){
            std::cout << "Removido: " << fila[inicio] << std::endl;
            inicio++;
        } else {
            std::cout << "Fila vazia! Nao ha o que remover." << std::endl;
        }
    }
    else if(opcao == 3){
        if(inicio < fim){
            std::cout << "fila: ";
            for(int i = inicio; i < fim; i++){
               std::cout<<fila[i]<<" ";
            }
            std::cout<<std::endl;
        } else {
            std::cout << "fila vazia!" << std::endl;
        }
    }
    else if(opcao == 4){
        
        std::cout << "Saindo..." << std::endl;
        break;
    }
    else {
      
        std::cout << "Opcao invalida!" << std::endl;
    }
}
return 0;
}

