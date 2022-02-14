#include <iostream>
#include <string>
#include "ui.h"
#include "dna.h"
#include "dataBase.h"
//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
using std::cout; using std::endl;

int main(int argc, char* argv[])
{   ui interacao;
    dna dnaPessoal;

    string arquivoDna= argv[4]; //string contendo o nome do arquivo de dna
    string arquivoDados= argv[2]; //string contendo o nome da tabela de dados
    interacao.showProgram();
    interacao.showFiles(arquivoDados,arquivoDna);
    dnaPessoal.setDna(arquivoDna);
    dataBase dados =  dataBase(arquivoDados);
    dnaPessoal.SetStrs("AGAT");
    dnaPessoal.SetStrs("AATG");
    dnaPessoal.SetStrs("TATC");
    string Str = dnaPessoal.getStr();
    string donoDna = dados.getIdentidade(Str);
    interacao.showDnaProfile(donoDna);


}