#ifndef STOCK_H
#define STOCK_H

#include "parada.h"

#include <iostream>
using namespace std;

class stock {
    /* Tipus de mÃ²dul: Dades.
     * DescripciÃ³: El conjunt de formatges cadascun amb els seu nom i unitats.
    */
private:
    // ATRIBUTS PRIVADES
    ...

    // FUNCIONS PRIVADES
    ...

public:
    // CONSTRUCTORES
    stock();
    stock(const stock& s);

    // CONSULTORES
    bool actualitzar_stock();

    // IN OUT
    void llegeix_stock();
    void escriu_stock() const;
}

#endif
