//
// Created by Peter Medžo on 17.12.2019.
//

#ifndef POKUSOUSVIT_SUROVINA_H
#define POKUSOUSVIT_SUROVINA_H

#include <iostream>
using namespace std;

class Surovina {
public:
    Surovina(string nazovSuroviny,int cenaSuroviny,int mnozstvoSuroviny);
    virtual ~Surovina() = 0;
    virtual string getNazovSuroviny() = 0;
    virtual int getCenaSuroviny() = 0;
};


#endif //POKUSOUSVIT_SUROVINA_H
