#include <iostream>
#include <cstddef> // size_t

// ==========================================
// FUNÇÕES AUXILIARES (usadas por vários exercícios)
// ==========================================
int encontrarMaior(const int* arr, size_t tamanho) {
    int maior = arr[0];
    for (size_t i = 1; i < tamanho; i++) {
        if (arr[i] > maior) {
            maior = arr[i];
        }
    }
    return maior;
}

int encontrarMenor(const int* arr, size_t tamanho) {
    int menor = arr[0];
    for (size_t i = 1; i < tamanho; i++) {
        if (arr[i] < menor) {
            menor = arr[i];
        }
    }
    return menor;
}

// ==========================================
// EXERCÍCIO 1: Exibir números
// ==========================================
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
int main3() {
    int arr[5] = {1, 2, 3, 4, 5};
    std::cout << "o maior numero e " << encontrarMaior(arr, 5) << std::endl;
    return 0;
}

// ==========================================
// EXERCÍCIO 4: Encontrar menor (e maior)
// ==========================================
int main4() {
    int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "O maior numero e: " << encontrarMaior(numeros, 10) << std::endl;
    std::cout << "o menor numero e: " << encontrarMenor(numeros, 10) << std::endl;
    return 0;
}

// ==========================================
// EXERCÍCIO 5: Calcular média
// ==========================================
int main5() {
    int ingressos[5] = {6000, 8000, 10000, 12000, 15000};
    int jogos = 5;
    double somaIngressos = 0;

    for (int i = 0; i < jogos; i++) {
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
    for (int i = 0; i < tamanho; i++) {
        if (numeros[i] % 2 == 0) {
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
    for (int i = 0; i < tamanho; i++) {
        if (numeros[i] % 2 != 0) {
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
    for (int i = 4; i >= 0; i--) {
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

    for (int i = 0; i < 10; i++) {
        if (numeros[i] == 5) {
            contador++;
        }
    }
    std::cout << "O numero 5 aparece " << contador << " vezes no array." << std::endl;
    return 0;
}

// ==========================================
// EXERCÍCIO 11: Buscar elemento
// ==========================================
int main11() {
    int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int procurado = 5;
    bool encontrado = false;

    for (int i = 0; i < 10; i++) {
        if (numeros[i] == procurado) {
            std::cout << "o numero procurado " << procurado << " esta na posicao " << i << std::endl;
            encontrado = true;
            break; // Já achou, pode parar o loop
        }
    }

    if (!encontrado) {
        std::cout << "o numero procurado " << procurado << " nao esta no array" << std::endl;
    }

    return 0;
}

// ==========================================
// EXERCÍCIO 12: Números acima da média
// ==========================================
int main12() {
    int nota[8] = {1, 2, 3, 33, 23, 44, 5, 2};
    double soma = 0;

    for (int i = 0; i < 8; i++) {
        soma += nota[i];
    }

    double media = soma / 8;
    std::cout << "a media das notas e " << media << std::endl;
    std::cout << "as notas acima da media sao: " << std::endl;

    for (int i = 0; i < 8; i++) {
        if (nota[i] > media) {
            std::cout << "a nota " << nota[i] << " esta acima da media" << std::endl;
        }
    }
    return 0;
}

// ==========================================
// EXERCÍCIO 13: Maior e menor
// ==========================================
int main13() {
    int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "O maior numero e: " << encontrarMaior(numeros, 10) << std::endl;
    std::cout << "o menor numero e: " << encontrarMenor(numeros, 10) << std::endl;
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
    for (int i = 0; i < tamanho; i++) {
        if (numeros[i] % 2 == 0) {
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
    for (int i = 0; i < tamanho; i++) {
        if (numeros[i] > 0) {
            std::cout << numeros[i] << " ";
            positivo++;
        }
    }

    std::cout << std::endl;
    std::cout << "=== NEGATIVOS === " << std::endl << std::endl;
    std::cout << "Negativos: ";
    for (int i = 0; i < tamanho; i++) {
        if (numeros[i] < 0) {
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
    struct Exercicio {
        int numero;
        int (*funcao)();
    };

    Exercicio exercicios[] = {
        {1, main1},   {2, main2},   {3, main3},   {4, main4},   {5, main5},
        {6, main6},   {7, main7},   {8, main8},   {9, main9},   {10, main10},
        {11, main11}, {12, main12}, {13, main13}, {14, main14}, {15, main15}
    };

    for (const auto& ex : exercicios) {
        std::cout << "--- EXECUTANDO EXERCICIO " << ex.numero << " ---" << std::endl;
        ex.funcao();
        std::cout << "--------------------------------\n" << std::endl;
    }

    return 0;
}