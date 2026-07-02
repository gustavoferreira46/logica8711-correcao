// ==========================================
// EXERCÍCIO 1: Exibir números
// ==========================================
#include <iostream>

int main1() {
    int numeros[5] = {1, 2, 3, 4, 5};
    for (int num : numeros) {
        std::cout << num << std::endl;
    }
    return 0;
}

// ==========================================
// EXERCÍCIO 2: Soma simples
// ==========================================
int main2() {
    int numeros[5] = {1, 2, 3, 4, 5};
    int soma = 0;
    for (int i = 0; i < 5; i++) {
        soma = soma + numeros[i];   
    }
    std::cout << "a soma e " << soma << std::endl;
    return 0;
}

// ==========================================
// EXERCÍCIO 3: Encontrar maior
// ==========================================
int encontrarMaior3(int* arr, int tamanho) {
    int maior = arr[0];
    for (int i = 1; i < tamanho; i++) {
        if (arr[i] > maior) {
            maior = arr[i];
        }
    }
    return maior;
}
     
int main3() {
    int arr[5] = {1, 2, 3, 4, 5};
    std::cout << "o maior numero e " << encontrarMaior3(arr, 5) << std::endl;
    return 0;
}

// ==========================================
// EXERCÍCIO 4: Encontrar menor (e maior)
// ==========================================
int encontrarMaior4(int* arr, int tamanho) {
    int maior = arr[0];
    for (int i = 1; i < tamanho; i++) {
        if (arr[i] > maior) {
            maior = arr[i];
        }
    }
    return maior;
}

int encontrarMenor4(int* arr, int tamanho) {
    int menor = arr[0];
    for (int i = 1; i < tamanho; i++) {
        if (arr[i] < menor) {
            menor = arr[i];
        }
    }
    return menor;
}

int main4() {
    int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "O maior numero e: " << encontrarMaior4(numeros, 10) << std::endl;
    std::cout << "o menor numero e: " << encontrarMenor4(numeros, 10) << std::endl;
    return 0;
}

// ==========================================
// EXERCÍCIO 5: Calcular média
// ==========================================
int main5() {
    int ingressos[5] = {6000, 8000, 10000, 12000, 15000};
    int jogos = 5;
    double somaIngressos = 0;

    for(int i = 0; i < jogos; i++) {
        somaIngressos += ingressos[i];
    }
    double media = somaIngressos / jogos;
    std::cout << "a media de ingressos por jogo foi de " << media << std::endl;
    return 0;
}

// ==========================================
// EXERCÍCIO 6: Contar elementos
// ==========================================
int main6() {
    int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "o array tem " << sizeof(numeros) / sizeof(numeros[0]) << " elementos" << std::endl;
    return 0;
}

// ==========================================
// EXERCÍCIO 7: Exibir pares
// ==========================================
int main7() {
    int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tamanho = 10;

    std::cout << "=== PARES === " << std::endl << std::endl;
    std::cout << "Pares: ";
    for(int i = 0; i < tamanho; i++){
        if(numeros[i] % 2 == 0){
            std::cout << numeros[i] << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}

// ==========================================
// EXERCÍCIO 8: Exibir ímpares
// ==========================================
int main8() {
    int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tamanho = 10;

    std::cout << "=== IMPARES === " << std::endl << std::endl;
    std::cout << "impares: ";
    for(int i = 0; i < tamanho; i++){
        if(numeros[i] % 2 != 0){
            std::cout << numeros[i] << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}

// ==========================================
// EXERCÍCIO 9: Inverter array
// ==========================================
int main9() {
    int numeros[5] = {1, 2, 3, 4, 5};
    for (int i = 4; i >= 0; i--){
       std::cout << numeros[i] << std::endl;
    }
    return 0;
}

// ==========================================
// EXERCÍCIO 10: Contar ocorrências
// ==========================================
int main10() {
    int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 5};
    int contador = 0;

    for(int i = 0; i < 10; i++){
        if(numeros[i] == 5){
            contador++;
        }
    }
    std::cout << "O numero 5 aparece " << contador << " vezes no array." << std::endl;
    return 0;
}

// ==========================================
// FUNÇÃO PRINCIPAL 
// ==========================================
int main() {
    // Para testar qualquer exercício, basta trocar o número aqui embaixo.
    // Exemplo: para testar o Exercício 5, use: main5();
   // ==========================================
// EXERCÍCIO 1: Exibir números
// ==========================================
#include <iostream>

int main1() {
    int numeros[5] = {1, 2, 3, 4, 5};
    for (int num : numeros) {
        std::cout << num << std::endl;
    }
    return 0;
}

// ==========================================
// EXERCÍCIO 2: Soma simples
// ==========================================
int main2() {
    int numeros[5] = {1, 2, 3, 4, 5};
    int soma = 0;
    for (int i = 0; i < 5; i++) {
        soma = soma + numeros[i];   
    }
    std::cout << "a soma e " << soma << std::endl;
    return 0;
}

// ==========================================
// EXERCÍCIO 3: Encontrar maior
// ==========================================
int encontrarMaior3(int* arr, int tamanho) {
    int maior = arr[0];
    for (int i = 1; i < tamanho; i++) {
        if (arr[i] > maior) {
            maior = arr[i];
        }
    }
    return maior;
}
     
int main3() {
    int arr[5] = {1, 2, 3, 4, 5};
    std::cout << "o maior numero e " << encontrarMaior3(arr, 5) << std::endl;
    return 0;
}

// ==========================================
// EXERCÍCIO 4: Encontrar menor (e maior)
// ==========================================
int encontrarMaior4(int* arr, int tamanho) {
    int maior = arr[0];
    for (int i = 1; i < tamanho; i++) {
        if (arr[i] > maior) {
            maior = arr[i];
        }
    }
    return maior;
}

int encontrarMenor4(int* arr, int tamanho) {
    int menor = arr[0];
    for (int i = 1; i < tamanho; i++) {
        if (arr[i] < menor) {
            menor = arr[i];
        }
    }
    return menor;
}

int main4() {
    int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "O maior numero e: " << encontrarMaior4(numeros, 10) << std::endl;
    std::cout << "o menor numero e: " << encontrarMenor4(numeros, 10) << std::endl;
    return 0;
}

// ==========================================
// EXERCÍCIO 5: Calcular média
// ==========================================
int main5() {
    int ingressos[5] = {6000, 8000, 10000, 12000, 15000};
    int jogos = 5;
    double somaIngressos = 0;

    for(int i = 0; i < jogos; i++) {
        somaIngressos += ingressos[i];
    }
    double media = somaIngressos / jogos;
    std::cout << "a media de ingressos por jogo foi de " << media << std::endl;
    return 0;
}

// ==========================================
// EXERCÍCIO 6: Contar elementos
// ==========================================
int main6() {
    int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "o array tem " << sizeof(numeros) / sizeof(numeros[0]) << " elementos" << std::endl;
    return 0;
}

// ==========================================
// EXERCÍCIO 7: Exibir pares
// ==========================================
int main7() {
    int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tamanho = 10;

    std::cout << "=== PARES === " << std::endl << std::endl;
    std::cout << "Pares: ";
    for(int i = 0; i < tamanho; i++){
        if(numeros[i] % 2 == 0){
            std::cout << numeros[i] << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}

// ==========================================
// EXERCÍCIO 8: Exibir ímpares
// ==========================================
int main8() {
    int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tamanho = 10;

    std::cout << "=== IMPARES === " << std::endl << std::endl;
    std::cout << "impares: ";
    for(int i = 0; i < tamanho; i++){
        if(numeros[i] % 2 != 0){
            std::cout << numeros[i] << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}

// ==========================================
// EXERCÍCIO 9: Inverter array
// ==========================================
int main9() {
    int numeros[5] = {1, 2, 3, 4, 5};
    for (int i = 4; i >= 0; i--){
       std::cout << numeros[i] << std::endl;
    }
    return 0;
}

// ==========================================
// EXERCÍCIO 10: Contar ocorrências
// ==========================================
int main10() {
    int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 5};
    int contador = 0;

    for(int i = 0; i < 10; i++){
        if(numeros[i] == 5){
            contador++;
        }
    }
    std::cout << "O numero 5 aparece " << contador << " vezes no array." << std::endl;
    return 0;
}

// ==========================================
// EXERCÍCIO 11: Buscar elemento
// ==========================================
#include <iostream>

int main11() {
    int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int procurado = 5;
    bool encontrado = false;

    for(int i = 0; i < 10; i++) {
        if(numeros[i] == procurado) {
            std::cout << "o numero procurado " << procurado << " esta na posicao " << i << std::endl;
            encontrado = true;
            break; // Já achou, pode parar o loop
        }
    }

    if(!encontrado) {
        std::cout << "o numero procurado " << procurado << " nao esta no array" << std::endl;
    }

    return 0;
}

// ==========================================
// EXERCÍCIO 12: Números acima da média
// ==========================================
int main12() {
    int nota[8] = {1, 2, 3, 33, 23, 44, 5, 2};
    int media = 0;  

    for(int i = 0; i < 8; i++) {
        media += nota[i];
    }

    media = media / 8;
    std::cout << "a media das notas e " << media << std::endl;
    std::cout << "as notas acima da media sao: " << std::endl;

    for(int i = 0; i < 8; i++) {
        if (nota[i] > media) {
            std::cout << "a nota " << nota[i] << " esta acima da media" << std::endl;
        }
    }
    return 0;
}

// ==========================================
// EXERCÍCIO 13: Maior e menor
// ==========================================
int encontrarMaior13(int* arr, int tamanho) {
    int maior = arr[0];
    for (int i = 1; i < tamanho; i++) {
        if (arr[i] > maior) {
            maior = arr[i];
        }
    }
    return maior;
}

int encontrarMenor13(int* arr, int tamanho) {
    int menor = arr[0];
    for (int i = 1; i < tamanho; i++) {
        if (arr[i] < menor) {
            menor = arr[i];
        }
    }
    return menor;
}

int main13() {
    int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "O maior numero e: " << encontrarMaior13(numeros, 10) << std::endl;
    std::cout << "o menor numero e: " << encontrarMenor13(numeros, 10) << std::endl;
    return 0;
}

// ==========================================
// EXERCÍCIO 14: Soma de pares
// ==========================================
int main14() {
    int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tamanho = 10;
    int somaPares = 0;
    
    std::cout << "=== PARES === " << std::endl << std::endl;
    std::cout << "Pares: ";
    for(int i = 0; i < tamanho; i++) {
        if(numeros[i] % 2 == 0) {
            std::cout << numeros[i] << " ";
            somaPares += numeros[i];
        }
    }
    std::cout << std::endl;
    std::cout << "A soma dos numeros pares e: " << somaPares << std::endl;
    return 0;
}

// ==========================================
// EXERCÍCIO 15: Contar positivos e negativos
// ==========================================
int main15() {
    int numeros[10] = {1, -2, 3, -4, 5, -6, 7, -8, 9, 10};
    int tamanho = 10;
    int positivo = 0;
    int negativo = 0;

    std::cout << "=== POSITIVOS === " << std::endl << std::endl;
    std::cout << "Positivos: ";
    for(int i = 0; i < tamanho; i++) {
        if(numeros[i] > 0) {
            std::cout << numeros[i] << " ";
            positivo++;
        }
    }

    std::cout << std::endl;
    std::cout << "=== NEGATIVOS === " << std::endl << std::endl;
    std::cout << "Negativos: ";
    for(int i = 0; i < tamanho; i++) {
        if(numeros[i] < 0) {
            std::cout << numeros[i] << " ";
            negativo++;
        }
    }
    std::cout << "\n";
    std::cout << "Tem " << positivo << " numeros positivos e " << negativo << " numeros negativos." << std::endl;
    return 0;
}

// ==========================================
// FUNÇÃO PRINCIPAL: Roda todos em sequência
// ==========================================
int main() {
    std::cout << "--- EXECUTANDO EXERCICIO 1 ---" << std::endl;
    main1(); 
    std::cout << "--------------------------------\n" << std::endl;

    std::cout << "--- EXECUTANDO EXERCICIO 2 ---" << std::endl;
    main2(); 
    std::cout << "--------------------------------\n" << std::endl;

    std::cout << "--- EXECUTANDO EXERCICIO 3 ---" << std::endl;
    main3(); 
    std::cout << "--------------------------------\n" << std::endl;

    std::cout << "--- EXECUTANDO EXERCICIO 4 ---" << std::endl;
    main4(); 
    std::cout << "--------------------------------\n" << std::endl;

    std::cout << "--- EXECUTANDO EXERCICIO 5 ---" << std::endl;
    main5(); 
    std::cout << "--------------------------------\n" << std::endl;

    std::cout << "--- EXECUTANDO EXERCICIO 6 ---" << std::endl;
    main6(); 
    std::cout << "--------------------------------\n" << std::endl;

    std::cout << "--- EXECUTANDO EXERCICIO 7 ---" << std::endl;
    main7(); 
    std::cout << "--------------------------------\n" << std::endl;

    std::cout << "--- EXECUTANDO EXERCICIO 8 ---" << std::endl;
    main8(); 
    std::cout << "--------------------------------\n" << std::endl;

    std::cout << "--- EXECUTANDO EXERCICIO 9 ---" << std::endl;
    main9(); 
    std::cout << "--------------------------------\n" << std::endl;

    // ==========================================


    std::cout << "--- EXECUTANDO EXERCICIO 11 ---" << std::endl;
    main11(); 
    std::cout << "--------------------------------\n" << std::endl;

    std::cout << "--- EXECUTANDO EXERCICIO 12 ---" << std::endl;
    main12(); 
    std::cout << "--------------------------------\n" << std::endl;

    std::cout << "--- EXECUTANDO EXERCICIO 13 ---" << std::endl;
    main13(); 
    std::cout << "--------------------------------\n" << std::endl;

    std::cout << "--- EXECUTANDO EXERCICIO 14 ---" << std::endl;
    main14(); 
    std::cout << "--------------------------------\n" << std::endl;

    std::cout << "--- EXECUTANDO EXERCICIO 15 ---" << std::endl;
    main15(); 
    std::cout << "--------------------------------\n" << std::endl;
    return 0;
}