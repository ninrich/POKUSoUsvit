#include <iostream>
#include "Surovina.h"
#include "Sklad.h"
#include "Vyroba.h"
#include "Obchod.h"
#include "Aplikacia.h"
using namespace std;
int main() {
    //Surovina *drevo = new Surovina("drevo",100,40);
    //Surovina *zelezo = new Surovina("zelezo",300,30);
    //Surovina *spojovaciMaterial = new Surovina("spojovaciMaterial",400,20);
    //Sklad *msklad = new Sklad(drevo,zelezo,spojovaciMaterial);
   // Vyroba *vyroba = new Vyroba(msklad,2);
    //Obchod *obchod = new Obchod(vyroba,msklad);
    Aplikacia *aplikacia = new Aplikacia();
    //Vyrobok *Stolicka = new Vyrobok("Stolicka",8000,25,10,7,3);
    //Vyrobok *Stol = new Vyrobok("Stol",15000,35,15,9,5);
   aplikacia->hra();
    return 0;

}