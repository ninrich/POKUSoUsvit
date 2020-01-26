//
// Created by Peter Medžo on 17.12.2019.
//

#include "Sklad.h"
#include<string>


Sklad::Sklad() {}


int Sklad::getPocetDreva() {
    return suroviny.find(Drevo().getNazovSuroviny())->second;
}

void Sklad::pridajSurovinu(string nazovSuroviny, int mnozstvo) {
    // toto presunut do classu Obchod
    /*
    int celkovaCena = surovina.getCenaSuroviny() * mnozstvo;
    if (celkovaCena > financie) {
        cout << "Nemas dostatok financii na nakup " << mnozstvo << "kusov suroviny \""
             << surovina.getNazovSuroviny() << "\". "<< endl;
        return;
    }
    */
    suroviny.at(nazovSuroviny) += mnozstvo;

    /*
    financie -= celkovaCena;

    cout << "Stav financii je: " << Sklad::financie << "korun" << endl;
     */
}


void Sklad::odoberSurovinu(string nazovSuroviny, int mnozstvo) {
    int aktualnyStav = suroviny.at(nazovSuroviny);
    if (mnozstvo > aktualnyStav) {
        cout << "Neda sa odstranit " << mnozstvo << "ks suroviny " << nazovSuroviny << ". Aktualny stav je " << aktualnyStav << endl;
        return;
    }
    aktualnyStav -= mnozstvo;
}

void Sklad::odstranSuroviny(vector<Surovina, int> surovinyNaOdstranenie) {
    for (Surovina surovina: surovinyNaOdstranenie)
    {

    }
}



void Sklad::vypisSuroviny() {
    cout<< "Sklad obsahuje:" << endl;
    for(const auto &elem : suroviny)
    {
        cout << elem.first << ": " << elem.second << "ks." << endl;
    }
}







