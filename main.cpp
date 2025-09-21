#include "Algoritmos.h"
#include "ArrayGen.h"
#include "GravarArquivos.h"
#include "Menu.h"
#include <iostream>
#include <chrono>
#include <fstream>
#include <cstdlib>

void imprimirVetor(int arr[], int n) {
    std::cout << "\nVetor: ";
    
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main(){
    int opcao1=-1, opcao2, opcao3, tamanho = 0;
    double tempoGasto;
    int* array = nullptr;

    while(opcao1 != 0){
        opcao1 = Menu();
        if(opcao1 == 1){
            opcao2 = escolherTamanho();
            tamanho = converterTamanho(opcao2);

            opcao3 = escolherTipo();
            opcao3 = verificarEntrada(opcao3, 1, 3, 3); // Verifica se a entrada é válida, se não for define como 3 (aleatorio)

            array = gerarVetor(tamanho, opcao3);
            gravarEntrada(array, tamanho, opcao3, opcao1);
            tempoGasto = InsertionSort(array, tamanho);
            printf("Tempo gasto: %f ms\n", tempoGasto);
            gravarSaida(array, tamanho, opcao3, opcao1);
            gravarTempo(tempoGasto, tamanho, opcao3, opcao1);
            deleteArray(array);

            opcao1 = -1; // Reinicia o menu


        }
        else if(opcao1 == 2){
            opcao2 = escolherTamanho();
            tamanho = converterTamanho(opcao2);

            opcao3 = escolherTipo();
            opcao3 = verificarEntrada(opcao3, 1, 3, 3); // Verifica se a entrada é válida, se não for define como 3 (aleatorio)

            array = gerarVetor(tamanho, opcao3);
            gravarEntrada(array, tamanho, opcao3, opcao1);
            tempoGasto = BubbleSort(array, tamanho);
            printf("Tempo gasto: %f ms\n", tempoGasto);
            gravarSaida(array, tamanho, opcao3, opcao1);
            gravarTempo(tempoGasto, tamanho, opcao3, opcao1);
            deleteArray(array);

            opcao1 = -1; // Reinicia o menu
        }
        else if(opcao1 == 3){
            opcao2 = escolherTamanho();
            tamanho = converterTamanho(opcao2);

            opcao3 = escolherTipo();
            opcao3 = verificarEntrada(opcao3, 1, 3, 3); // Verifica se a entrada é válida, se não for define como 3 (aleatorio

            array = gerarVetor(tamanho, opcao3);
            gravarEntrada(array, tamanho, opcao3, opcao1);
            tempoGasto = SelectionSort(array, tamanho);
            printf("Tempo gasto: %f ms\n", tempoGasto);
            gravarSaida(array, tamanho, opcao3, opcao1);
            gravarTempo(tempoGasto, tamanho, opcao3, opcao1);
            deleteArray(array);

            opcao1 = -1; // Reinicia o menu
        }
        else if(opcao1 == 4){
            opcao2 = escolherTamanho();
            tamanho = converterTamanho(opcao2);

            opcao3 = escolherTipo();
            opcao3 = verificarEntrada(opcao3, 1, 3, 3); // Verifica se a entrada é válida, se não for define como 3 (aleatorio)
            
            array = gerarVetor(tamanho, opcao3);
            gravarEntrada(array, tamanho, opcao3, opcao1);
            tempoGasto = ShellSort(array, tamanho);
            printf("Tempo gasto: %f ms\n", tempoGasto);
            gravarSaida(array, tamanho, opcao3, opcao1);
            gravarTempo(tempoGasto, tamanho, opcao3, opcao1);
            deleteArray(array);
            
            opcao1 = -1; // Reinicia o menu
        }
        else if (opcao1 == 0) {
            std::cout << "Saindo do programa." << std::endl;
            return 0; // Sai do programa
        } else {
            std::cout << "Opção inválida. Tente novamente." << std::endl;
        }

    }

    return 0;

}