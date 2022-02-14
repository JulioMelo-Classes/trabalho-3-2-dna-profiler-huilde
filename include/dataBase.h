#ifndef DATABASE_H
#define DATABASE_H

using namespace std;

class dataBase{
    
    private: 
    

    public:
    vector<pair<string,string>> dados;
    
    dataBase(string arquivo);

   /*! construtor padrão da classe
    @param arquivo recebe o nome do arquivo do qual serão preenchidas as informações
    */


string getIdentidade(string strNum);

};

#endif