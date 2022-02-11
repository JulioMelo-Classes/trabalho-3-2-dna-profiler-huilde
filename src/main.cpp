#include <iostream>
#include <string>
#include "ui.h"
#include "dna.h"
#include "dataBase.h"

#define ESC "\033["
#define LIGHT_BLUE_BKG "106"
#define PURPLE_TXT "35"
#define RESET "\033[m"

using std::cout; using std::endl;

int main(int argc, char* argv[])
{   ui interacao;
    dna dnaPessoal;

    string arquivoDna= argv[4]; //string contendo o nome do arquivo de dna
    string arquivoDados= argv[2]; //string contendo o nome da tabela de dados
    interacao.showProgram();
    dnaPessoal.setDna(arquivoDna);

}