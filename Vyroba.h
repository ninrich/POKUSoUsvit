//
// Created by Peter Medžo on 17.12.2019.
//

#ifndef POKUSOUSVIT_VYROBA_H
#define POKUSOUSVIT_VYROBA_H
#include "Sklad.h"
#include "Surovina.h"
#include "Vyrobok.h"
#include <iostream>
using namespace std;

class Vyroba {
private:
    Sklad *msklad;
    int m_pocetStrojov;
    int m_vyrobnyCas;

public:
    Vyroba(Sklad* sklad, int pocetStrojov);
    void nakupStroj();
    void predajStroj();
    int getPocetStrojov();
    void vyrobVyrobok(std::string nazovVyrobku, int cenaVyrobku, int dobaVyrobyVyrobku, int mnozstvoDrevaNaVyrobu,
                      int mnozstvoZelezaNaVyrobu, int mnozstvoSpojovaciehoMaterialuNaVyrobu);

};


#endif //POKUSOUSVIT_VYROBA_H
