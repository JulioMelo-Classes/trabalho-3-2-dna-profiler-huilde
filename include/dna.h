#ifndef DNA_H
#define DNA_H
#include <istream>
#include <ostream>
#include <sstream>
#include <string.h>
#include <vector>

using namespace std;

class dna{
private: 
    string dna; // string contendo o texto do dna

    vector<int> Strs; // vector contendo os valores dos STR


public:

   void setDna(string arquivo); 

/*! função responsável por preencher os dados da classe
    @param arquivo recebe o nome do arquivo contendo a sequencia de dna
*/

    void SetStrs();
    /*! Essa funçâo tem como objetivo encontrar os STRs da sequencia de dna
	@param arquivo recebe o nome do arquivo contendo a sequencia de dna
    */


};

#endif