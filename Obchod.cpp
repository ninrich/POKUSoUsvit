//
// Created by Peter Medžo on 18.12.2019.
//

#include "Obchod.h"
Obchod::Obchod(Vyroba *vyroba, Sklad *sklad) {
    vyroba = vyroba;
    sklad = sklad;
}

void Obchod::nakupVyrobok(string nazovVyrobku) {
    if(sklad->getPocetVyrobkov(nazovVyrobku) > 0){
        cout << "V poriadku" << endl;
        sklad->odoberVyrobok(nazovVyrobku);
    }
    else{
        cout << "Vyrobok: " << nazovVyrobku << "sa nenachadza v sklade" << endl;
    }
}