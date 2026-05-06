#include <iostream>
#include <string>
#include <ctime>


int main()
{

// -----cadastro-----
std::string NomeAluno;
int anoNascimento;
 std::string data;
std::string cep;
std::string cpf;
std::string rg;
std::string email;
int dia, mes, ano; 
std::string NomeResponsavel;


//-----cursos disponiveis----- 
std::string CursosPresenciais;
std::string CursosEAD;
std::string CursosLivres;
std::string Idiomas;


//-----pagamentos-----
std::string MetodosdePagamento;
std::string DescontosParceiros;

//-----DDD------
std::string dddBR, dddPOR, dddEUA, dddN, contato;
int opcao;






//---Nome completo---
std::cout<<"Seja bem vindo ao SENAC NH, para iniciar nossa experiencia faca seu cadastro: "<<std::endl;
std::cout<<"Nome do aluno: "<<std::endl;
std::getline(std::cin, NomeAluno);

// ---IDADE---
std::cout<<"Digite sua data de nascimento (dia, mes e ano)"<<std::endl;
     std::cin>>data;  
    

     time_t t = time(0);
     tm* hoje = localtime (&t);    

   int anoAtual = hoje->tm_year + 1900;
   int idade = anoAtual - anoNascimento;
    if (idade >= 18){
          std::cout<<"Maior de idade, prosseguindo cadastro!"<<std::endl;
         
     }else{
          std::cout<<"Menor de idade, insira o nome do responsavel"<<std::endl;
           std::cout<<"nome do responsavel: "<<std::endl;
          std::cin>>NomeResponsavel;
     }

     //======rg=====
while(true){
std::cout<<"Digite seu rg: "<<std::endl;
     std::cin>>rg;

std::cout<<rg.length()<<std::endl;
     std::cout<<rg.length()<<std::endl;
     if(rg.length() >= 7 && rg.length() <= 9){
          std::cout<<"RG valido, prosseguindo cadastro!!"<<std::endl;
          break;
     }else{
          std::cout<<"RG invalido, digite novamente"<<std::endl;
     }

}

     //---cpf---
     while(true){
  std::cout<<"digite seu cpf: "<<std::endl;
     std::cin>>cpf;
     
std::cout<<cpf.length()<<std::endl;
     std::cout<<cpf.length()<<std::endl;
     if(cpf.length() == 11){
          std::cout<<"Cpf ok, prosseguindo cadastro! "<<std::endl;
          break;
     }else{
          std::cout<<"Cpf invalido, digite novamente! "<<std::endl;
     }
}

//---contato---
std::cout<<"digite seu email: "<<std::endl;
     std::getline(std::cin, email);
std::cout<<"telefone para contato (sem ddd): "<<std::endl;
    std::cin>>contato;
     std::cout<<"Informe seu pais:"<<std::endl;
     std::cout<<"1 - Brasil\n";
     std::cout<<"2 - Portugal\n";     
     std::cout<<"3 - Estados Unidos\n";
     std::cin>>opcao;

if (opcao == 1){
 dddBR = "+55";
    std::cout << "Telefone completo: " << dddBR << " " <<contato << std::endl;
}else if (opcao == 2){
     dddPOR = "+351";
    std::cout << "Telefone completo: " << dddPOR << " " <<contato << std::endl;
}else if (opcao == 3){
     dddEUA = "+1";
      std::cout << "Telefone completo: " << dddEUA << " " <<contato << std::endl;
}else{
     dddN = "00";
}

     
//---CEP---
while (true){
   std::cout<<"digite seu cep: "<<std::endl;
std::cin>>cep;

std::cout<<cep.length()<<std::endl;
     if(cep.length() == 8){
          std::cout<<"CEP ok, prosseguindo cadastro! "<<std::endl;
          break;
     }else{
          std::cout<<"CEP invalido, digite novamente! "<<std::endl;
}

      }




     return 0;

}




