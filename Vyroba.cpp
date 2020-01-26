//
// Created by Peter Medžo on 17.12.2019.
//
using namespace std;
#include "Vyroba.h"
Vyroba::Vyroba(Sklad *sklad, int pocetStrojov) {
    m_pocetStrojov = pocetStrojov;
    m_vyrobnyCas = 1000  * pocetStrojov ;
    msklad = sklad;

}

void Vyroba::vyrobVyrobok(string nazovVyrobku, int cenaVyrobku, int dobaVyrobyVyrobku, int mnozstvoDrevaNaVyrobu,
                          int mnozstvoZelezaNaVyrobu, int mnozstvoSpojovaciehoMaterialuNaVyrobu) {

   if ((msklad->getDrevo()->getMnozstvoSuroviny() >= mnozstvoDrevaNaVyrobu) && (msklad->getZelezo()->getMnozstvoSuroviny() >= mnozstvoSpojovaciehoMaterialuNaVyrobu) && (msklad->getSpojovaciMaterial()->getMnozstvoSuroviny() >= mnozstvoSpojovaciehoMaterialuNaVyrobu) && (dobaVyrobyVyrobku <= m_vyrobnyCas)) {

        Vyrobok *vyrobok = new Vyrobok(nazovVyrobku, cenaVyrobku, dobaVyrobyVyrobku, mnozstvoDrevaNaVyrobu, mnozstvoZelezaNaVyrobu, mnozstvoSpojovaciehoMaterialuNaVyrobu);

        msklad->pridajVyrobok(vyrobok);

        msklad->getDrevo() ->setMnozstvoSuroviny(msklad->getDrevo()->getMnozstvoSuroviny() - mnozstvoDrevaNaVyrobu);

        msklad->getZelezo() ->setMnozstvoSuroviny(msklad->getZelezo() ->getMnozstvoSuroviny() - mnozstvoZelezaNaVyrobu);

        msklad->getSpojovaciMaterial() ->setMnozstvoSuroviny(msklad->getSpojovaciMaterial() ->getMnozstvoSuroviny() - mnozstvoSpojovaciehoMaterialuNaVyrobu);

        m_vyrobnyCas -= dobaVyrobyVyrobku;

        cout << "Prave sa vytvoril(/a) " << nazovVyrobku << endl;

        if(msklad->getPocetVyrobkov(nazovVyrobku) == 1) {
            cout << "Na sklade je prave " << msklad->getPocetVyrobkov(nazovVyrobku) << " " << nazovVyrobku << endl;
        }
    } else {
        cout << "Nemozes vytvorit" << nazovVyrobku << endl;
    }
}
void Vyroba::nakupStroj() {
    if(Sklad::financie >= 150000){
        m_pocetStrojov ++;
        m_vyrobnyCas = 1000 * m_pocetStrojov;

        Sklad::financie -= 150000;

        cout << "Pocet vyrobnych strojov je: " << m_pocetStrojov << endl;
        cout << "Stav financii je: " << Sklad::financie << " korun" << endl;
    }
    else{
        cout << "Nemas dostatocne mnozstvo financii!!!" << endl;
    }
}

void Vyroba::predajStroj() {
    if(m_pocetStrojov > 0){
        m_pocetStrojov -= 1;

        m_vyrobnyCas = 1000 * m_pocetStrojov;

        Sklad::financie += 75000;
        cout << "Pocet vyrobnych Strojov je: " << m_pocetStrojov << endl;
        cout << "Stav financii je: " << Sklad::financie << " korun" << endl;
    }
    else{
        cout << "Uz ziadne vyrobne stroje nemas!" << endl;
    }
}
int Vyroba::getPocetStrojov() {
    return m_pocetStrojov;
}