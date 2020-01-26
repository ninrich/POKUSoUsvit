//
// Created by Peter Medžo on 17.12.2019.
//

#include "Vyrobok.h"
#include <iostream>
using namespace std;
Vyrobok::Vyrobok(string nazovVyrobku, int cenaVyrobku, int dobaVyrobyVyrobku, int mnozstvoDrevaNaVyrobu,
                 int mnozstvoZelezaNaVyrobu, int mnozstvoSpojovaciehoMaterialuNaVyrobu) {
    m_nazovVyrobku = nazovVyrobku;
    m_cenaVyrobku = cenaVyrobku;
    m_dobaVyrobyVyrobku = dobaVyrobyVyrobku;
    m_mnozstvoDrevaNaVyrobu = mnozstvoDrevaNaVyrobu;
    m_mnozstvoZelezaNaVyrobu = mnozstvoZelezaNaVyrobu;
    m_mnozstvoSpojovaciehoMaterialuNaVyrobu = mnozstvoSpojovaciehoMaterialuNaVyrobu;
}

string Vyrobok::getNazovVyrobku() {
    return m_nazovVyrobku;
}

int Vyrobok::getCenaVyrobku() {
    return m_cenaVyrobku;
}

int Vyrobok::getDobaVyrobyVyrobku() {
    return m_dobaVyrobyVyrobku;
}

int  Vyrobok::getMnozstvoDrevaNaVyrobu() {
    return m_mnozstvoDrevaNaVyrobu;
}

int Vyrobok::getMnozstvoZelezaNaVyrobu() {
    return m_mnozstvoZelezaNaVyrobu;
}

int Vyrobok::getMnozstvoSpojovaciehoMaterialuNaVyrobu() {
    return m_mnozstvoSpojovaciehoMaterialuNaVyrobu;
}
string Vyrobok::getNazovZvolenehoVyrobku() {
    return m_nazovVyrobku;
}