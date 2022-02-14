#include <iostream>
#include <sstream>
#include "ui.h"
using namespace std;
#define ESC "\033["
#define LIGHT_BLUE_BKG "001"
#define PURPLE_TXT "94"
#define RESET "\033[m"
#define RED "91"


void ui::showProgram(){
    cout<<"=========================================================="<<endl;
    cout<<"  Welcome to the Basic DNA profiler, V1.0"<<endl;
    cout<<"  Copyright (C) 2021, Selan R. dos santos"<<endl;
    cout<<"=========================================================="<<endl<<endl;

    cout << ESC << LIGHT_BLUE_BKG <<";"<< PURPLE_TXT <<"m"<<
    "This program loads a DNA database and a unknow"<<endl<<
    "DNA sequence and tries to find a match between"<<endl<<
    "the input DNA sequence and the DNA database."<< RESET<<endl;
}

/*! 
    função responsável por transmitir aos usuários 
    as informações iniciais do programa
*/

void ui::showFiles(string dataBase, string Dna){

    cout <<"[+]  Preparing to read the DNA Database files[" << ESC << LIGHT_BLUE_BKG <<";"<< RED <<"m"<<
    dataBase<< RESET<< "]" <<endl<< "[+]  Preparing to read the unknown DNA sequence files["<< ESC << LIGHT_BLUE_BKG <<";"<< RED <<"m"<<
    Dna<< RESET<<"]"<<endl<< "[+]  Processing data, please wait."<<endl<<endl;

}

/*! função responsável por dizer ao usuários quais arquivos estão sendo utilizados
    durante a execução do programa. @param dataBase é o nome do arquivo da base de datos e
    @param Dna representa o nome do arquivo que contém a sequência de dna que será analisada
*/


void ui::showDnaProfile(string dnaProfile){
    cout<<"[+]  Input files sucessfuly read."<<endl<<
    "[+]  Searching the database for a match ... please wait."<<endl<<endl<<endl;

    if(dnaProfile == "No match"){
        cout<<">>> Sorry, no match in our database."<<endl;
    }
    else{
        cout<<"Match ID (99.9%): "<< dnaProfile<<endl;
    }
    
    }