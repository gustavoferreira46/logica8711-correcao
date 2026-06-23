#include<iostream>      


int main(){

        int pilha[10];
        int topo = -1;
        int opcao;

        std::cout<<"=== PILHA COM MENU ==="<<std::endl;

        while (true){
                std::cout<<"Escolha uma opção:"<<std::endl;
                std::cout<<"1 - Empilhar"<<std::endl;
                std::cout<<"2 - Desempilhar"<<std::endl;
                std::cout<<"3 - exibir pilha"<<std::endl;
                std::cout<<"4 - Sair"<<std::endl;
                std::cin>>opcao;

                if(opcao == 1){
                        if(topo < 9){
                                int valor;
                                std::cout<<"Digite o valor"<<std::endl;
                                std::cin>>valor;
                                topo++;
                                pilha[topo];
                                std::cout<<"Valor empilhado com sucesso!"<<std::endl;
                        }else{
                                std::cout<<"Pilha cheia!"<<std::endl;
                        }
                }
                else if(opcao == 2){
                        if(topo >= 0){
                                std::cout<<"Removido: "<<pilha[topo]<<std::endl;
                                topo--;
                        }else{
                                std::cout<<"Pilha vazia!"<<std::endl;
                        }
                }
                else if(opcao == 3){
                        if(topo >= 0){

                        }
                }
                else if(opcao == 4){
                        std::cout<<"Saindo..."<<std::endl;
                        break;
                }
        }
        
        return 0;
}