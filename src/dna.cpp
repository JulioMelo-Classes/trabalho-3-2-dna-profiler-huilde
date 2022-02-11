#include <istream>
#include <iostream>
#include <ostream>
#include <sstream>
#include <string.h>
#include <fstream>
#include <vector>
#include <string.h>
#include "dna.h"

using namespace std;

void dna::setDna(string arquivo){
    std::ifstream palavras;
    palavras.open("../"+arquivo);
    getline(palavras, dna);
    palavras.close();
};

/*! função responsável por preencher os dados da classe
    @param arquivo recebe o nome do arquivo contendo a sequencia de dna
*/