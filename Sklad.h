//
// Created by Peter Medžo on 17.12.2019.
//

#ifndef POKUSOUSVIT_SKLAD_H
#define POKUSOUSVIT_SKLAD_H

#include "Surovina.h"
#include "Suroviny/Drevo.h"
#include "Vyrobok.h"
#include <vector>
#include <iostream>
#include <map>


using namespace std;

class Sklad {
private:
    map<string, int> suroviny;

    // prerobit podla suroviny
    vector <Vyrobok*> vyrobky = vector<Vyrobok*>();

public:
    static int financie;
    Sklad(Surovina&, Surovina&, Surovina&);
    Sklad();
    int getPocetVyrobkov(string);
    int getCenaVyrobku(string);
    void pridajSurovinu(string nazovSuroviny, int mnozstvo);

    /* zoberie recept a hodi true ak na to sklad ma suroviny */
    bool jeDostatokSurovin(Recept recept);

    void odoberSurovinu(string nazovSuroviny, int mnozstvo);

    /* odstrani surovini podla receptu */
    vector<Surovina> odstranSuroviny(Recept recept);

    /* v podstate to iste co suroviny */
    void pridajVyrobky(string nazovVyrobku, int mnozstvo);

    /* zrata vsetky suroviny a vrati ich pocet */
    int getPocetSurovin();
    /* zrata vsetky vyrobky a vrati ich pocet */
    int getPocetVyrobkov();


    void vypisSuroviny();


    ~Sklad();

};


#endif //POKUSOUSVIT_SKLAD_H
