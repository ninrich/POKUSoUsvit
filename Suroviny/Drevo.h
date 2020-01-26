//
// Created by ninot on 26. 1. 2020.
//

#include <Surovina.h>
#ifndef POKUSOUSVIT_DREVO_H
#define POKUSOUSVIT_DREVO_H


class Drevo : public Surovina {
public:

    Drevo() : Surovina() {};
    ~Drevo() override = default;;

    string getNazovSuroviny() override{
        return "drevo";
    }

    int getCenaSuroviny() override {
        return 100;
    }
};


#endif //POKUSOUSVIT_DREVO_H
