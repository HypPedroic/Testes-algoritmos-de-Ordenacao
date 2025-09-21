#include "Menu.h"
#include <iostream>

int Menu(){
    int opcao1;
    std::cout << "--------------------------" << std::endl;
    std::cout << "  PROJETOS DE ALGORITMOS  " << std::endl;
    std::cout << "--------------------------" << std::endl;
    std::cout << "1. Insertion Sort" << std::endl;
    std::cout << "2. Bubble Sort" << std::endl;
    std::cout << "3. Selection Sort" << std::endl;
    std::cout << "4. Shell Sort" << std::endl;
    std::cout << "0. Sair" << std::endl;
    std::cout << "--------------------------" << std::endl;

    std::cin >> opcao1;

    return opcao1;
}

int escolherTamanho() {
    int opcao2;

    std::cout << "--------------------------" << std::endl;
    std::cout << "Escolha o tamanho do vetor:" << std::endl;
    std::cout << "1 - 10" << std::endl;
    std::cout << "2 - 100" << std::endl;
    std::cout << "3 - 1000" << std::endl;
    std::cout << "4 - 10000" << std::endl;
    std::cout << "5 - 100000" << std::endl;
    std::cout << "6 - 1000000" << std::endl;
    std::cout << "--------------------------" << std::endl;

    std::cin >> opcao2;
    return opcao2;
}

int escolherTipo() {
    int opcao3;

    std::cout << "--------------------------" << std::endl;
    std::cout << "Escolha o tipo do vetor:" << std::endl;
    std::cout << "1 - crescente" << std::endl;
    std::cout << "2 - decrescente" << std::endl;
    std::cout << "3 - aleatorio" << std::endl;
    std::cout << "--------------------------" << std::endl;

    std::cin >> opcao3;
    return opcao3;
}

int converterTamanho(int opcao) {
    switch(opcao) {
        case 1:
            return 10;
        case 2:
            return 100;
        case 3:
            return 1000;
        case 4:
            return 10000;
        case 5:
            return 100000;
        case 6:
            return 1000000;
        default:
            std::cout << "Opção inválida. Tamanho padrão (10) será usado." << std::endl;
            return 10;
    }
}

int verificarEntrada(int opcao, int min, int max, int defaultVal) {
    if(opcao < min || opcao > max) {
        std::cout << "Opção inválida. Valor padrão (" << defaultVal << ") será usado." << std::endl;
        return defaultVal;
    }
    return opcao;
}
