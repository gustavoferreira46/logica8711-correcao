#include <iostream>
#include <string>



struct produto{
int id;
std::string descricao;
bool concluida;
};

produto produtos[50];
int totalProdutos = 0;

void adcionar(){
    std::cout<<"=== Adcionar produtos"<<std::endl;

std::cout<<"Digite o id da tarefa: ";
std::cin>>produtos[totalProdutos].id;

std::cin.ignore();

produtos[totalProdutos].concluida = false;

totalProdutos++;
std::cout<<"Tarefa adcionada!"<<std::endl;
}

void listar(){

    if(totalProdutos == 0){
        std::cout<<"\n nenhuma tarefa adcionada!"<<std::endl;
        return;
    }
        std::cout<<"\n=== produtos ==="<<std::endl;
        for(int i = 0; i <totalProdutos; i++){
            std::string status = produtos[i].concluida ? "S" : "N";
            std::cout<<"["<<status<<"]"<<produtos[i].id<< " - " <<produtos[i].descricao<<std::endl;
        }
   
}

void deletarPoduto(){
    if(totalProdutos == 0){
        std::cout<<"Nenhum produto cadastrado!"<<std::endl;
        return;
    }
    int idBuscando;
    std::cout<<"\n digite o id do produto para deletar: ";
    std::cin>>idBuscando;

    for(int i = 0; i < totalProdutos; i++){
        if(produtos [i].id == idBuscando){
            for(int j = i; j < totalProdutos - 1; j++){
                produtos [j] = produtos [j + 1];
            }
            totalProdutos--;
            std::cout<<"produto deletado com sucesso!"<<std::endl;
            return;
        }
    }
}
 void marcarConcluida(){
    int idBuscando;
    std::cout<<"\nid da tarefa";
    std::cin>>idBuscando;

    bool achou = false;

    for(int i = 0; i < totalProdutos; i++){
        if(produtos[i].id == idBuscando){
            produtos[i].concluida = true ;
            achou = true;
            std::cout<<"Tarefa marcada com concluida!"<<std::endl;
            break;
       }
       if(!achou){
         std::cout<<"tarefa nao encontrada!"<<std::endl;
       }
     
    }
}  void menu(){

  std::cout<<"\n === TODO LIST ==="<<std::endl;
    std::cout<<"1. Adcionar"<<std::endl;
    std::cout<<"2. listar"<<std::endl;
    std::cout<<"3. marcar concluida"<<std::endl;
    std::cout<<"4. deletar produto"<<std::endl;
    std::cout<<"5. sair"<<std::endl;
    std::cout<<"escolha"<<std::endl;
    }



int main(){
    int opcao;

    while (true){
        menu();
        std::cin>>opcao;
            switch (opcao){
                      
    case 1: 
        adcionar();
        break;
    
    case 2:
        listar();
        break;
    
    case 3:
        marcarConcluida();
            break;

            case 4:
            deletarPoduto();
            break;
    case 5:
        std::cout<<"ate logo!"<<std::endl;
        return 0;
    default:
    std::cout<<"opcao invalida"<<std::endl;

            }
    }
            
            
    
    



    return 0;
}

