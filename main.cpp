#include <iostream>
#include <string>

#include <ctime>


int main()
{




// -----cadastro aluno e responsavel-----

std::string NomeAluno;
std::string dataNascimento;
int anoNascimento;
 std::string data;
std::string cpf;
std::string rg;
std::string email;
int dia, mes, ano;
int anoUsu;
int idade;
std::string NomeResponsavel;
char barra;

//----localizacao----
std::string cep;
std::string rua;
std::string regiao;
std::string estado;
std::string cidade;
std::string bairro;




//----genero---
std::string genero;
std::string masculino;
std::string feminino;
std::string nResponde;


//-----cursos disponiveis----- 
 std::string Idiomas;
std::string MetodosdePagamento;
std::string DescontosParceiros;

     struct CursoTecnico
{
    std::string nome;
    float valor;
    int parcelas;
    float valorParcela;
    std::string docentes;
    std::string horarios;
    int cargaHoraria;
};

CursoTecnico tds;
CursoTecnico enfermagem;
CursoTecnico vestuario;


   int opcaoCurso;
int cursoEad;
int cursoPresencial;

//-----DDD------
std::string dddBR, dddPOR, dddEUA, dddN, contato;







//---Cadastro---
//---Nome completo---
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
     while(true){
  std::cout<<"digite seu cpf: ";
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
          std::cout<<"RG invalido, digite novamente: ";
     }
}
// ---IDADE MENOR QUE 18 OBRIGATORIO NOME DO RESPONSAVEL---
     std::cout<<"Digite sua data de nascimento (dd/mm/"; std::cout<<"aaaa "<<std::endl;
      std::cin >> dia >> barra >> mes >> barra >> anoUsu;

std::cin.ignore();
   if (2026 - anoUsu  >= 18) {
        std::cout<<"Maior de idade, prosseguindo cadastro!"<<std::endl;
     
    } else {
        std::cout<<"Menor de idade, digite o nome do responsavel! "<<std::endl; 
     std::getline(std::cin, NomeResponsavel);


    }

 
     

//-------genero--------
    std::cout<<"Qual seu genero? "<<std::endl;
     
     std::cout<<"informe seu genero: "<<std::endl;
     std::cout<<"1 - masculino "<<std::endl;
     std::cout<<"2 - feminino "<<std::endl;
     std::cout<<"3 - prefiro nao responder"<<std::endl;
     std::cin>>opcao;
std::cout<<"prosseguindo cadastro..."<<std::endl;
std::cout<<"\n"<<std::endl;



//---contato---
std::cout<<"digite seu email: "<<std::endl;
std::cin.ignore();
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
std::cout<<"Nome do responsavel:"<<std::endl;
std::cin>>NomeResponsavel;
std::getline(std::cin, NomeResponsavel);
     dddN = "00";
}

     

      //---cursos disponiveis---
      std::cout<<"temos os seguintes cursos tecnicos disponiveis: "<<std::endl;

std::cout<<"1 - EAD - Ensino a distancia "<<std::endl;
std::cout<<"2 - Presencial "<<std::endl;
std::cin>>opcaoCurso;







    std::cout << "===== CURSOS =====" << std::endl;
    std::cout << "1 - TDS" << std::endl;
    std::cout << "2 - Enfermagem" << std::endl;
    std::cout << "3 - Modelagem" << std::endl;
    std::cout << "Escolha um curso: ";
    std::cin >> opcao;  


     std::cout << "Curso escolhido: TDS, prosseguindo para a proxima etapa..." << std::endl;
       std::cout << "O curso Tecnico em Desenvolvimento de Sistemas" << std::endl;
                std::cout << "forma profissionais da area da tecnologia." << std::endl;
                std::cout << "O aluno aprende programacao, banco de dados," << std::endl;
                std::cout << "sites, sistemas e desenvolvimento de software.\n" << std::endl;

                std::cout << "Valor do curso: R$ 14.405,49" << std::endl;
                std::cout << "Parcelamento: ate 30x de R$ 493,51" << std::endl;
     break; 
case 2:
        std::cout << "Curso escolhido: Enfermagem, prosseguindo para a proxima etapa" << std::endl;
           std::cout << "O curso Tecnico em Enfermagem prepara" << std::endl;
                std::cout << "profissionais para atuar na area da saude," << std::endl;
                std::cout << "auxiliando pacientes e equipes medicas.\n" << std::endl;

                std::cout << "Valor do curso: R$ 15.278,00" << std::endl;
                std::cout << "Parcelamento: ate 40x de R$ 371,00" << std::endl;

        break;
case 3:
        std::cout << "Curso escolhido: Modelagem, prosseguindo para a proxima etapa" << std::endl;
           std::cout << "O curso Tecnico em Modelagem do Vestuario" << std::endl;
                std::cout << "ensina criacao de moldes, desenvolvimento" << std::endl;
                std::cout << "de pecas e producao de moda.\n" << std::endl;

                std::cout << "Valor do curso: R$ 14.844,79" << std::endl;
                std::cout << "Parcelamento: ate 28x" << std::endl;

  
        std::cout << "Opção inválida!" << std::endl;    



    std::cout << "===== CURSOS EAD =====" << std::endl;
std::cout << "1 - RH" << std::endl;
std::cout << "2 - Logistica" << std::endl;
std::cout << "3 - Contabilidade" << std::endl;
std::cout << "4 - Transacoes Imobiliarias" << std::endl;







std::cout << "Curso escolhido: RH" << std::endl;
std::cout << "Prosseguindo para a proxima etapa...\n" << std::endl;

std::cout << "O curso EAD de Recursos Humanos prepara" << std::endl;
std::cout << "profissionais para atuar na gestao de pessoas," << std::endl;
std::cout << "recrutamento, selecao, treinamento e organizacao" << std::endl;
std::cout << "de equipes dentro das empresas.\n" << std::endl;

std::cout << "O aluno aprende sobre comunicacao empresarial," << std::endl;
std::cout << "lideranca, departamento pessoal e administracao" << std::endl;
std::cout << "de colaboradores.\n" << std::endl;

std::cout << "Carga horaria: 800 horas" << std::endl;
std::cout << "Duracao: 12 meses" << std::endl;

std::cout << "\nValor total: R$ 3.355,00" << std::endl;
std::cout << "Entrada: R$ 99,99" << std::endl;
std::cout << "Parcelamento: 22x de R$ 148,00" << std::endl;



     case 2:
std::cout << "\nCurso escolhido: Logistica" << std::endl;
std::cout << "\nCurso escolhido: Logistica" << std::endl;
std::cout << "Prosseguindo para a proxima etapa...\n" << std::endl;

std::cout << "O curso EAD de Logistica prepara profissionais" << std::endl;
std::cout << "para atuar no controle, armazenamento, transporte" << std::endl;
std::cout << "e distribuicao de produtos e mercadorias.\n" << std::endl;

std::cout << "O aluno aprende sobre estoque, organizacao," << std::endl;
std::cout << "planejamento logistico, cadeia de suprimentos" << std::endl;
std::cout << "e processos administrativos.\n" << std::endl;

std::cout << "Carga horaria: 800 horas" << std::endl;
std::cout << "Duracao: 12 meses" << std::endl;

std::cout << "\nValor total: R$ 3.751,00" << std::endl;
std::cout << "Entrada: R$ 99,99" << std::endl;
std::cout << "Parcelamento: 22x de R$ 166,00" << std::endl;






std::cout << "\nCurso escolhido: Contabilidade" << std::endl;
std::cout << "Prosseguindo para a proxima etapa...\n" << std::endl;

std::cout << "O curso EAD de Contabilidade prepara profissionais" << std::endl;
std::cout << "para atuar no controle financeiro, organizacao" << std::endl;
std::cout << "de documentos fiscais e processos contabeis.\n" << std::endl;

std::cout << "O aluno aprende sobre fluxo de caixa," << std::endl;
std::cout << "balanco patrimonial, calculos financeiros," << std::endl;
std::cout << "tributacao e administracao empresarial.\n" << std::endl;

std::cout << "Carga horaria: 800 horas" << std::endl;
std::cout << "Duracao: 12 meses" << std::endl;

std::cout << "\nValor total: R$ 3.355,00" << std::endl;
std::cout << "Entrada: R$ 99,99" << std::endl;
std::cout << "Parcelamento: 22x de R$ 148,00" << std::endl;



    std::cout << "Opcao invalida!" << std::endl;
   







     return 0;

}

