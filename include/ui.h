#ifndef UI_H
#define UI_H

using namespace std;

class ui{
    
    private: 


    public:
    void showProgram();

    /*! 
        função responsável por transmitir aos usuários 
        as informações iniciais do programa
    */

   void showFiles(string dataBase, string Dna);

    /*! função responsável por dizer ao usuários quais arquivos estão sendo utilizados
        durante a execução do programa. @param dataBase é o nome do arquivo da base de datos e
        @param Dna representa o nome do arquivo que contém a sequência de dna que será analisada
    */


void showDnaProfile(string dnanProfile);
/*! função responsável por dizer ao usuário qual é o dono do dna
        @param dnaProfile recebe o nome do dono do perfil de DNA
*/


};

#endif