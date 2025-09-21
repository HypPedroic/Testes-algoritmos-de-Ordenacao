#ifndef ARRAYGEN_H
#define ARRAYGEN_H

#include <cstdlib>
#include <ctime>

int* gerarVetor( int tamanho, int tipo);
    //tipo - 1: crescente
    //tipo - 2: decrescente
    //tipo - 3: aleatorio
    //Tamanhos: 10, 100, 1000, 10000, 100000, 1000000

void deleteArray(int arr[]); // Libera a memória alocada para o array

#endif