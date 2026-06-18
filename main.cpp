#include<iostream>
#include<string>

// Padrão bom: Nome da estrutura começa com Maiúscula
struct Jogador {
    std::string nome;
    int cartaoAmarelo;
    int cartaoVermelho;
};

int main () {
    std::cout << "=== registro de cartoes ===" << std::endl;
    std::cout << std::endl;

   
    Jogador jogador;

    std::cout << "Digite o nome do jogador: ";
    std::cin >> jogador.nome;

    std::cout << "Digite a quantidade de cartoes amarelos: ";
    std::cin >> jogador.cartaoAmarelo;

    std::cout << "Digite a quantidade de cartoes vermelhos: ";
    std::cin >> jogador.cartaoVermelho;

    std::cout << std::endl;
    std::cout << "=== SITUACAO ===" << std::endl;


    if(jogador.cartaoVermelho > 0) {
        std::cout << "O jogador " << jogador.nome << " esta suspenso por ter recebido um cartao vermelho." << std::endl;
        
      }else if
       ( jogador.cartaoAmarelo >= 2){
        std::cout<<"O jogador " << jogador.nome << " esta suspenso por ter recebido dois cartoes amarelos." << std::endl;
      
      }else {      
        std::cout << "O jogador " << jogador.nome << " esta liberado para jogar." << std::endl;
    }

    return 0;
}