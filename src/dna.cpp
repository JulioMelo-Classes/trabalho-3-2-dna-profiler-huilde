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


void dna::SetStrs(string sequencia){
    int tamanho= 0;
    for (int i = 0; i <dna.size()-4; i++)
    { 
        if(dna[i]==sequencia[0] && dna[i+1]==sequencia[1] && dna[i+2]==sequencia[2] && dna[i+3]==sequencia[3]){
            int contador = 0;
            while (dna[i]==sequencia[0] && dna[i+1]==sequencia[1] && dna[i+2]==sequencia[2] && dna[i+3]==sequencia[3])
            {
                contador+=1;
                i+=4;
                if (contador>tamanho)
                {
                    tamanho = contador;
                }
                
            }  
        }
    }
    Strs += (to_string(tamanho));
}



string dna::getStr(){
    return Strs;
}
