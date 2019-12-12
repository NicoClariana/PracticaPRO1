#ifndef FMGIA_H
#define FMGIA_H

#include "stock.h"

#include <iostream>
using namespace std;

typedef string id_fmgia_tipus;

class fmgia {

private:
    ...

public:
    // CONSTRUCTIORS
    fmgia();
    fmgia(id_fmgia_tipus id);

    ~fmgia();

    // MODIFICADORS
    bool set_tipusfmg(stock s);
    /* Post: ... */

    // CONSULTORS
    void get_tipusfmg(bool& cabra, bool& ovella, bool& vaca, bool& crua, bool& pasteur, bool& ramat_propi);
    /* Pre: ... */
    /* Post: Actualitza els diferents booleans relatius als tipus de formatge que porta a la fira la formatgeria del p.i. */

    void llegeix_fmgia();

    void escriu_fmgia() const;
};
#endif
