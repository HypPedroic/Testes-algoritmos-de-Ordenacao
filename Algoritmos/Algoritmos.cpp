#include "Algoritmos.h"
#include <iostream>
#include <chrono>
#include <cstdlib>

double InsertionSort(int arr[], int n) {
    auto start = std::chrono::high_resolution_clock::now();
    int chave, j;
    for (int i = 1; i < n; i++) {
        chave = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > chave) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = chave;
    }
    
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> tempoGasto = end - start;
    return tempoGasto.count();
}

double BubbleSort(int arr[], int n) {
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                std::swap(arr[j], arr[j+1]);
            }
        }
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> tempoGasto = end - start;
    return tempoGasto.count();
}

double SelectionSort(int arr[], int n) {
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < n-1; i++) {
        int min_idx = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        std::swap(arr[min_idx], arr[i]);
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> tempoGasto = end - start;
    return tempoGasto.count();
}


double ShellSort(int arr[], int n) {
    auto start = std::chrono::high_resolution_clock::now();
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> tempoGasto = end - start;
    return tempoGasto.count();
}
