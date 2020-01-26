//
// Created by ninot on 26. 1. 2020.
//

#ifndef POKUSOUSVIT_RECEPT_H
#define POKUSOUSVIT_RECEPT_H


//todo: vytvor recept, ktory bude mat map<string nazovSuroviny, int pocet> moze to by class/struct/. je to na
// tebe, premysli, ci od toho bude treba este daco viacej

#include "Surovina.h"
#include "string"
#include <map>

typedef struct  {
    string nazovVyrobku;
    map<string, int> suroviny;
} Recept;

#endif //POKUSOUSVIT_RECEPT_H
