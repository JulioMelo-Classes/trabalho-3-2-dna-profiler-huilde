#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include "dataBase.h"

using namespace std;

dataBase::dataBase(string arquivo){
std::ifstream palavras;
    palavras.open("../"+arquivo);
    string nome;
    string quantidade;
    string numero;
    getline(palavras,nome);
    while (getline(palavras,nome,','))
    {   quantidade = "";
        for (int i = 0; i < 2; i++)
        {
            getline(palavras,numero,',');
            quantidade+=numero;
        }
        getline(palavras,numero);
        quantidade+=numero;        
        dados.push_back(make_pair(nome,quantidade));
    }
    
    palavras.close();


}

/*! construtor padrão da classe
    @param arquivo recebe o nome do arquivo do qual serão preenchidas as informações
*/

string dataBase::getIdentidade(string strNum){

    for (int i = 0; i < dados.size(); i++)
    {
        if(strNum == dados[i].second){
            return dados[i].first;
        }
    }
    return "No match";
}
