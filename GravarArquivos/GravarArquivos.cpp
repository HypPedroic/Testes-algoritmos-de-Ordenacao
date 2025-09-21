#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
#include "GravarArquivos.h"
#include <string>


void gravarEntrada(int arr[], int tamanho, int tipo, int algoritmo){
    std::string pastaTipo, nomeTipo, algoritmoU;

    if (tipo == 1) {
        pastaTipo = "Crescente/";
        nomeTipo = "Crescente";
    } else if (tipo == 2) {
        pastaTipo = "Decrescente/";
        nomeTipo = "Decrescente";
    } else if (tipo == 3) {
        pastaTipo = "Aleatorio/";
        nomeTipo = "Aleatorio";
    } else {
        std::cerr << "Tipo inválido para gravação." << std::endl;
        return;
    }

    if (algoritmo == 1) {
        algoritmoU = "Insertion Sort/";
    }
    else if (algoritmo == 2) {
        algoritmoU = "Bubble Sort/";
    }
    else if (algoritmo == 3) {
        algoritmoU = "Selection Sort/";
    }
    else if (algoritmo == 4) {
        algoritmoU = "Shell Sort/";
    }
    else {
        std::cerr << "Algoritmo inválido para gravação." << std::endl;
        return;
    }

    

    std::string dir = std::string(algoritmoU) + "Arquivos de Entrada/" + pastaTipo;
    std::filesystem::create_directories(dir);

    std::string nomeArquivo = dir + "Entrada" + nomeTipo + std::to_string(tamanho) + ".txt";
    std::ofstream arquivo(nomeArquivo);
    if (!arquivo.is_open()) {
        std::cerr << "Erro ao abrir o arquivo para escrita: " << nomeArquivo << std::endl;
        return;
    }

    arquivo << tamanho << std::endl;
    for (int i = 0; i < tamanho; ++i) {
        arquivo << arr[i] << std::endl;
    }
    std::cerr << "Arquivo de entrada gravado com sucesso: " << nomeArquivo << std::endl;
    arquivo.close();
    
}

void gravarSaida(int arr[], int tamanho, int tipo, int algoritmo){
    std::string pastaTipo, nomeTipo, algoritmoU;

    if (tipo == 1) {
        pastaTipo = "Crescente/";
        nomeTipo = "Crescente";
    } else if (tipo == 2) {
        pastaTipo = "Decrescente/";
        nomeTipo = "Decrescente";
    } else if (tipo == 3) {
        pastaTipo = "Aleatorio/";
        nomeTipo = "Aleatorio";
    } else {
        std::cerr << "Tipo inválido para gravação." << std::endl;
        return;
    }

    if (algoritmo == 1) {
        algoritmoU = "Insertion Sort/";
    }
    else if (algoritmo == 2) {
        algoritmoU = "Bubble Sort/";
    }
    else if (algoritmo == 3) {
        algoritmoU = "Selection Sort/";
    }
    else if (algoritmo == 4) {
        algoritmoU = "Shell Sort/";
    }
    else {
        std::cerr << "Algoritmo inválido para gravação." << std::endl;
        return;
    }

    

    std::string dir = std::string(algoritmoU) + "Arquivos de Saida/" + pastaTipo;
    std::filesystem::create_directories(dir);

    std::string nomeArquivo = dir + "Saida" + nomeTipo + std::to_string(tamanho) + ".txt";
    std::ofstream arquivo(nomeArquivo);
    if (!arquivo.is_open()) {
        std::cerr << "Erro ao abrir o arquivo para escrita: " << nomeArquivo << std::endl;
        return;
    }

    arquivo << tamanho << std::endl;
    for (int i = 0; i < tamanho; ++i) {
        arquivo << arr[i] << std::endl;
    }

    std::cerr << "Arquivo de saída gravado com sucesso: " << nomeArquivo << std::endl;
    arquivo.close();
    
}

void gravarTempo(double tempo, int tamanho, int tipo, int algoritmo){
    std::string pastaTipo, nomeTipo, algoritmoU;

    if (tipo == 1) {
        pastaTipo = "Crescente/";
        nomeTipo = "Crescente";
    } else if (tipo == 2) {
        pastaTipo = "Decrescente/";
        nomeTipo = "Decrescente";
    } else if (tipo == 3) {
        pastaTipo = "Aleatorio/";
        nomeTipo = "Aleatorio";
    } else {
        std::cerr << "Tipo inválido para gravação." << std::endl;
        return;
    }

    if (algoritmo == 1) {
        algoritmoU = "Insertion Sort/";
    }
    else if (algoritmo == 2) {
        algoritmoU = "Bubble Sort/";
    }
    else if (algoritmo == 3) {
        algoritmoU = "Selection Sort/";
    }
    else if (algoritmo == 4) {
        algoritmoU = "Shell Sort/";
    }
    else {
        std::cerr << "Algoritmo inválido para gravação." << std::endl;
        return;
    }

    

    std::string dir = std::string(algoritmoU) + "Arquivos de Tempo/" + pastaTipo;
    std::filesystem::create_directories(dir);

    std::string nomeArquivo = dir + "Tempo" + nomeTipo + std::to_string(tamanho) + ".txt";
    std::ofstream arquivo(nomeArquivo);
    if (!arquivo.is_open()) {
        std::cerr << "Erro ao abrir o arquivo para escrita: " << nomeArquivo << std::endl;
        return;
    }

    arquivo << tamanho << std::endl;
    arquivo << tempo << " ms" << std::endl;

    std::cerr << "Arquivo de tempo gravado com sucesso: " << nomeArquivo << std::endl;
    arquivo.close();
    
}
