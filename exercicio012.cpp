//12. Números acima da média
//Leia 8 números, calcule a média e exiba quais estão acima dela.

    int nota [8] = {1,2,3,33,23,44,5,2};
    int media = 0;  

    for(int i = 0; i < 8; i++){
        media += nota[i];
    }

    media = media / 8;
    std::cout<<"a media das notas e "<<media<<std::endl;
    std::cout<<"as notas acima da media sao: "<<std::endl;


    for(int i = 0; i < 8; i++){
    if (nota[i] > media){
        std::cout<<"a nota "<<nota[i]<<" esta acima da media"<<std::endl;
    }
    }

   
