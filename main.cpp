#include <iostream>
#include <string>



int main()
{




// -----cadastro aluno e responsavel-----
std::string NomeAluno;
std::string dataNascimento;
std::string cep;
std::string cpf;
std::string rg;
std::string email;
int idade;
std::string NomeResponsavel;


//-----cursos disponiveis----- 
std::string CursosPresenciais;
std::string CursosEAD;
std::string CursosLivres;
std::string Idiomas;


//-----pagamentos-----
std::string MetodosdePagamento;
std::string DescontosParceiros;






//---Cadastro---
std::cout<<"Seja bem vindo ao SENAC NH, para iniciar nossa experiencia faca seu cadastro: "<<std::endl;
std::cout<<"Nome do aluno: "<<std::endl;
std::getline(std::cin, NomeAluno);

//---CEP---
std::cout<<"digite seu cep: "<<std::endl;
std::cin>>cep;

std::cout<<cep.length()<<std::endl;
     std::cout<<cep.length()<<std::endl;
     if(cep.length() > 8){
          std::cout<<"CEP Inválido, digite novamente!"<<std::endl;
     }else{
          std::cout<<"CEP ok, prosseguindo cadastro! ";
     }

     //---cpf---
     std::cout<<"digite seu cpf: "<<std::endl;
     std::cin>>cpf;
     
std::cout<<cpf.length()<<std::endl;
     std::cout<<cpf.length()<<std::endl;
     if(cpf.length() > 11){
          std::cout<<"Cpf invalido, digite novamente! "<<std::endl;
     }else{
          std::cout<<"Cpf valido, prosseguindo cadastro!!"<<std::endl;
     }

std::cout<<"Digite seu rg: "<<std::endl;
     std::cin>>rg;

std::cout<<rg.length()<<std::endl;
     std::cout<<rg.length()<<std::endl;
     if(rg.length() >= 7 && rg.length() <= 9){
          std::cout<<"RG valido, prosseguindo cadastro!!"<<std::endl;
     }else{
          std::cout<<"RG invalido, digite novamente"<<std::endl;
     }

// ---IDADE MENOR QUE 18 OBRIGATORIO NOME DO RESPONSAVEL---
std::cout<<"digite sua idade para finalizar o seu cadastro!!: "<<std::endl;
std::cin>>idade;
if(idade >= 18){
      std::cout<<"processando cadastro, aguarde"<<std::endl;
}else{
std::cout<<"Nome do responsavel:"<<std::endl;
std::cin>>NomeResponsavel;
std::getline(std::cin, NomeResponsavel);
}




     return 0;
}
