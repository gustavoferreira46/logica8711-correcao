#include <iostream>
#include <string>

struct Tarefa{
    int id;
    std::string descricao;
    bool concluida;
};

Tarefa tarefas[50];
int totalTarefas = 0;

void adcionar(){
    std::cout<<"\n --- Adcionar tarefas ---"<<std::endl;

    std::cout<<"ID: ";
    std::cin>>tarefas[totalTarefas].id;

    std::cin.ignore();
    std::cout<<"Descricao: ";
    std::getline(std::cin, tarefas[totalTarefas].descricao);

    tarefas[totalTarefas].concluida = false;

    totalTarefas++;
    std::cout<<"Tarefa adcionada!"<<std::endl;
}

void listar(){
        if(totalTarefas == 0){
            std::cout<<"\nNenhuma tarefa!"<<std::endl;
            return;
        }
        std::cout<<"\n --- Tarefas ---"<<std::endl;
        for(int i = 0; i < totalTarefas; i++){
            std::string status = tarefas[i].concluida ? "S" : "N";
            std::cout<<"["<<status<<"]"<<tarefas[i].id<<" - "<<tarefas[i].descricao<<std::endl;
        }
}
void marcarConcluida(){
    int idBuscando;
    std::cout<<"\nid da tarefa";
    std::cin>>idBuscando;

    for(int i = 0; i < totalTarefas; i++){
        if(tarefas[i].id == idBuscando){
            tarefas[i].concluida = true ;
       }
       std::cout<<"tarefa nao encontrada!"<<std::endl;
    }
} void menu(){
    std::cout<<"\n === TODO LIST ==="<<std::endl;
    std::cout<<"1. Adcionar"<<std::endl;
    std::cout<<"2. listar"<<std::endl;
    std::cout<<"3. marcar concluida"<<std::endl;
    std::cout<<"4. sair"<<std::endl;
    std::cout<<"escolha"<<std::endl;
}

int main(){

    int opcao;

    while(true){
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
                std::cout<<"ate logo!!"<<std::endl;
                return 0;
            default:
                std::cout<<"opcao invalida!"<<std::endl;
        }
    }

    return 0;
}



