#ifndef VISITANT_H
#define VISITANT_H

#include <iostream>
using namespace std;

typedef struct {
    string pila;
    string cog1;
    string cog2;
} nom_tipus;
typedef enum { voltant, esperant, repos } estat_vis_tipus;

class visitant {

    /* Tipus: dades.
    * Descripcio: La info del visitant de la fira incloent les seves dades personals i el contingut de la bossa de la seva compra.
    */

private:
    ...
    /*
    Invariant de la representacio:
    ...
    */

public:
    // CONSTRUCTORES
    visitant();
    /* Pre: cert */
    /* Post: el resultat es un estudiant amb DNI = 0 i sense nota */

    visitant(int dnii);
    /* Pre: dni >= 0 */
    /* Post: el resultat es un visitant amb dni = dnii, la bossa i la comanda valen stock buit, unitats = 0 i pes = 0.0. */

    ~visitant();

    // MODIFICADORES

    void afegir_formatges(stock com);
    /* Post: la bossa del p.i. passa a tenir l'stock compra a mes dels formatges que ja tenia. */
    void decidir_comanda(stock com);
    /* Post: la comanda del p.i. passa a valdre com. */

    // CONSULTORES
    estat
    // IN i OUT

    void llegeix_visitant();
  /* Pre:  hi ha preparats al canal estandard d'entrada un enter no negatiu
     i un double */
  /* Post: el parametre implicit passa a tenir els atributs llegits
     del canal estandard d'entrada; si el double no pertany a l'interval
     [0..nota_maxima()], el p.i. es queda sense nota */

    void escriu_visitant() const;
    /* Post: S'han escrit els atributs del p.i. i el stock contingut a la seva bossa x pel COUT std. */
};
#endif
