CXX = g++
CXXFLAGS = -IAlgoritmos -IArrayGen -IMenu -IGravarArquivos -Wall -g
SRC = main.cpp \
    	Algoritmos/Algoritmos.cpp \
    	ArrayGen/ArrayGen.cpp \
    	Menu/Menu.cpp \
    	GravarArquivos/GravarArquivos.cpp
OUT = main

all: $(OUT)

$(OUT): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(OUT)

clean:
	rm -f $(OUT)