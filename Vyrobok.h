//
// Created by Peter Medžo on 17.12.2019.
//

#ifndef POKUSOUSVIT_VYROBOK_H
#define POKUSOUSVIT_VYROBOK_H

#include <iostream>
using namespace std;

class Vyrobok {
private:
    string m_nazovVyrobku;
    int m_cenaVyrobku;
    int m_dobaVyrobyVyrobku;
    int m_mnozstvoDrevaNaVyrobu;
    int m_mnozstvoZelezaNaVyrobu;
    int m_mnozstvoSpojovaciehoMaterialuNaVyrobu;
public:
    Vyrobok(string nazovVyrobku,int cenaVyrobku, int dobaVyrobyVyrobku,
            int mnozstvoDrevaNaVyrobu, int mnozstvoZelezaNaVyrobu, int mnozstvoSpojovaciehoMaterialuNaVyrobu);
    string getNazovVyrobku();
    int getCenaVyrobku();
    int getDobaVyrobyVyrobku();
    int getMnozstvoDrevaNaVyrobu();
    int getMnozstvoZelezaNaVyrobu();
    int getMnozstvoSpojovaciehoMaterialuNaVyrobu();
    string getNazovZvolenehoVyrobku();


};


#endif //POKUSOUSVIT_VYROBOK_H
