//
// Created by Peter Medžo on 17.12.2019.
//

#include "Surovina.h"
using namespace std;
Surovina::Surovina(string nazovSuroviny, int cenaSuroviny, int mnozstvoSuroviny) {
    m_nazovSuroviny = nazovSuroviny;
    m_cenaSuroviny = cenaSuroviny;
    m_mnozstoSuroviny = mnozstvoSuroviny;
}

string Surovina::getNazovSuroviny()  {
    return m_nazovSuroviny;
}

int Surovina::getCenaSuroviny() {
    return m_cenaSuroviny;
}

int Surovina::getMnozstvoSuroviny() {
    return m_mnozstoSuroviny;
}

void Surovina::setNazovSuroviny(string nazovSuroviny) {
    m_nazovSuroviny = nazovSuroviny;
}

void Surovina::setCenaSuroviny(int cenaSuroviny) {
    m_cenaSuroviny = cenaSuroviny;
}

void Surovina::setMnozstvoSuroviny(int mnozstvoSuroviny)  {
    m_mnozstoSuroviny = mnozstvoSuroviny;
}
Surovina::~Surovina() {

}


