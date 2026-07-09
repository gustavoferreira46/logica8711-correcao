int main(){//ex17

    std::vector<int> numeros;

    std::cout"========= TAMANHO do vector ========="<<std::endl;
    std::cout<<std::endl;

    numeros.push_back(5);
    numeros.push_back(10);
    numeros.push_back(15);

    std::cout<<"Tamanho do vector: "<<numeros.size()<<std::endl;
    std::cout<<"Elementos do vector: ";
    for(int i = 0; i < numeros.size(); i++){
        std::cout<<numeros[i]<<" ";
    }

    return 0;
}
