#include <ctime>
#include <cstdlib>
#include "ArrayGen.h"

int* gerarVetor(int tamanho, int tipo){
    int* arr = new int[tamanho];

    if (tipo == 1) { // crescente
        for (int i = 0; i < tamanho; i++)
            arr[i] = i + 1;
    } else if (tipo == 2) { // decrescente
        for (int i = 0; i < tamanho; i++)
            arr[i] = tamanho - i;
    } else if (tipo == 3) { // aleatório
        std::srand(static_cast<unsigned int>(std::time(nullptr)));
        for (int i = 0; i < tamanho; i++)
            arr[i] = (std::rand() % tamanho) + 1; // números de 1 a tamanho
    }
    return arr;
}

void deleteArray(int arr[]){
    delete[] arr;
}
