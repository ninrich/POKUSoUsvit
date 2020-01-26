//
// Created by Peter Medžo on 18.12.2019.
//
int c;
#include "Aplikacia.h"
Aplikacia::Aplikacia() {
    m_pocetPredanychStolov = 0;
    m_pocetPredanychStoliciek = 0;

    sklad = Sklad(drevo,zelezo,spojovaciMaterial);
    vyroba = new Vyroba(sklad,2);
    obchod = new Obchod(vyroba,sklad);
    stavVydavkov = false;
    stavHry = false;
    koniecHry = false;
    m_hesloOdFirmy = "petoabrano";
}

void Aplikacia::hra() {
    int vyber;
    string heslo = "";
    stavHry = true;
    while(koniecHry != true){
        stavHry = true;
        cout << "Prihlasnie do uctu: " << endl;
        cout << "1. Zamestnanecky ucet: "<< endl;
        cout << "2. Rezim nakupu: " << endl;
        cout << "3. Opusti aplikaciu: " << endl;
        //cout << vyroba->getPocetStrojov() << endl;
        cin >> vyber;
        switch(vyber){
            case 1:
                cout << "Zadaj heslo a prihlas sa do systemu" << endl;

                cin >> heslo;
                if(heslo == m_hesloOdFirmy){
                    while(stavHry != false) {
                        cout << "1. Nakup nejake materialy: " << endl;
                        cout << "2. Vyrob vyrobok: " << endl;
                        cout << "3. Kup stroj: " << /*vyroba->getPocetStrojov()*/ endl;
                        cout << "4. Predaj stroj: " << endl;
                        cout << "5. Opusti Aplikaciu: " << endl;
                        cin >> vyber;
                        switch(vyber) {
                            case 1:
                                int mnozstvo;
                                cout << "1. Nakup dreva" << endl;
                                cout << "2. Nakup zeleza" << endl;
                                cout << "3. Nakup spojovacieho materialu" << endl;
                                cin >> vyber;
                                switch (vyber) {
                                    case 1:
                                    cout << "Zadaj mnozstvo dreva pre nakup" << endl;
                                    cin >> mnozstvo;
                                        sklad->pridajSurovinu(drevo, mnozstvo);
                                    break;
                                    case 2:
                                        cout << "Zadaj mnozstvo zeleza pre nakup" << endl;
                                        cin >> mnozstvo;
                                        sklad->pridajSurovinu(zelezo, mnozstvo);
                                        break;
                                    case 3:
                                        cout << "Zadaj mnozstvo spojovacieho materialu pre nakup" << endl;
                                        cin >> mnozstvo;
                                        sklad->pridajSurovinu(spojovaciMaterial, mnozstvo);
                                        break;
                                    default:
                                        break;
                                }

                                break;
                            case 2:
                                cout << "1. Vyrobienie solicky" << endl;
                                cout << "2. Vyrobenie stola" << endl;
                                cout << "5. Opusti Applikaciu" << endl;
                                cin >> vyber;
                                switch (vyber){
                                    case 1:
                                        vyroba->vyrobVyrobok("Stolicka", 8000, 25, 10, 7, 3);
                                      break;
                                    case 2:
                                        vyroba->vyrobVyrobok("Stol",15000,35,15,9,5);
                                        break;
                                    default:
                                        break;
                                }
                                break;
                            case 3:
                                vyroba->nakupStroj();
                                break;
                            case 4:
                                vyroba->predajStroj();
                                break;
                            case 5:
                                stavHry = false;
                                break;
                        }
                    }
                }
                else {
                    break;
                }
                break;
            case 2:
                while(stavHry != false){
                    cout << "1. Nakup stolicky" << endl;
                    cout << "2. Nakup stola" << endl;
                    cout << "3. Opusti Aplikaciu" <<endl;
                    cin >> vyber;
                    switch (vyber){
                        case 1:
                            obchod->nakupVyrobok("Stolicka");
                            m_pocetPredanychStoliciek ++;

                        case 2:
                            obchod->nakupVyrobok("Stol");
                            m_pocetPredanychStolov ++;
                            break;

                            case 3:
                                stavHry = false;
                                break;
                        default:
                            stavHry = false;
                            break;
                    }
                }
                break;
            case 3:
                cout << "Je potrebne zaplatit najom" << endl;
                sklad->zaplatVydaje(100);
                if(Sklad::financie < 0){
                    koniecHry = true;
                    stavHry = false;
                    break;
                }
                dashboard();
                m_pocetPredanychStoliciek = 0;
                m_pocetPredanychStolov = 0;
                cout << "Zelas si prejst do dalsieho kola?" << endl;
                cout << "1. Ano chcem!" << endl;
                cout << "2. Nie nechcem!" << endl;
                cin >> vyber;
                switch (vyber){
                    case 1:
                        koniecHry = false;
                        stavHry = true;
                        break;
                    case 2:
                        koniecHry = true;
                        stavHry = false;
                        break;
                    default:
                        koniecHry = true;
                        stavHry = false;
                        break;
                }
                    default:
                        break;
        }

    }
}


toto kolo
nakupime 59 d 69 z
postavime 34 sto 69 domov

stav:
    financie 69
    cas 12h
    najom: 34

warning:
    mas o 32 menej dreva ako potrebujes
    mas prilis malo casu
    aplikacia.sklad.vypisSuroviny()
    objednavka nie je naplnena!
menu:
    1. managemnet surovin - nakup/predaj, zmena ceny
    2. management vyroby - zvysenie vyrboy/znizenie vyroby/ zmena receptu
    3. objednavky - pridaj, odstran, zmen
    4. ukoncit kolo

void Aplikacia::dashboard() {
    cout << "Stav financii je: " << Sklad::financie << "korun" << endl;
    cout << "V sklade je: " << sklad->getDrevo()->getMnozstvoSuroviny() << "dreva" << endl;
    cout << "V sklade je: " << sklad->getZelezo()->getMnozstvoSuroviny() << "zeleza" << endl;
    cout << "V sklade je: " << sklad->getSpojovaciMaterial()->getMnozstvoSuroviny() << "pojovacich materialov" << endl;
    cout << "V sklade je: " << sklad->getPocetVyrobkov("Stolicka") << "stoliciek" << endl;
    cout << "V sklade je: " << sklad->getPocetVyrobkov("Stol") << "stolov" << endl;
    cout << "V sklade je: " <<vyroba->getPocetStrojov() << "strojov" << endl;
    cout << "V sklade je: " <<m_pocetPredanychStoliciek << "stoliciek" << "v ramci tohoto kola" << endl;
    cout << "V sklade je: " <<m_pocetPredanychStolov << "stolov" << "v ramci tohoto kola" << endl;
}