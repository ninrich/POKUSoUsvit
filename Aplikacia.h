//
// Created by Peter Medžo on 18.12.2019.
//

#ifndef POKUSOUSVIT_APLIKACIA_H
#define POKUSOUSVIT_APLIKACIA_H
#include <iostream>
#include "Sklad.h"
#include "Surovina.h"
#include "Vyroba.h"
#include"Obchod.h"
#include "Recept.h"

using namespace std;

class Aplikacia {
private:
    Sklad sklad; //sluzi na nakup a predaj surovin, uskladnenie vyrobkov, na zaklade info z neho sa plati najom
    Vyroba vyroba; //sluzi na vyrobu vyrobkov, management strojov

    SurovinovyManazer surMan; // sluzi na zmenu pridavanie/odoberanie surovin, zmenu ich parametrov
    VyrobkovyManazer vyrMan; // sluzi na zmenu receptov na vyrobky

    Obchod zakaznickyObchod; //sluzi na predaj nasich vyrobkov zakaznikom


    vector<Surovina> receptySuroviny; // ake suroviny existuju, napr: Drevo(cena=50)
    vector<> receptyVyrobky; // ake vyrobky existuju, napriklad Stolicka(drevo: 50, zelezo, 4)

    int penjazky; //pouzivaju sa v Sklade, Vyrobe, Obchode
    int zostavajuciCas;
    vector<Suroviny>

    int m_pocetPredanychStolov;
    int m_pocetPredanychStoliciek;
    string m_hesloOdFirmy;

    bool stavHry;
    bool koniecHry;
    bool stavVydavkov;

    bool vyrobVyrobok(Recept recept) {
        if ( ! (sklad.jeDostatokSurovin(recept) && vyroba.mameDostatokCasu(recept)) {
            return false;
        }
        sklad.odstranSuroviny(recept.suroviny);
        vyroba.vyrobVyrobok(recept);
        sklad.pridajVyrobok(recept.nazov);
        return true;
    }

    void menuVyrobVyrobok() {
        cout << "Momentalne mozes vyrobit tieto picoviny:";
        vytlacReceptyVyrobkov();
        int vyber;
        vyber >> cin;
        auto recept = vyberRecept(vyber);

        if (vyrobVyrobok(recept)) {
            cout << "vyrobil si ...";
        } else {
            << "nepodarilo sa vyrobit ...";
        }


    }


    void VytlacReceptyVyrobkov() {
        // vytlac toto cele v tvare:
        // 0: stolicka
        // 1: stol
        vyroba.receptyVyrobky
    }

    void vyberRecept(int index) {
        return vyroba.receptyVyrobky[index];
    }





public:
    Aplikacia();
    void hra();
    void dashboard();



};


#endif //POKUSOUSVIT_APLIKACIA_H
