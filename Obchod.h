//
// Created by Peter Medžo on 18.12.2019.
//

#ifndef POKUSOUSVIT_OBCHOD_H
#define POKUSOUSVIT_OBCHOD_H
#include "Sklad.h"
#include "Surovina.h"
#include "Vyrobok.h"
#include "Vyroba.h"
#include <iostream>
using namespace std;

class Obchod {
private:
    Vyroba *vyroba;
    Sklad *sklad;
public:
    void nakupVyrobok(string nazovVyrobku);
    Obchod(Vyroba*, Sklad*);


};


#endif //POKUSOUSVIT_OBCHOD_H
