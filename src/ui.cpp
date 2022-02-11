#include <iostream>
#include <sstream>
#include "ui.h"
using namespace std;
#define ESC "\033["
#define LIGHT_BLUE_BKG "001"
#define PURPLE_TXT "94"
#define RESET "\033[m"


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