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

    string Strs; // vector contendo os valores dos STR


public:

   void setDna(string arquivo); 

/*! função responsável por preencher os dados da classe
    @param arquivo recebe o nome do arquivo contendo a sequencia de dna
*/

    void SetStrs(string sequencia);
    /*! Essa funçâo tem como objetivo encontrar os STRs da sequencia de dna
	@param sequencia recebe qual a sequencia que deve ser procurada e setará o valorda string str com base nisso
    */

   string getStr();
    /*! Essa funçâo tem como objetivo retornar o valor das 3 str
	@return o valor em string da concatenação dos 3 valores de str
    */

};

#endif